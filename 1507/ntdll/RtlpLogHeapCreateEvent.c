/*
 * XREFs of RtlpLogHeapCreateEvent @ 0x1800EF7B0
 * Callers:
 *     RtlpHpSegHeapCreate @ 0x180003E6C (RtlpHpSegHeapCreate.c)
 *     RtlCreateHeap @ 0x180005330 (RtlCreateHeap.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 *     RtlpEstimateAllocatedSize @ 0x1800EED60 (RtlpEstimateAllocatedSize.c)
 */

__int64 __fastcall RtlpLogHeapCreateEvent(__int64 a1)
{
  RtlpEstimateAllocatedSize(a1);
  return NtTraceEvent();
}
