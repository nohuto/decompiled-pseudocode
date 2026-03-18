/*
 * XREFs of ZwIsProcessInJob @ 0x140151000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwIsProcessInJob(HANDLE ProcessHandle, HANDLE JobHandle)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, JobHandle, v2);
}
