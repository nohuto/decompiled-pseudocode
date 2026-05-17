/*
 * XREFs of TppETWWorkerNodeSwitch @ 0x1800FE7B4
 * Callers:
 *     TppWorkerThread @ 0x18001E750 (TppWorkerThread.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 */

__int64 TppETWWorkerNodeSwitch()
{
  return NtTraceEvent();
}
