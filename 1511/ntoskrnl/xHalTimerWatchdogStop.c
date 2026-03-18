/*
 * XREFs of xHalTimerWatchdogStop @ 0x140148598
 * Callers:
 *     _call_matherr @ 0x140147BB8 (_call_matherr.c)
 *     KeBugCheck2 @ 0x1401C4F98 (KeBugCheck2.c)
 *     PopInvokeSystemStateHandler @ 0x1403A0370 (PopInvokeSystemStateHandler.c)
 *     PopSaveHiberContext @ 0x1403A13B0 (PopSaveHiberContext.c)
 *     NtSetSystemInformation @ 0x1404D4654 (NtSetSystemInformation.c)
 *     KdEnterDebugger @ 0x1406AAC38 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x1406AAD38 (KdExitDebugger.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall xHalTimerWatchdogStop(PKFLOATING_SAVE FloatSave)
{
  return 0;
}
