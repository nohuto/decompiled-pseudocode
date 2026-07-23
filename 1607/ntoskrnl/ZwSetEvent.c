/*
 * XREFs of ZwSetEvent @ 0x14015A3B0
 * Callers:
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1403F0C88 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PspShutdownCsrProcess @ 0x14067EB60 (PspShutdownCsrProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetEvent(HANDLE EventHandle, PLONG PreviousState)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle);
}
