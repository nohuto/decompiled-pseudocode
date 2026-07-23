/*
 * XREFs of ZwTerminateThread @ 0x14015AC50
 * Callers:
 *     KiParkUmsThread @ 0x1401DC090 (KiParkUmsThread.c)
 *     RtlAssert @ 0x140213284 (RtlAssert.c)
 *     KiSwapToUmsThread @ 0x1406509DC (KiSwapToUmsThread.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwTerminateThread(HANDLE ThreadHandle, NTSTATUS ExitStatus)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
