/*
 * XREFs of ZwRollbackComplete @ 0x140181C50
 * Callers:
 *     VerifierZwRollbackComplete @ 0x14074260C (VerifierZwRollbackComplete.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRollbackComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
