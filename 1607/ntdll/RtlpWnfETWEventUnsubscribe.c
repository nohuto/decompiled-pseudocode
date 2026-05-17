/*
 * XREFs of RtlpWnfETWEventUnsubscribe @ 0x1800D9BF8
 * Callers:
 *     RtlpRemoveUserSubFromNameSub @ 0x180065AE0 (RtlpRemoveUserSubFromNameSub.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 */

__int64 RtlpWnfETWEventUnsubscribe()
{
  return NtTraceEvent();
}
