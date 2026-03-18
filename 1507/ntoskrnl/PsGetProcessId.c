/*
 * XREFs of PsGetProcessId @ 0x1400CF7C4
 * Callers:
 *     EtwpNotifyGuid @ 0x1404D8804 (EtwpNotifyGuid.c)
 *     EtwTraceWorkingSetSwap @ 0x1404FAFD8 (EtwTraceWorkingSetSwap.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x14055D504 (EtwTraceWorkingSetInSwapStoreFail.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1406E58C8 (EtwQueryPerformanceTraceInformation.c)
 *     EtwpObjectHandleRundown @ 0x1406E8B14 (EtwpObjectHandleRundown.c)
 *     WheaTerminateProcess @ 0x1406FC7B4 (WheaTerminateProcess.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetProcessId(PEPROCESS Process)
{
  return Process[1].Header.WaitListHead.Blink;
}
