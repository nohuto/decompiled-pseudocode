/*
 * XREFs of ?PowerDxStoppedArmForWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0094DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerCompleteWakeRequestFromWithinMachine@FxPkgPnp@@IEAAXJ@Z @ 0x1C0094C4C (-PowerCompleteWakeRequestFromWithinMachine@FxPkgPnp@@IEAAXJ@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerDxStoppedArmForWake(FxPkgPnp *This)
{
  int v2; // eax

  v2 = This->PowerEnableWakeAtBusOverload(This);
  if ( v2 >= 0 )
    return 805LL;
  FxPkgPnp::PowerCompleteWakeRequestFromWithinMachine(This, v2);
  return 799LL;
}
