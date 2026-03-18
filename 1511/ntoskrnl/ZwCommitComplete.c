/*
 * XREFs of ZwCommitComplete @ 0x140151840
 * Callers:
 *     VerifierZwCommitComplete @ 0x1406C0D24 (VerifierZwCommitComplete.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCommitComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, TmVirtualClock, v2);
}
