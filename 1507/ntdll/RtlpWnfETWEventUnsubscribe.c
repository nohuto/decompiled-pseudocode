/*
 * XREFs of RtlpWnfETWEventUnsubscribe @ 0x1800C8E30
 * Callers:
 *     RtlpRemoveUserSubFromNameSub @ 0x18000B100 (RtlpRemoveUserSubFromNameSub.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 */

__int64 RtlpWnfETWEventUnsubscribe()
{
  return NtTraceEvent();
}
