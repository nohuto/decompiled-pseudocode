/*
 * XREFs of RtlpLogHeapFreeEvent @ 0x1800EF964
 * Callers:
 *     RtlpLowFragHeapFree @ 0x18002ACB0 (RtlpLowFragHeapFree.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x18002B170 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpHpSegFree @ 0x18002B710 (RtlpHpSegFree.c)
 *     RtlpFreeHeap @ 0x18002C140 (RtlpFreeHeap.c)
 *     RtlpHpFreeHeap @ 0x180038098 (RtlpHpFreeHeap.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapFreeEvent()
{
  return NtTraceEvent();
}
