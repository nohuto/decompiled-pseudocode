/*
 * XREFs of RtlpWnfETWEventNameSubRundown @ 0x1800D9A98
 * Callers:
 *     RtlpDecRefWnfNameSubscription @ 0x1800663C8 (RtlpDecRefWnfNameSubscription.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 */

__int64 RtlpWnfETWEventNameSubRundown()
{
  return NtTraceEvent();
}
