/*
 * XREFs of RtlpWnfETWEventPublish @ 0x1800D1754
 * Callers:
 *     RtlPublishWnfStateData @ 0x18007F0E0 (RtlPublishWnfStateData.c)
 *     RtlTestAndPublishWnfStateData @ 0x180083600 (RtlTestAndPublishWnfStateData.c)
 * Callees:
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
 */

__int64 RtlpWnfETWEventPublish()
{
  return NtTraceEvent();
}
