/*
 * XREFs of ?PowerUpFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0099F50
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z @ 0x1C00657B8 (-NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z.c)
 *     ?SendEventToAllWakeInterrupts@FxPkgPnp@@QEAAXW4FxWakeInterruptEvents@@@Z @ 0x1C009C0EC (-SendEventToAllWakeInterrupts@FxPkgPnp@@QEAAXW4FxWakeInterruptEvents@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerUpFailed(FxPkgPnp *This)
{
  FxPkgPnp::SendEventToAllWakeInterrupts(This, WakeInterruptEventD0EntryFailed);
  FxPkgPnp::NotifyResourceObjectsDx(This, 36);
  return 830LL;
}
