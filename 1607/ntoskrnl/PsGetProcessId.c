/*
 * XREFs of PsGetProcessId @ 0x140085488
 * Callers:
 *     EtwpNotifyGuid @ 0x14048DF38 (EtwpNotifyGuid.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x1404F1954 (EtwTraceWorkingSetInSwapStoreFail.c)
 *     EtwTraceWorkingSetSwap @ 0x1404F271C (EtwTraceWorkingSetSwap.c)
 *     TtmpCloseTerminalHandle @ 0x140677F30 (TtmpCloseTerminalHandle.c)
 *     TtmpOpenTerminalHandle @ 0x14067806C (TtmpOpenTerminalHandle.c)
 *     TtmpCloseQueueHandle @ 0x14067A29C (TtmpCloseQueueHandle.c)
 *     TtmpOpenQueueHandle @ 0x14067A37C (TtmpOpenQueueHandle.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1406A3258 (EtwQueryPerformanceTraceInformation.c)
 *     EtwpObjectHandleRundown @ 0x1406A73A4 (EtwpObjectHandleRundown.c)
 *     WheaTerminateProcess @ 0x1406BA6D0 (WheaTerminateProcess.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetProcessId(PEPROCESS Process)
{
  return Process[1].Header.WaitListHead.Blink;
}
