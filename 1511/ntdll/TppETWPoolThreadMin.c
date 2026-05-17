/*
 * XREFs of TppETWPoolThreadMin @ 0x1800F57EC
 * Callers:
 *     TpSetPoolMinThreads @ 0x1800839D0 (TpSetPoolMinThreads.c)
 * Callees:
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
 */

__int64 TppETWPoolThreadMin()
{
  return NtTraceEvent();
}
