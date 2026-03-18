/*
 * XREFs of ?ProcessPowerEvent@FxPowerIdleMachine@@QEAAXW4FxPowerIdleEvents@@@Z @ 0x1C005D2DC
 * Callers:
 *     ?PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z @ 0x1C005BCC4 (-PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z.c)
 *     ?PowerSendIdlePowerEvent@FxPkgPnp@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x1C005BD24 (-PowerSendIdlePowerEvent@FxPkgPnp@@IEAAXW4FxPowerIdleEvents@@@Z.c)
 *     ?PowerSendPowerDownFailureEvent@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z @ 0x1C009C3F0 (-PowerSendPowerDownFailureEvent@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z.c)
 * Callees:
 *     ?ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x1C0017010 (-ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z.c)
 */

void __fastcall FxPowerIdleMachine::ProcessPowerEvent(FxPowerIdleMachine *this, FxPowerIdleEvents Event)
{
  KIRQL v4; // bl

  v4 = KeAcquireSpinLockRaiseToDpc(&this->m_Lock.m_Lock);
  FxPowerIdleMachine::ProcessEventLocked(this, Event);
  KeReleaseSpinLock(&this->m_Lock.m_Lock, v4);
}
