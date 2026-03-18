/*
 * XREFs of NtReadOnlyEnlistment @ 0x1400010D8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtReadOnlyEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_NtReadOnlyEnlistment(EnlistmentHandle, TmVirtualClock);
}
