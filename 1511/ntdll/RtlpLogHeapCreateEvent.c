/*
 * XREFs of RtlpLogHeapCreateEvent @ 0x1800F1708
 * Callers:
 *     RtlCreateHeap @ 0x180055310 (RtlCreateHeap.c)
 *     RtlpHpSegHeapCreate @ 0x1800598B0 (RtlpHpSegHeapCreate.c)
 * Callees:
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
 *     RtlpEstimateAllocatedSize @ 0x1800F0D30 (RtlpEstimateAllocatedSize.c)
 */

__int64 __fastcall RtlpLogHeapCreateEvent(__int64 a1)
{
  RtlpEstimateAllocatedSize(a1);
  return NtTraceEvent();
}
