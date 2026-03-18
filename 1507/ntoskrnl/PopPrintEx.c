/*
 * XREFs of PopPrintEx @ 0x140131E3C
 * Callers:
 *     PopCoalescingSetTimer @ 0x14023ABF8 (PopCoalescingSetTimer.c)
 *     PopSessionWinlogonNotification @ 0x14040A0DC (PopSessionWinlogonNotification.c)
 *     NtPowerInformation @ 0x1404E7B24 (NtPowerInformation.c)
 *     PopSessionInputChange @ 0x14055DA90 (PopSessionInputChange.c)
 *     PopUpdateTimeouts @ 0x14055DE64 (PopUpdateTimeouts.c)
 *     PopSetSessionUserStatus @ 0x14055DFC0 (PopSetSessionUserStatus.c)
 *     PopEvaluateGlobalUserStatus @ 0x14055E090 (PopEvaluateGlobalUserStatus.c)
 *     PopSessionConnectionChange @ 0x140582E9C (PopSessionConnectionChange.c)
 *     PopSetSessionDisplayStatus @ 0x140582FD8 (PopSetSessionDisplayStatus.c)
 *     PoFxRegisterDevice @ 0x1405AC6C4 (PoFxRegisterDevice.c)
 *     PopCheckThermalPolicy @ 0x1405C4218 (PopCheckThermalPolicy.c)
 *     PopCoalescingActivate @ 0x1406B5318 (PopCoalescingActivate.c)
 *     PopCoalescingNotify @ 0x1406B540C (PopCoalescingNotify.c)
 *     PopDiagTraceIoCoalescingOn @ 0x1406B9864 (PopDiagTraceIoCoalescingOn.c)
 *     PopCheckConsoleTimeouts @ 0x1406BC9F0 (PopCheckConsoleTimeouts.c)
 * Callees:
 *     vDbgPrintEx @ 0x140131EE4 (vDbgPrintEx.c)
 */

ULONG PopPrintEx(ULONG Level, PCCH Format, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, Format);
  return vDbgPrintEx(0x92u, Level, Format, va);
}
