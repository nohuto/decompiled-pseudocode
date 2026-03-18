/*
 * XREFs of ?Start@FxPowerIdleMachine@@QEAAXXZ @ 0x1C0063F70
 * Callers:
 *     ?PowerPolRestarting@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0099CA0 (-PowerPolRestarting@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x1C0023880 (-ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z.c)
 */

void __fastcall FxPowerIdleMachine::Start(FxPowerIdleMachine *this)
{
  KIRQL v2; // bl

  v2 = KeAcquireSpinLockRaiseToDpc(&this->m_Lock.m_Lock);
  FxPowerIdleMachine::ProcessEventLocked(this, PowerIdleEventStart);
  KeReleaseSpinLock(&this->m_Lock.m_Lock, v2);
}
