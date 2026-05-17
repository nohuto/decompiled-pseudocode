/*
 * XREFs of RtlpLogHeapAllocateEvent @ 0x1800F155C
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x180025610 (RtlpAllocateHeapInternal.c)
 *     RtlpHpAllocateHeap @ 0x18005A8C8 (RtlpHpAllocateHeap.c)
 * Callees:
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapAllocateEvent()
{
  return NtTraceEvent();
}
