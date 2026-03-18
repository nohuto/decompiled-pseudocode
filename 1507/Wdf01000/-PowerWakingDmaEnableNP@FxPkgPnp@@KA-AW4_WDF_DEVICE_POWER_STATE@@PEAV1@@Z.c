/*
 * XREFs of ?PowerWakingDmaEnableNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009C950
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerDmaEnableAndScan@FxPkgPnp@@IEAAEE@Z @ 0x1C00066DC (-PowerDmaEnableAndScan@FxPkgPnp@@IEAAEE@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerWakingDmaEnableNP(FxPkgPnp *This, __int64 a2, unsigned __int8 a3)
{
  return FxPkgPnp::PowerDmaEnableAndScan(This, 0, a3) != 0 ? 861 : 33596;
}
