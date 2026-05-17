/*
 * XREFs of RtlpLogHeapFreeEvent @ 0x1800F93BC
 * Callers:
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x180046F90 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpHpFreeHeap @ 0x180047A70 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x180048100 (RtlpFreeHeapInternal.c)
 *     RtlpFreeHeap @ 0x180049370 (RtlpFreeHeap.c)
 *     RtlpHpSegFree @ 0x18004C920 (RtlpHpSegFree.c)
 *     RtlpLowFragHeapFlushCaches @ 0x18004EAD8 (RtlpLowFragHeapFlushCaches.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapFreeEvent()
{
  return NtTraceEvent();
}
