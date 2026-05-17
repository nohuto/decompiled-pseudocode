/*
 * XREFs of RtlpWnfETWEventCallback @ 0x1800D9A08
 * Callers:
 *     RtlpWnfWalkUserSubscriptionList @ 0x180065F08 (RtlpWnfWalkUserSubscriptionList.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 */

__int64 RtlpWnfETWEventCallback()
{
  return NtTraceEvent();
}
