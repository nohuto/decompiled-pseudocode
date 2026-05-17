/*
 * XREFs of RtlpWnfETWEventPublish @ 0x1800C8D3C
 * Callers:
 *     RtlPublishWnfStateData @ 0x180073290 (RtlPublishWnfStateData.c)
 *     RtlTestAndPublishWnfStateData @ 0x180077820 (RtlTestAndPublishWnfStateData.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 */

__int64 RtlpWnfETWEventPublish()
{
  return NtTraceEvent();
}
