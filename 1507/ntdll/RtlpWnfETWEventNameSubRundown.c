/*
 * XREFs of RtlpWnfETWEventNameSubRundown @ 0x1800C8CD0
 * Callers:
 *     RtlpDecRefWnfNameSubscription @ 0x18000BBE0 (RtlpDecRefWnfNameSubscription.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 */

__int64 RtlpWnfETWEventNameSubRundown()
{
  return NtTraceEvent();
}
