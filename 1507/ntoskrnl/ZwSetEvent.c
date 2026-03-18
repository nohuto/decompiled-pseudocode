/*
 * XREFs of ZwSetEvent @ 0x14017F1B0
 * Callers:
 *     PiDrvDbLoadNodeWorkerCallback @ 0x14055A084 (PiDrvDbLoadNodeWorkerCallback.c)
 *     CsrShutdownSynchronization @ 0x1406C094C (CsrShutdownSynchronization.c)
 *     VfZwSetEvent @ 0x140757EA8 (VfZwSetEvent.c)
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
