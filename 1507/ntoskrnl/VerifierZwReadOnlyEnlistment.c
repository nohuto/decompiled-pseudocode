/*
 * XREFs of VerifierZwReadOnlyEnlistment @ 0x1407425EC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierZwReadOnlyEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  return pXdvZwReadOnlyEnlistment(EnlistmentHandle, TmVirtualClock);
}
