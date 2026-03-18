/*
 * XREFs of ?DxNotArmedForWake@FxWakeInterruptMachine@@CA?AW4FxWakeInterruptStates@@PEAV1@@Z @ 0x1C009C050
 * Callers:
 *     <none>
 * Callees:
 *     ?AckPendingWakeInterruptOperation@FxPkgPnp@@QEAAXE@Z @ 0x1C0096118 (-AckPendingWakeInterruptOperation@FxPkgPnp@@QEAAXE@Z.c)
 */

__int64 __fastcall FxWakeInterruptMachine::DxNotArmedForWake(FxWakeInterruptMachine *This)
{
  FxPkgPnp::AckPendingWakeInterruptOperation(This->m_PkgPnp, 1u);
  return 10LL;
}
