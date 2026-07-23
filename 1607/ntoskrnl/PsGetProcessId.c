/*
 * XREFs of PsGetProcessId @ 0x140086D74
 * Callers:
 *     EtwpNotifyGuid @ 0x14048E9C8 (EtwpNotifyGuid.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x1404D3A48 (EtwTraceWorkingSetInSwapStoreFail.c)
 *     EtwTraceWorkingSetSwap @ 0x1404D56A8 (EtwTraceWorkingSetSwap.c)
 *     TtmpCloseTerminalHandle @ 0x140678014 (TtmpCloseTerminalHandle.c)
 *     TtmpOpenTerminalHandle @ 0x140678150 (TtmpOpenTerminalHandle.c)
 *     TtmpCloseQueueHandle @ 0x14067A380 (TtmpCloseQueueHandle.c)
 *     TtmpOpenQueueHandle @ 0x14067A460 (TtmpOpenQueueHandle.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1406A3390 (EtwQueryPerformanceTraceInformation.c)
 *     EtwpObjectHandleRundown @ 0x1406A74DC (EtwpObjectHandleRundown.c)
 *     WheaTerminateProcess @ 0x1406BA808 (WheaTerminateProcess.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetProcessId(PEPROCESS Process)
{
  return Process[1].Header.WaitListHead.Blink;
}
