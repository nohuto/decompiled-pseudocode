/*
 * XREFs of ?DispatchDeviceSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C002B410
 * Callers:
 *     ?_DispatchSetPower@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C002EFF0 (-_DispatchSetPower@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?SetPendingDevicePowerIrp@FxPkgPnp@@IEAAXPEAVFxIrp@@@Z @ 0x1C0023414 (-SetPendingDevicePowerIrp@FxPkgPnp@@IEAAXPEAVFxIrp@@@Z.c)
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C00236B0 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 *     WPP_IFR_SF_qqq @ 0x1C006AA34 (WPP_IFR_SF_qqq.c)
 */

__int64 __fastcall FxPkgPdo::DispatchDeviceSetPower(FxPkgPdo *this, FxIrp *Irp)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rax
  unsigned int v5; // edx
  FxDeviceBase *m_DeviceBase; // rdx
  _DEVICE_OBJECT *_a3; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a2; // rdx
  FxPowerPolicyOwnerSettings *v11; // rax

  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  if ( m_Owner )
  {
    if ( !m_Owner->m_RequestedPowerUpIrp && !m_Owner->m_RequestedPowerDownIrp )
    {
      m_DeviceBase = this->m_DeviceBase;
      _a3 = m_DeviceBase->m_DeviceObject.m_DeviceObject;
      m_ObjectSize = m_DeviceBase->m_ObjectSize;
      _a2 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
        _a2 = 0LL;
      WPP_IFR_SF_qqq(this->m_Globals, 2u, 0xCu, 0xAu, WPP_PdoPower_cpp_Traceguids, Irp->m_Irp, _a2, _a3);
    }
    v11 = this->m_PowerPolicyMachine.m_Owner;
    if ( v11->m_RequestedPowerUpIrp )
      v11->m_RequestedPowerUpIrp = 0;
    else
      v11->m_RequestedPowerDownIrp = 0;
  }
  FxPkgPnp::SetPendingDevicePowerIrp(this, Irp);
  v5 = 1;
  if ( Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 1 )
    v5 = 2;
  FxPkgPnp::PowerProcessEvent(this, v5, 0);
  return 259LL;
}
