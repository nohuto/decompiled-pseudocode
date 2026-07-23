/*
 * XREFs of PopPrintEx @ 0x140084C64
 * Callers:
 *     PopCoalescingSetTimer @ 0x14020541C (PopCoalescingSetTimer.c)
 *     PopSessionWinlogonNotification @ 0x1403E2A1C (PopSessionWinlogonNotification.c)
 *     NtPowerInformation @ 0x14050189C (NtPowerInformation.c)
 *     PopSessionInputChange @ 0x14052E6DC (PopSessionInputChange.c)
 *     PopUpdateTimeouts @ 0x14052E8F0 (PopUpdateTimeouts.c)
 *     PopSetSessionUserStatus @ 0x14052EBB4 (PopSetSessionUserStatus.c)
 *     PopEvaluateGlobalUserStatus @ 0x14052EC84 (PopEvaluateGlobalUserStatus.c)
 *     PopSessionConnectionChange @ 0x140546628 (PopSessionConnectionChange.c)
 *     PopSetSessionDisplayStatus @ 0x140546764 (PopSetSessionDisplayStatus.c)
 *     PoFxRegisterDevice @ 0x140566F90 (PoFxRegisterDevice.c)
 *     PopCheckThermalPolicy @ 0x1405748F0 (PopCheckThermalPolicy.c)
 *     PopCoalescingNotify @ 0x14066E158 (PopCoalescingNotify.c)
 *     PopDiagTraceIoCoalescingOff @ 0x1406717FC (PopDiagTraceIoCoalescingOff.c)
 *     PopDiagTraceIoCoalescingOn @ 0x140671824 (PopDiagTraceIoCoalescingOn.c)
 *     PopCheckConsoleTimeouts @ 0x140674A84 (PopCheckConsoleTimeouts.c)
 * Callees:
 *     vDbgPrintEx @ 0x140084D0C (vDbgPrintEx.c)
 */

ULONG PopPrintEx(ULONG Level, PCCH Format, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, Format);
  return vDbgPrintEx(0x92u, Level, Format, va);
}
