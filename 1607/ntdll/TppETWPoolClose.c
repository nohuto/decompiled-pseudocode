/*
 * XREFs of TppETWPoolClose @ 0x1800FE700
 * Callers:
 *     TpReleasePool @ 0x1800839A0 (TpReleasePool.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 */

__int64 TppETWPoolClose()
{
  return NtTraceEvent();
}
