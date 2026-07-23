/*
 * XREFs of ZwPrePrepareComplete @ 0x140152A40
 * Callers:
 *     VerifierZwPrePrepareComplete @ 0x1406C0D94 (VerifierZwPrePrepareComplete.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwPrePrepareComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
