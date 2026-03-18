/*
 * XREFs of ?PowerUpFailedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0087420
 * Callers:
 *     <none>
 * Callees:
 *     ?DisconnectInterruptNP@FxPkgPnp@@AEAAXXZ @ 0x1C00863EC (-DisconnectInterruptNP@FxPkgPnp@@AEAAXXZ.c)
 *     ?SendEventToAllWakeInterrupts@FxPkgPnp@@QEAAXW4FxWakeInterruptEvents@@@Z @ 0x1C0089590 (-SendEventToAllWakeInterrupts@FxPkgPnp@@QEAAXW4FxWakeInterruptEvents@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerUpFailedNP(FxPkgPnp *This)
{
  FxPkgPnp::SendEventToAllWakeInterrupts(This, WakeInterruptEventD0EntryFailed);
  FxPkgPnp::DisconnectInterruptNP(This);
  return 830LL;
}
