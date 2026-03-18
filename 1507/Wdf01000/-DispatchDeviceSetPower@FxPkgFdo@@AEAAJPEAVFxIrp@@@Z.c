/*
 * XREFs of ?DispatchDeviceSetPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0013978
 * Callers:
 *     ?_DispatchSetPower@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0011080 (-_DispatchSetPower@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?RaiseDevicePower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0006130 (-RaiseDevicePower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@@Z @ 0x1C0018A40 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@@Z.c)
 *     ?SetPendingDevicePowerIrp@FxPkgPnp@@IEAAXPEAVFxIrp@@@Z @ 0x1C001CE24 (-SetPendingDevicePowerIrp@FxPkgPnp@@IEAAXPEAVFxIrp@@@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_qqq @ 0x1C006437C (WPP_IFR_SF_qqq.c)
 */

__int64 __fastcall FxPkgFdo::DispatchDeviceSetPower(FxPkgFdo *this, FxIrp *Irp)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rax
  FxPkgPnp *v5; // rcx
  FxDeviceBase *m_DeviceBase; // rax
  _DEVICE_OBJECT *_a3; // rcx
  const void *_a2; // rax

  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  if ( m_Owner )
  {
    if ( m_Owner->m_RequestedPowerUpIrp )
    {
      m_Owner->m_RequestedPowerUpIrp = 0;
    }
    else
    {
      if ( !m_Owner->m_RequestedPowerDownIrp )
      {
        m_DeviceBase = this->m_DeviceBase;
        _a3 = m_DeviceBase->m_DeviceObject.m_DeviceObject;
        if ( m_DeviceBase->m_ObjectSize )
          _a2 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          _a2 = 0LL;
        WPP_IFR_SF_qqq(this->m_Globals, 2u, 0xCu, 0xAu, WPP_fdopower_cpp_Traceguids, Irp->m_Irp, _a2, _a3);
        FxVerifierBugCheckWorker(
          this->m_Globals,
          WDF_POWER_MULTIPLE_PPO,
          (unsigned __int64)this->m_DeviceBase->m_DeviceObject.m_DeviceObject,
          (unsigned __int64)Irp->m_Irp);
      }
      m_Owner->m_RequestedPowerDownIrp = 0;
    }
  }
  if ( Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 1 )
    return FxPkgFdo::RaiseDevicePower(this, Irp);
  FxPkgPnp::SetPendingDevicePowerIrp(this, Irp);
  FxPkgPnp::PowerProcessEvent(v5, PowerDx);
  return 259LL;
}
