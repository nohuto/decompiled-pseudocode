/*
 * XREFs of ZwRollbackComplete @ 0x140181C50
 * Callers:
 *     VerifierZwRollbackComplete @ 0x14074260C (VerifierZwRollbackComplete.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRollbackComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, TmVirtualClock, v2);
}
