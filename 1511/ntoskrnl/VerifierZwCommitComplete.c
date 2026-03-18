/*
 * XREFs of VerifierZwCommitComplete @ 0x1406C0D24
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
