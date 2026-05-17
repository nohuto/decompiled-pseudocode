/*
 * XREFs of RtlpLogHeapAllocateEvent @ 0x1800EF604
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x18002ED90 (RtlpAllocateHeapInternal.c)
 *     RtlpHpAllocateHeap @ 0x1800589AC (RtlpHpAllocateHeap.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapAllocateEvent()
{
  return NtTraceEvent();
}
