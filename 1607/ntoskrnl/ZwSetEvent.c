/*
 * XREFs of ZwSetEvent @ 0x140159E40
 * Callers:
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1403F1DC4 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PspShutdownCsrProcess @ 0x14067EA7C (PspShutdownCsrProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetEvent(HANDLE EventHandle, PLONG PreviousState)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle, PreviousState, v2);
}
