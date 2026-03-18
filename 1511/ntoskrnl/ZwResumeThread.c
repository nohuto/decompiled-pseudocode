/*
 * XREFs of ZwResumeThread @ 0x140151060
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x1400C66BC (ExpWorkerFactoryCreateThread.c)
 *     StartFirstUserProcess @ 0x14075BB50 (StartFirstUserProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwResumeThread(HANDLE ThreadHandle, PULONG SuspendCount)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle, SuspendCount, v2);
}
