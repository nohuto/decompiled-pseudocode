/*
 * XREFs of RtlpLogHeapFreeEvent @ 0x1800F18BC
 * Callers:
 *     RtlpHpFreeHeap @ 0x18001ABF8 (RtlpHpFreeHeap.c)
 *     RtlpHpSegFree @ 0x18001B3B4 (RtlpHpSegFree.c)
 *     RtlpLowFragHeapFree @ 0x180020B00 (RtlpLowFragHeapFree.c)
 *     RtlpFreeHeapInternal @ 0x1800214A0 (RtlpFreeHeapInternal.c)
 *     RtlpFreeHeap @ 0x180022430 (RtlpFreeHeap.c)
 * Callees:
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapFreeEvent()
{
  return NtTraceEvent();
}
