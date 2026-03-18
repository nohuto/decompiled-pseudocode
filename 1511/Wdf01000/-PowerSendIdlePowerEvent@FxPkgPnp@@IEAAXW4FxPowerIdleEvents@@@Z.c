/*
 * XREFs of ?PowerSendIdlePowerEvent@FxPkgPnp@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x1C0055228
 * Callers:
 *     ?PowerSendPowerUpEvents@FxPkgPnp@@IEAAXXZ @ 0x1C00551A0 (-PowerSendPowerUpEvents@FxPkgPnp@@IEAAXXZ.c)
 *     ?PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z @ 0x1C00551C8 (-PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z.c)
 *     ?PowerSendPowerUpFailureEvent@FxPkgPnp@@IEAAXXZ @ 0x1C008722C (-PowerSendPowerUpFailureEvent@FxPkgPnp@@IEAAXXZ.c)
 * Callees:
 *     ?ProcessPowerEvent@FxPowerIdleMachine@@QEAAXW4FxPowerIdleEvents@@@Z @ 0x1C005704C (-ProcessPowerEvent@FxPowerIdleMachine@@QEAAXW4FxPowerIdleEvents@@@Z.c)
 */

void __fastcall FxPkgPnp::PowerSendIdlePowerEvent(FxPkgPnp *this, FxPowerIdleEvents Event)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rcx

  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  if ( m_Owner )
    FxPowerIdleMachine::ProcessPowerEvent(&m_Owner->m_PowerIdleMachine, Event);
}
