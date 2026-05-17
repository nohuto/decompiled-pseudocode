/*
 * XREFs of RtlpLogHeapAllocateEvent @ 0x1800F9064
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x180022DF0 (RtlpAllocateHeapInternal.c)
 *     RtlpHpAllocateHeap @ 0x1800507D8 (RtlpHpAllocateHeap.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapAllocateEvent()
{
  return NtTraceEvent();
}
