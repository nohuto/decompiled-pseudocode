/*
 * XREFs of RtlSetDynamicTimeZoneInformation @ 0x1406CC064
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSetDynamicTimeZoneInformation(void *a1)
{
  return RtlpSetTimeZoneInformationWorker(a1);
}
