/*
 * XREFs of ?PowerDxStoppedDisarmWakeNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C00992E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgPnp::PowerDxStoppedDisarmWakeNP(FxPkgPnp *This)
{
  This->PowerDisableWakeAtBusOverload(This);
  return 33608LL;
}
