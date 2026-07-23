/*
 * XREFs of ZwTerminateProcess @ 0x14015A770
 * Callers:
 *     KiDispatchException @ 0x1400F1BB0 (KiDispatchException.c)
 *     KiParkUmsThread @ 0x1401DC090 (KiParkUmsThread.c)
 *     PsDispatchIumService @ 0x14020FA50 (PsDispatchIumService.c)
 *     KiSwapToUmsThread @ 0x1406509DC (KiSwapToUmsThread.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwTerminateProcess(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
