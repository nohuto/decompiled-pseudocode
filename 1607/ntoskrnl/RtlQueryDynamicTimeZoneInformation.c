/*
 * XREFs of RtlQueryDynamicTimeZoneInformation @ 0x14068858C
 * Callers:
 *     ExInitializeUtcTimeZoneBias @ 0x1407BD1DC (ExInitializeUtcTimeZoneBias.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlQueryDynamicTimeZoneInformation(char *a1)
{
  return RtlpQueryTimeZoneInformationWorker(a1, 0x1B0uLL);
}
