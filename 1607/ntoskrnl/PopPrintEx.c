/*
 * XREFs of PopPrintEx @ 0x140081AE0
 * Callers:
 *     PopCoalescingSetTimer @ 0x1402055F0 (PopCoalescingSetTimer.c)
 *     PopSessionWinlogonNotification @ 0x1403E2A1C (PopSessionWinlogonNotification.c)
 *     NtPowerInformation @ 0x14051E834 (NtPowerInformation.c)
 *     PopSessionInputChange @ 0x14052E19C (PopSessionInputChange.c)
 *     PopUpdateTimeouts @ 0x14052E3B0 (PopUpdateTimeouts.c)
 *     PopSetSessionUserStatus @ 0x14052E674 (PopSetSessionUserStatus.c)
 *     PopEvaluateGlobalUserStatus @ 0x14052E744 (PopEvaluateGlobalUserStatus.c)
 *     PopSessionConnectionChange @ 0x1405460E8 (PopSessionConnectionChange.c)
 *     PopSetSessionDisplayStatus @ 0x140546224 (PopSetSessionDisplayStatus.c)
 *     PoFxRegisterDevice @ 0x140566A50 (PoFxRegisterDevice.c)
 *     PopCheckThermalPolicy @ 0x1405743B0 (PopCheckThermalPolicy.c)
 *     PopCoalescingNotify @ 0x14066E074 (PopCoalescingNotify.c)
 *     PopDiagTraceIoCoalescingOff @ 0x140671718 (PopDiagTraceIoCoalescingOff.c)
 *     PopDiagTraceIoCoalescingOn @ 0x140671740 (PopDiagTraceIoCoalescingOn.c)
 *     PopCheckConsoleTimeouts @ 0x1406749A0 (PopCheckConsoleTimeouts.c)
 * Callees:
 *     vDbgPrintEx @ 0x140081B88 (vDbgPrintEx.c)
 */

ULONG PopPrintEx(ULONG Level, PCCH Format, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, Format);
  return vDbgPrintEx(0x92u, Level, Format, va);
}
