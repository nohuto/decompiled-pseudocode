/*
 * XREFs of RtlpWnfETWEventCallback @ 0x1800D1658
 * Callers:
 *     RtlpWnfWalkUserSubscriptionList @ 0x18000840C (RtlpWnfWalkUserSubscriptionList.c)
 * Callees:
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
 */

__int64 RtlpWnfETWEventCallback()
{
  return NtTraceEvent();
}
