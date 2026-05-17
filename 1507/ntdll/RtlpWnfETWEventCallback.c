/*
 * XREFs of RtlpWnfETWEventCallback @ 0x1800C8C40
 * Callers:
 *     RtlpWnfWalkUserSubscriptionList @ 0x18000B74C (RtlpWnfWalkUserSubscriptionList.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 */

__int64 RtlpWnfETWEventCallback()
{
  return NtTraceEvent();
}
