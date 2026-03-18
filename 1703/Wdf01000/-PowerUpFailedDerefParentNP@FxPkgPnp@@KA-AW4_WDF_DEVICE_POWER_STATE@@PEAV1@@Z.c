/*
 * XREFs of ?PowerUpFailedDerefParentNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0099FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?DisconnectInterruptNP@FxPkgPnp@@AEAAXXZ @ 0x1C0098EDC (-DisconnectInterruptNP@FxPkgPnp@@AEAAXXZ.c)
 *     ?SendEventToAllWakeInterrupts@FxPkgPnp@@QEAAXW4FxWakeInterruptEvents@@@Z @ 0x1C009C0EC (-SendEventToAllWakeInterrupts@FxPkgPnp@@QEAAXW4FxWakeInterruptEvents@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerUpFailedDerefParentNP(FxPkgPnp *This)
{
  FxPkgPnp::SendEventToAllWakeInterrupts(This, WakeInterruptEventD0EntryFailed);
  FxPkgPnp::DisconnectInterruptNP(This);
  return 829LL;
}
