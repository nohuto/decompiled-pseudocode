/*
 * XREFs of RtlpWnfETWEventSubscribe @ 0x1800C8DA8
 * Callers:
 *     RtlpAddWnfUserSubToNameSub @ 0x18000A9E4 (RtlpAddWnfUserSubToNameSub.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 */

__int64 RtlpWnfETWEventSubscribe()
{
  return NtTraceEvent();
}
