/*
 * XREFs of ?DisablingTimerExpired@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C0098A60
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0025E40 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 */

__int64 __fastcall FxPowerIdleMachine::DisablingTimerExpired(FxPowerIdleMachine *This, __int64 a2, unsigned __int8 a3)
{
  This->m_Flags &= ~8u;
  FxPkgPnp::PowerPolicyProcessEvent(
    (FxPkgPnp *)This[1].m_PowerTimeoutTimer.m_Timer.TimerDpc.DpcListEntry.Next,
    PwrPolPowerTimeoutExpired,
    a3);
  return 5LL;
}
