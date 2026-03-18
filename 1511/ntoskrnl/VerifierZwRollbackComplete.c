/*
 * XREFs of VerifierZwRollbackComplete @ 0x1406C0DCC
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
