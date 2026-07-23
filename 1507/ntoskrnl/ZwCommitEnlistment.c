/*
 * XREFs of ZwCommitEnlistment @ 0x140180230
 * Callers:
 *     VfZwCommitEnlistment @ 0x1407554AC (VfZwCommitEnlistment.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCommitEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
