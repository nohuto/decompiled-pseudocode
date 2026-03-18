/*
 * XREFs of ?PowerEnablingWakeAtBus@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C003C110
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerCompletePendedWakeIrp@FxPkgPnp@@IEAAXXZ @ 0x1C0013194 (-PowerCompletePendedWakeIrp@FxPkgPnp@@IEAAXXZ.c)
 *     ?PowerMakeWakeRequestNonCancelable@FxPkgPnp@@IEAAEJ@Z @ 0x1C0099A08 (-PowerMakeWakeRequestNonCancelable@FxPkgPnp@@IEAAEJ@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerEnablingWakeAtBus(FxPkgPnp *This)
{
  int v2; // eax

  v2 = This->PowerEnableWakeAtBusOverload(This);
  if ( v2 >= 0 )
    return 779LL;
  if ( FxPkgPnp::PowerMakeWakeRequestNonCancelable(This, v2) )
    FxPkgPnp::PowerCompletePendedWakeIrp(This);
  return 777LL;
}
