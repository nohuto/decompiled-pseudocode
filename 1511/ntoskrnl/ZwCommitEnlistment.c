/*
 * XREFs of ZwCommitEnlistment @ 0x140151860
 * Callers:
 *     VfZwCommitEnlistment @ 0x1406D18E4 (VfZwCommitEnlistment.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCommitEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
