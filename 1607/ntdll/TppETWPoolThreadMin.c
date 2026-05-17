/*
 * XREFs of TppETWPoolThreadMin @ 0x1800FE758
 * Callers:
 *     TpSetPoolMinThreads @ 0x1800877B0 (TpSetPoolMinThreads.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 */

__int64 TppETWPoolThreadMin()
{
  return NtTraceEvent();
}
