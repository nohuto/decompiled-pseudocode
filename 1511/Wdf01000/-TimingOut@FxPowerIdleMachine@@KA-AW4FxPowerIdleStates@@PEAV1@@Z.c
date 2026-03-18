/*
 * XREFs of ?TimingOut@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C00340D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C00151C0 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 */

__int64 __fastcall FxPowerIdleMachine::TimingOut(FxPowerIdleMachine *This, __int64 a2, unsigned __int8 a3)
{
  FxPkgPnp::PowerPolicyProcessEvent(
    (FxPkgPnp *)This[1].m_PowerTimeoutTimer.m_Timer.TimerDpc.DpcListEntry.Next,
    PwrPolPowerTimeoutExpired,
    a3);
  This->m_Flags &= ~8u;
  KeClearEvent(&This->m_D0NotificationEvent.m_Event.m_Event);
  return 12LL;
}
