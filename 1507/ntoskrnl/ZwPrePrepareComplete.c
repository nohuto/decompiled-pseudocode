/*
 * XREFs of ZwPrePrepareComplete @ 0x1401813B0
 * Callers:
 *     VerifierZwPrePrepareComplete @ 0x1407425D4 (VerifierZwPrePrepareComplete.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwPrePrepareComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
