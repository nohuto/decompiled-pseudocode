/*
 * XREFs of ?PowerSendIdlePowerEvent@FxPkgPnp@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x1C0062910
 * Callers:
 *     ?PowerSendPowerUpEvents@FxPkgPnp@@IEAAXXZ @ 0x1C0062884 (-PowerSendPowerUpEvents@FxPkgPnp@@IEAAXXZ.c)
 *     ?PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z @ 0x1C00628AC (-PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z.c)
 *     ?PowerSendPowerUpFailureEvent@FxPkgPnp@@IEAAXXZ @ 0x1C00958BC (-PowerSendPowerUpFailureEvent@FxPkgPnp@@IEAAXXZ.c)
 * Callees:
 *     ?ProcessPowerEvent@FxPowerIdleMachine@@QEAAXW4FxPowerIdleEvents@@@Z @ 0x1C0063FB8 (-ProcessPowerEvent@FxPowerIdleMachine@@QEAAXW4FxPowerIdleEvents@@@Z.c)
 */

void __fastcall FxPkgPnp::PowerSendIdlePowerEvent(FxPkgPnp *this, FxPowerIdleEvents Event)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rcx

  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  if ( m_Owner )
    FxPowerIdleMachine::ProcessPowerEvent(&m_Owner->m_PowerIdleMachine, Event);
}
