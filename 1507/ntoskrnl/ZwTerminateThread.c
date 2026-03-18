/*
 * XREFs of ZwTerminateThread @ 0x14017FA50
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x14006CAF0 (ExpWorkerFactoryCreateThread.c)
 *     KiParkUmsThread @ 0x14020B7B4 (KiParkUmsThread.c)
 *     RtlAssert @ 0x140248194 (RtlAssert.c)
 *     KiSwapToUmsThread @ 0x14069A118 (KiSwapToUmsThread.c)
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
