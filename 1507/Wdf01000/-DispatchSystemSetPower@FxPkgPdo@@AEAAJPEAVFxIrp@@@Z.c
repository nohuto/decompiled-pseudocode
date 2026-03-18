/*
 * XREFs of ?DispatchSystemSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C000707C
 * Callers:
 *     ?_DispatchSetPower@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C002F690 (-_DispatchSetPower@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0019D10 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C001C5A8 (-CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 */

int __fastcall FxPkgPdo::DispatchSystemSetPower(FxPkgPdo *this, FxIrp *Irp)
{
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  unsigned __int8 v5; // r8
  KIRQL v7; // bl
  unsigned __int8 v8; // r8

  m_DeviceObject = this->m_DeviceBase->m_DeviceObject.m_DeviceObject;
  this->m_SystemPowerState = Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.DeviceIoControl.IoControlCode;
  PoSetPowerState(
    m_DeviceObject,
    SystemPowerState,
    Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Power.State);
  if ( !this->m_PowerPolicyMachine.m_Owner )
    return FxPkgPnp::CompletePowerRequest(this, Irp, 0);
  if ( this->m_SystemPowerState == 1 )
  {
    v7 = KfRaiseIrql(2u);
    FxPkgPnp::PowerPolicyProcessEvent(this, PwrPolS0, v8);
    KeLowerIrql(v7);
    return FxPkgPnp::CompletePowerRequest(this, Irp, 0);
  }
  Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  this->m_PendingSystemPowerIrp = Irp->m_Irp;
  FxPkgPnp::PowerPolicyProcessEvent(this, PwrPolSx, v5);
  return 259;
}
