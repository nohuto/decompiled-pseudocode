/*
 * XREFs of TppETWPoolClose @ 0x1800F5794
 * Callers:
 *     TpReleasePool @ 0x18007F4C0 (TpReleasePool.c)
 * Callees:
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
 */

__int64 TppETWPoolClose()
{
  return NtTraceEvent();
}
