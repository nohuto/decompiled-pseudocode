/*
 * XREFs of ZwAlertResumeThread @ 0x1401513A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwAlertResumeThread(HANDLE ThreadHandle, PULONG SuspendCount)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
