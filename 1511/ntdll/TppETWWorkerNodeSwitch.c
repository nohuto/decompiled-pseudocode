/*
 * XREFs of TppETWWorkerNodeSwitch @ 0x1800F5848
 * Callers:
 *     TppWorkerThread @ 0x18002B350 (TppWorkerThread.c)
 * Callees:
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
 */

__int64 TppETWWorkerNodeSwitch()
{
  return NtTraceEvent();
}
