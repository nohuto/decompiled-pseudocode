/*
 * XREFs of VerifierZwCommitComplete @ 0x140742564
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierZwCommitComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  return pXdvZwCommitComplete(EnlistmentHandle, TmVirtualClock);
}
