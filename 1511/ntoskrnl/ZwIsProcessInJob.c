/*
 * XREFs of ZwIsProcessInJob @ 0x140151000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwIsProcessInJob(HANDLE ProcessHandle, HANDLE JobHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
