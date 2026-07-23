/*
 * XREFs of ZwSetContextThread @ 0x140153460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetContextThread(HANDLE ThreadHandle, PCONTEXT Context)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
