/*
 * XREFs of RaidAdapterPerfStateCallback @ 0x1C0030740
 * Callers:
 *     <none>
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C000EE90 (RaCallMiniportAdapterControl.c)
 */

__int64 __fastcall RaidAdapterPerfStateCallback(__int64 a1)
{
  return RaCallMiniportAdapterControl(a1 + 296);
}
