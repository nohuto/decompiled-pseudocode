/*
 * XREFs of ?TimingOut@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C0038D00
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0025E40 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 */

__int64 __fastcall FxPowerIdleMachine::TimingOut(FxPowerIdleMachine *This)
{
  FxPkgPnp::PowerPolicyProcessEvent(
    (FxPkgPnp *)This[1].m_PowerTimeoutTimer.m_Timer.TimerDpc.DpcListEntry.Next,
    PwrPolPowerTimeoutExpired,
    0);
  This->m_Flags &= ~8u;
  KeClearEvent(&This->m_D0NotificationEvent.m_Event.m_Event);
  return 12LL;
}
