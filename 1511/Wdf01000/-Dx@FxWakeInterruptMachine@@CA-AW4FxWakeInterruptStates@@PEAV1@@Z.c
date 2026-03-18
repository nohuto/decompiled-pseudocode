/*
 * XREFs of ?Dx@FxWakeInterruptMachine@@CA?AW4FxWakeInterruptStates@@PEAV1@@Z @ 0x1C008D530
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushQueuedWorkitem@FxInterrupt@@QEAAXXZ @ 0x1C000F310 (-FlushQueuedWorkitem@FxInterrupt@@QEAAXXZ.c)
 *     ?AckPendingWakeInterruptOperation@FxPkgPnp@@QEAAXE@Z @ 0x1C0087A38 (-AckPendingWakeInterruptOperation@FxPkgPnp@@QEAAXE@Z.c)
 */

__int64 __fastcall FxWakeInterruptMachine::Dx(FxWakeInterruptMachine *This)
{
  KeFlushQueuedDpcs();
  FxInterrupt::FlushQueuedWorkitem(This->m_Interrupt);
  FxPkgPnp::AckPendingWakeInterruptOperation(This->m_PkgPnp, 0);
  return 10LL;
}
