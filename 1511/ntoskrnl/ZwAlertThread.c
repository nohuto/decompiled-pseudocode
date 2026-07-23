/*
 * XREFs of ZwAlertThread @ 0x1401513C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwAlertThread(HANDLE ThreadHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
