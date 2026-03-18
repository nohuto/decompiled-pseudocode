/*
 * XREFs of ?PowerGotoImplicitD3DisarmWakeAtBus@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C00997A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgPnp::PowerGotoImplicitD3DisarmWakeAtBus(FxPkgPnp *This)
{
  This->PowerDisableWakeAtBusOverload(This);
  return 788LL;
}
