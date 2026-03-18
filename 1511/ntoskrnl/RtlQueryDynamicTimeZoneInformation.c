/*
 * XREFs of RtlQueryDynamicTimeZoneInformation @ 0x140648FC8
 * Callers:
 *     ExInitializeUtcTimeZoneBias @ 0x140772400 (ExInitializeUtcTimeZoneBias.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlQueryDynamicTimeZoneInformation(char *a1)
{
  return RtlpQueryTimeZoneInformationWorker(a1, 0x1B0uLL);
}
