/*
 * XREFs of ?DispatchDeviceSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0011DB8
 * Callers:
 *     ?_DispatchSetPower@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C002F690 (-_DispatchSetPower@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@@Z @ 0x1C0018A40 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@@Z.c)
 *     ?SetPendingDevicePowerIrp@FxPkgPnp@@IEAAXPEAVFxIrp@@@Z @ 0x1C001CE24 (-SetPendingDevicePowerIrp@FxPkgPnp@@IEAAXPEAVFxIrp@@@Z.c)
 *     WPP_IFR_SF_qqq @ 0x1C006437C (WPP_IFR_SF_qqq.c)
 */

__int64 __fastcall FxPkgPdo::DispatchDeviceSetPower(FxPkgPdo *this, FxIrp *Irp)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rax
  FxPowerEvent v5; // edx
  FxDeviceBase *m_DeviceBase; // rax
  _DEVICE_OBJECT *_a3; // rcx
  const void *_a2; // rax
  FxPowerPolicyOwnerSettings *v10; // rax

  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  if ( m_Owner )
  {
    if ( !m_Owner->m_RequestedPowerUpIrp && !m_Owner->m_RequestedPowerDownIrp )
    {
      m_DeviceBase = this->m_DeviceBase;
      _a3 = m_DeviceBase->m_DeviceObject.m_DeviceObject;
      if ( m_DeviceBase->m_ObjectSize )
        _a2 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a2 = 0LL;
      WPP_IFR_SF_qqq(this->m_Globals, 2u, 0xCu, 0xAu, WPP_PdoPower_cpp_Traceguids, Irp->m_Irp, _a2, _a3);
    }
    v10 = this->m_PowerPolicyMachine.m_Owner;
    if ( v10->m_RequestedPowerUpIrp )
      v10->m_RequestedPowerUpIrp = 0;
    else
      v10->m_RequestedPowerDownIrp = 0;
  }
  FxPkgPnp::SetPendingDevicePowerIrp(this, Irp);
  v5 = PowerD0;
  if ( Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 1 )
    v5 = PowerDx;
  FxPkgPnp::PowerProcessEvent(this, v5);
  return 259LL;
}
