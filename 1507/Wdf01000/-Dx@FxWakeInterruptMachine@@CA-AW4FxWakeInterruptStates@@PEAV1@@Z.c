/*
 * XREFs of ?Dx@FxWakeInterruptMachine@@CA?AW4FxWakeInterruptStates@@PEAV1@@Z @ 0x1C00A3230
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushQueuedWorkitem@FxInterrupt@@QEAAXXZ @ 0x1C0007B40 (-FlushQueuedWorkitem@FxInterrupt@@QEAAXXZ.c)
 *     ?AckPendingWakeInterruptOperation@FxPkgPnp@@QEAAXXZ @ 0x1C009CC88 (-AckPendingWakeInterruptOperation@FxPkgPnp@@QEAAXXZ.c)
 */

__int64 __fastcall FxWakeInterruptMachine::Dx(FxWakeInterruptMachine *This)
{
  KeFlushQueuedDpcs();
  FxInterrupt::FlushQueuedWorkitem(This->m_Interrupt);
  FxPkgPnp::AckPendingWakeInterruptOperation(This->m_PkgPnp);
  return 8LL;
}
