/*
 * XREFs of RtlpWnfETWEventPublish @ 0x1800D9B04
 * Callers:
 *     RtlPublishWnfStateData @ 0x180082DC0 (RtlPublishWnfStateData.c)
 *     RtlTestAndPublishWnfStateData @ 0x180087CF0 (RtlTestAndPublishWnfStateData.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 */

__int64 RtlpWnfETWEventPublish()
{
  return NtTraceEvent();
}
