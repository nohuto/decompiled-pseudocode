/*
 * XREFs of ?Waking@FxWakeInterruptMachine@@CA?AW4FxWakeInterruptStates@@PEAV1@@Z @ 0x1C00A1000
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0025590 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 */

__int64 __fastcall FxWakeInterruptMachine::Waking(FxWakeInterruptMachine *This, __int64 a2, unsigned __int8 a3)
{
  FxPkgPnp::PowerPolicyProcessEvent(This->m_PkgPnp, PwrPolWakeInterruptFired, a3);
  return 10LL;
}
