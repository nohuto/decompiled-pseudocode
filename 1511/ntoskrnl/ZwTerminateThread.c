/*
 * XREFs of ZwTerminateThread @ 0x140151080
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x1400C66BC (ExpWorkerFactoryCreateThread.c)
 *     KiParkUmsThread @ 0x1401CC5D8 (KiParkUmsThread.c)
 *     RtlAssert @ 0x1401F912C (RtlAssert.c)
 *     KiSwapToUmsThread @ 0x14061B5DC (KiSwapToUmsThread.c)
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
