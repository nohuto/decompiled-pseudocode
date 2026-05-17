/*
 * XREFs of RtlpWnfETWEventNameSubRundown @ 0x1800D16E8
 * Callers:
 *     RtlpDecRefWnfNameSubscription @ 0x18000533C (RtlpDecRefWnfNameSubscription.c)
 * Callees:
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
 */

__int64 RtlpWnfETWEventNameSubRundown()
{
  return NtTraceEvent();
}
