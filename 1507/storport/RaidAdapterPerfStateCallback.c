/*
 * XREFs of RaidAdapterPerfStateCallback @ 0x1C002A920
 * Callers:
 *     <none>
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C0008F44 (RaCallMiniportAdapterControl.c)
 */

__int64 __fastcall RaidAdapterPerfStateCallback(__int64 a1)
{
  return RaCallMiniportAdapterControl(a1 + 296);
}
