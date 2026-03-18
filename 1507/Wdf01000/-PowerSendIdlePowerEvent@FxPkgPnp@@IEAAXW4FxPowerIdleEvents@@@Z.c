/*
 * XREFs of ?PowerSendIdlePowerEvent@FxPkgPnp@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x1C005BD24
 * Callers:
 *     ?PowerSendPowerUpEvents@FxPkgPnp@@IEAAXXZ @ 0x1C005BC9C (-PowerSendPowerUpEvents@FxPkgPnp@@IEAAXXZ.c)
 *     ?PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z @ 0x1C005BCC4 (-PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z.c)
 *     ?PowerSendPowerUpFailureEvent@FxPkgPnp@@IEAAXXZ @ 0x1C009C46C (-PowerSendPowerUpFailureEvent@FxPkgPnp@@IEAAXXZ.c)
 * Callees:
 *     ?ProcessPowerEvent@FxPowerIdleMachine@@QEAAXW4FxPowerIdleEvents@@@Z @ 0x1C005D2DC (-ProcessPowerEvent@FxPowerIdleMachine@@QEAAXW4FxPowerIdleEvents@@@Z.c)
 */

void __fastcall FxPkgPnp::PowerSendIdlePowerEvent(FxPkgPnp *this, FxPowerIdleEvents Event)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rcx

  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  if ( m_Owner )
    FxPowerIdleMachine::ProcessPowerEvent(&m_Owner->m_PowerIdleMachine, Event);
}
