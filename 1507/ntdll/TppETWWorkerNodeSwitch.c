/*
 * XREFs of TppETWWorkerNodeSwitch @ 0x1800F5E48
 * Callers:
 *     TppWorkerThread @ 0x180039390 (TppWorkerThread.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 */

__int64 TppETWWorkerNodeSwitch()
{
  return NtTraceEvent();
}
