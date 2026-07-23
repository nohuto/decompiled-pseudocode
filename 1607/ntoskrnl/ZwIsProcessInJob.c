/*
 * XREFs of ZwIsProcessInJob @ 0x14015ABD0
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
