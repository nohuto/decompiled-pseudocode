/*
 * XREFs of VerifierZwReadOnlyEnlistment @ 0x1406C0DAC
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
