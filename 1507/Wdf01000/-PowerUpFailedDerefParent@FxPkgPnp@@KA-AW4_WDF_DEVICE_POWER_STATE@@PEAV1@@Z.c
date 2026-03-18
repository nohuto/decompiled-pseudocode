/*
 * XREFs of ?PowerUpFailedDerefParent@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009C600
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z @ 0x1C005BBE4 (-NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z.c)
 *     ?SendEventToAllWakeInterrupts@FxPkgPnp@@QEAAXW4FxWakeInterruptEvents@@@Z @ 0x1C009E87C (-SendEventToAllWakeInterrupts@FxPkgPnp@@QEAAXW4FxWakeInterruptEvents@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerUpFailedDerefParent(FxPkgPnp *This)
{
  FxPkgPnp::SendEventToAllWakeInterrupts(This, WakeInterruptEventD0EntryFailed);
  FxPkgPnp::NotifyResourceObjectsDx(This, 36);
  return 829LL;
}
