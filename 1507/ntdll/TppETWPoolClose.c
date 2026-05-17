/*
 * XREFs of TppETWPoolClose @ 0x1800F5D94
 * Callers:
 *     TpReleasePool @ 0x180073F00 (TpReleasePool.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 */

__int64 TppETWPoolClose()
{
  return NtTraceEvent();
}
