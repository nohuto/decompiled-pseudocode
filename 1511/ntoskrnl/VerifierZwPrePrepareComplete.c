/*
 * XREFs of VerifierZwPrePrepareComplete @ 0x1406C0D94
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierZwPrePrepareComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  return pXdvZwPrePrepareComplete(EnlistmentHandle, TmVirtualClock);
}
