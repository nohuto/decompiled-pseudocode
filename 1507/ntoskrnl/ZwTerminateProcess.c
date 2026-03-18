/*
 * XREFs of ZwTerminateProcess @ 0x14017F570
 * Callers:
 *     KiDispatchException @ 0x14001FAE0 (KiDispatchException.c)
 *     KiParkUmsThread @ 0x14020B7B4 (KiParkUmsThread.c)
 *     PsDispatchIumService @ 0x140244710 (PsDispatchIumService.c)
 *     KiSwapToUmsThread @ 0x14069A118 (KiSwapToUmsThread.c)
 *     VerifierZwTerminateProcess @ 0x14074263C (VerifierZwTerminateProcess.c)
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
