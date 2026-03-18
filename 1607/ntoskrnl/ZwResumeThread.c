/*
 * XREFs of ZwResumeThread @ 0x14015A6C0
 * Callers:
 *     StartFirstUserProcess @ 0x1407A263C (StartFirstUserProcess.c)
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
