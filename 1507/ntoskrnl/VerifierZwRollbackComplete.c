/*
 * XREFs of VerifierZwRollbackComplete @ 0x14074260C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierZwRollbackComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  return pXdvZwRollbackComplete(EnlistmentHandle, TmVirtualClock);
}
