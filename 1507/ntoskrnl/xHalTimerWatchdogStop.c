/*
 * XREFs of xHalTimerWatchdogStop @ 0x14017DF20
 * Callers:
 *     _call_matherr @ 0x140175C44 (_call_matherr.c)
 *     KeBugCheck2 @ 0x140201994 (KeBugCheck2.c)
 *     PopInvokeSystemStateHandler @ 0x1403F2FAC (PopInvokeSystemStateHandler.c)
 *     PopSaveHiberContext @ 0x1403F4080 (PopSaveHiberContext.c)
 *     NtSetSystemInformation @ 0x140453DF8 (NtSetSystemInformation.c)
 *     KdEnterDebugger @ 0x14072AC78 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x14072AD78 (KdExitDebugger.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall xHalTimerWatchdogStop(PKFLOATING_SAVE FloatSave)
{
  return 0;
}
