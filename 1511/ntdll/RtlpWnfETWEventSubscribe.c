/*
 * XREFs of RtlpWnfETWEventSubscribe @ 0x1800D17C0
 * Callers:
 *     RtlpAddWnfUserSubToNameSub @ 0x180053924 (RtlpAddWnfUserSubToNameSub.c)
 * Callees:
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
 */

__int64 RtlpWnfETWEventSubscribe()
{
  return NtTraceEvent();
}
