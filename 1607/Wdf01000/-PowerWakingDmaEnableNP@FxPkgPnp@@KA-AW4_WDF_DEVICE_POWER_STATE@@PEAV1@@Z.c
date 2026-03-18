/*
 * XREFs of ?PowerWakingDmaEnableNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0095E40
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerDmaEnableAndScan@FxPkgPnp@@IEAAEE@Z @ 0x1C0012F94 (-PowerDmaEnableAndScan@FxPkgPnp@@IEAAEE@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerWakingDmaEnableNP(FxPkgPnp *This)
{
  return FxPkgPnp::PowerDmaEnableAndScan(This, 0) != 0 ? 867 : 33596;
}
