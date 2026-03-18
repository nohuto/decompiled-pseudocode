/*
 * XREFs of ?CompletingD0@FxWakeInterruptMachine@@CA?AW4FxWakeInterruptStates@@PEAV1@@Z @ 0x1C009BFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?AckPendingWakeInterruptOperation@FxPkgPnp@@QEAAXE@Z @ 0x1C0096118 (-AckPendingWakeInterruptOperation@FxPkgPnp@@QEAAXE@Z.c)
 */

__int64 __fastcall FxWakeInterruptMachine::CompletingD0(FxWakeInterruptMachine *This)
{
  FxPkgPnp::AckPendingWakeInterruptOperation(This->m_PkgPnp, 0);
  return 2LL;
}
