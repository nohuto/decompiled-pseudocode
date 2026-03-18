/*
 * XREFs of ZwTerminateProcess @ 0x14015A200
 * Callers:
 *     KiDispatchException @ 0x1400F3D60 (KiDispatchException.c)
 *     KiParkUmsThread @ 0x1401DC264 (KiParkUmsThread.c)
 *     PsDispatchIumService @ 0x14020FC24 (PsDispatchIumService.c)
 *     KiSwapToUmsThread @ 0x1406508F8 (KiSwapToUmsThread.c)
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
