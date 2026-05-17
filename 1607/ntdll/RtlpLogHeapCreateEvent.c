/*
 * XREFs of RtlpLogHeapCreateEvent @ 0x1800F920C
 * Callers:
 *     RtlCreateHeap @ 0x18002BA20 (RtlCreateHeap.c)
 *     RtlpHpSegHeapCreate @ 0x18007F470 (RtlpHpSegHeapCreate.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 *     RtlpEstimateAllocatedSize @ 0x1800F7D40 (RtlpEstimateAllocatedSize.c)
 */

__int64 __fastcall RtlpLogHeapCreateEvent(__int64 a1)
{
  RtlpEstimateAllocatedSize(a1);
  return NtTraceEvent();
}
