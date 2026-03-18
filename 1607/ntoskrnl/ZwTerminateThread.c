/*
 * XREFs of ZwTerminateThread @ 0x14015A6E0
 * Callers:
 *     KiParkUmsThread @ 0x1401DC264 (KiParkUmsThread.c)
 *     RtlAssert @ 0x140213458 (RtlAssert.c)
 *     KiSwapToUmsThread @ 0x1406508F8 (KiSwapToUmsThread.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwTerminateThread(HANDLE ThreadHandle, NTSTATUS ExitStatus)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle, *(_QWORD *)&ExitStatus, v2);
}
