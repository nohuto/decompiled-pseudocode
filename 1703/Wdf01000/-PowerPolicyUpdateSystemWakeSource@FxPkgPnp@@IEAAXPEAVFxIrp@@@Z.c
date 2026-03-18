/*
 * XREFs of ?PowerPolicyUpdateSystemWakeSource@FxPkgPnp@@IEAAXPEAVFxIrp@@@Z @ 0x1C00A1398
 * Callers:
 *     ?_PowerPolicyWaitWakeCompletionRoutine@FxPkgPnp@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C00134C0 (-_PowerPolicyWaitWakeCompletionRoutine@FxPkgPnp@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqq @ 0x1C006AA34 (WPP_IFR_SF_qqq.c)
 */

void __fastcall FxPkgPnp::PowerPolicyUpdateSystemWakeSource(FxPkgPnp *this, FxIrp *Irp)
{
  FxDeviceBase *m_DeviceBase; // r8
  _DEVICE_OBJECT *_a2; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // r8

  this->m_PowerPolicyMachine.m_Owner->m_SystemWakeSource = PoGetSystemWake(Irp->m_Irp);
  if ( this->m_PowerPolicyMachine.m_Owner->m_SystemWakeSource )
  {
    m_DeviceBase = this->m_DeviceBase;
    _a2 = m_DeviceBase->m_DeviceObject.m_DeviceObject;
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qqq(
      this->m_Globals,
      4u,
      0xCu,
      0xAu,
      (const _GUID *)&WPP_PowerPolicyStateMachineKM_cpp_Traceguids,
      _a1,
      _a2,
      Irp->m_Irp);
  }
}
