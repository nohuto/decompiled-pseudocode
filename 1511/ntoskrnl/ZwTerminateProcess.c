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

NTSTATUS __stdcall ZwTerminateProcess(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
