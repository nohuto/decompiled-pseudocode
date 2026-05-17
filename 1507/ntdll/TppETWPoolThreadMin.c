/*
 * XREFs of TppETWPoolThreadMin @ 0x1800F5DEC
 * Callers:
 *     TpSetPoolMinThreads @ 0x180077940 (TpSetPoolMinThreads.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 */

__int64 TppETWPoolThreadMin()
{
  return NtTraceEvent();
}
