/*
 * XREFs of HUBDSM_FlushingHubPowerDownEventsForFailedDevice @ 0x1C0017080
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_ReleaseDevicePowerReference @ 0x1C000D880 (HUBMUX_ReleaseDevicePowerReference.c)
 */

__int64 __fastcall HUBDSM_FlushingHubPowerDownEventsForFailedDevice(__int64 a1)
{
  HUBMUX_ReleaseDevicePowerReference(*(volatile signed __int32 **)(a1 + 960));
  return 4077LL;
}
