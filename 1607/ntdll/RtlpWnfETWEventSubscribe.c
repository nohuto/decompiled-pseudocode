/*
 * XREFs of RtlpWnfETWEventSubscribe @ 0x1800D9B70
 * Callers:
 *     RtlpAddWnfUserSubToNameSub @ 0x180029564 (RtlpAddWnfUserSubToNameSub.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 */

__int64 RtlpWnfETWEventSubscribe()
{
  return NtTraceEvent();
}
