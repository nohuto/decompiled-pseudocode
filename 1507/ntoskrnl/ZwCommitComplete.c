/*
 * XREFs of ZwCommitComplete @ 0x140180210
 * Callers:
 *     VerifierZwCommitComplete @ 0x140742564 (VerifierZwCommitComplete.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCommitComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
