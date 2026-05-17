/*
 * XREFs of RtlpWnfETWEventUnsubscribe @ 0x1800D1848
 * Callers:
 *     RtlpRemoveUserSubFromNameSub @ 0x180004870 (RtlpRemoveUserSubFromNameSub.c)
 * Callees:
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
 */

__int64 RtlpWnfETWEventUnsubscribe()
{
  return NtTraceEvent();
}
