/*
 * XREFs of PsGetProcessId @ 0x1400F4C44
 * Callers:
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x1403B5B4C (EtwTraceWorkingSetInSwapStoreFail.c)
 *     EtwpNotifyGuid @ 0x1404CCB9C (EtwpNotifyGuid.c)
 *     EtwTraceWorkingSetSwap @ 0x1404D05EC (EtwTraceWorkingSetSwap.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1406627B0 (EtwQueryPerformanceTraceInformation.c)
 *     EtwpObjectHandleRundown @ 0x14066599C (EtwpObjectHandleRundown.c)
 *     WheaTerminateProcess @ 0x140677F98 (WheaTerminateProcess.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetProcessId(PEPROCESS Process)
{
  return Process[1].Header.WaitListHead.Blink;
}
