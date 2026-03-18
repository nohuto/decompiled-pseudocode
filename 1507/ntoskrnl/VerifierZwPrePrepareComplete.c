/*
 * XREFs of VerifierZwPrePrepareComplete @ 0x1407425D4
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
