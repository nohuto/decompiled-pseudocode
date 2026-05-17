/*
 * XREFs of RtlSetDynamicTimeZoneInformation @ 0x1800E5460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSetDynamicTimeZoneInformation(__int64 a1)
{
  return RtlpSetTimeZoneInformationWorker(a1, 432LL);
}
