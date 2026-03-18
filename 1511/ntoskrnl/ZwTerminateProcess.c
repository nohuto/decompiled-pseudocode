/*
 * XREFs of ZwTerminateProcess @ 0x140150BA0
 * Callers:
 *     KiDispatchException @ 0x140022BB4 (KiDispatchException.c)
 *     KiParkUmsThread @ 0x1401CC5D8 (KiParkUmsThread.c)
 *     PsDispatchIumService @ 0x1401F5B10 (PsDispatchIumService.c)
 *     KiSwapToUmsThread @ 0x14061B5DC (KiSwapToUmsThread.c)
 *     VerifierZwTerminateProcess @ 0x1406C0DFC (VerifierZwTerminateProcess.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwTerminateProcess(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, *(_QWORD *)&ExitStatus, v2);
}
