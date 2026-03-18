/*
 * XREFs of ?PowerEnablingWakeAtBus@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C00341D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerCompleteWakeRequestFromWithinMachine@FxPkgPnp@@IEAAXJ@Z @ 0x1C008652C (-PowerCompleteWakeRequestFromWithinMachine@FxPkgPnp@@IEAAXJ@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerEnablingWakeAtBus(FxPkgPnp *This)
{
  int v2; // eax

  v2 = This->PowerEnableWakeAtBusOverload(This);
  if ( v2 >= 0 )
    return 779LL;
  FxPkgPnp::PowerCompleteWakeRequestFromWithinMachine(This, v2);
  return 777LL;
}
