/*
 * XREFs of ZwRollbackComplete @ 0x1401532E0
 * Callers:
 *     VerifierZwRollbackComplete @ 0x1406C0DCC (VerifierZwRollbackComplete.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRollbackComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
