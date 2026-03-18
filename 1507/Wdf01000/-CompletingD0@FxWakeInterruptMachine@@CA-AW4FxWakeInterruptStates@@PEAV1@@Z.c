/*
 * XREFs of ?CompletingD0@FxWakeInterruptMachine@@CA?AW4FxWakeInterruptStates@@PEAV1@@Z @ 0x1C00A3210
 * Callers:
 *     <none>
 * Callees:
 *     ?AckPendingWakeInterruptOperation@FxPkgPnp@@QEAAXXZ @ 0x1C009CC88 (-AckPendingWakeInterruptOperation@FxPkgPnp@@QEAAXXZ.c)
 */

__int64 __fastcall FxWakeInterruptMachine::CompletingD0(FxWakeInterruptMachine *This)
{
  FxPkgPnp::AckPendingWakeInterruptOperation(This->m_PkgPnp);
  return 2LL;
}
