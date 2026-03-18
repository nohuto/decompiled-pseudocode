/*
 * XREFs of ?PowerPolicySubmitUsbIdleNotification@FxPkgPnp@@IEAAXXZ @ 0x1C00A3998
 * Callers:
 *     ?PowerPolTimerExpiredWakeCapableUsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A1540 (-PowerPolTimerExpiredWakeCapableUsbSS@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxPkgPnp::PowerPolicySubmitUsbIdleNotification(FxPkgPnp *this)
{
  FxUsbIdleInfo *m_UsbIdle; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx

  this->m_PowerPolicyMachine.m_Owner->m_UsbIdle->m_EventDropped = 0;
  m_UsbIdle = this->m_PowerPolicyMachine.m_Owner->m_UsbIdle;
  IoReuseIrp(m_UsbIdle->m_IdleIrp.m_Irp, 0);
  if ( IoSetCompletionRoutineEx(
         this->m_DeviceBase->m_DeviceObject.m_DeviceObject,
         m_UsbIdle->m_IdleIrp.m_Irp,
         (PIO_COMPLETION_ROUTINE)FxPkgPnp::_PowerPolicyUsbSelectiveSuspendCompletionRoutine,
         this,
         1u,
         1u,
         1u) < 0 )
  {
    CurrentStackLocation = m_UsbIdle->m_IdleIrp.m_Irp->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))FxPkgPnp::_PowerPolicyUsbSelectiveSuspendCompletionRoutine;
    CurrentStackLocation[-1].Context = this;
    CurrentStackLocation[-1].Control = -32;
  }
  m_UsbIdle->m_IdleIrp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = 15;
  m_UsbIdle->m_IdleIrp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2228263;
  m_UsbIdle->m_IdleIrp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Create.Options = 16;
  m_UsbIdle->m_IdleIrp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = (_NAMED_PIPE_CREATE_PARAMETERS *)&this->m_PowerPolicyMachine.m_Owner->m_UsbIdle->m_CallbackInfo;
  IofCallDriver(
    this->m_DeviceBase->m_AttachedDevice.m_DeviceObject,
    this->m_PowerPolicyMachine.m_Owner->m_UsbIdle->m_IdleIrp.m_Irp);
}
