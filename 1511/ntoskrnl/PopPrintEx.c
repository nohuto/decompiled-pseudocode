/*
 * XREFs of PopPrintEx @ 0x1400E6908
 * Callers:
 *     PopCoalescingSetTimer @ 0x1401EC8DC (PopCoalescingSetTimer.c)
 *     PopSessionWinlogonNotification @ 0x1403B55B0 (PopSessionWinlogonNotification.c)
 *     NtPowerInformation @ 0x140452E2C (NtPowerInformation.c)
 *     PopSessionInputChange @ 0x1404F2D64 (PopSessionInputChange.c)
 *     PopUpdateTimeouts @ 0x1404F2F04 (PopUpdateTimeouts.c)
 *     PopSetSessionUserStatus @ 0x1404F30C8 (PopSetSessionUserStatus.c)
 *     PopEvaluateGlobalUserStatus @ 0x1404F3198 (PopEvaluateGlobalUserStatus.c)
 *     PopSessionConnectionChange @ 0x14050BA7C (PopSessionConnectionChange.c)
 *     PopSetSessionDisplayStatus @ 0x14050BBB8 (PopSetSessionDisplayStatus.c)
 *     PoFxRegisterDevice @ 0x14051B824 (PoFxRegisterDevice.c)
 *     PopCheckThermalPolicy @ 0x14054CA88 (PopCheckThermalPolicy.c)
 *     PopCoalescingActivate @ 0x140635B48 (PopCoalescingActivate.c)
 *     PopCoalescingNotify @ 0x140635C3C (PopCoalescingNotify.c)
 *     PopDiagTraceIoCoalescingOn @ 0x140639770 (PopDiagTraceIoCoalescingOn.c)
 *     PopCheckConsoleTimeouts @ 0x14063C394 (PopCheckConsoleTimeouts.c)
 * Callees:
 *     vDbgPrintEx @ 0x1400E69B0 (vDbgPrintEx.c)
 */

ULONG PopPrintEx(ULONG Level, PCCH Format, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, Format);
  return vDbgPrintEx(0x92u, Level, Format, va);
}
