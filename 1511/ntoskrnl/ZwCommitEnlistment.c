/*
 * XREFs of ZwCommitEnlistment @ 0x140151860
 * Callers:
 *     VfZwCommitEnlistment @ 0x1406D18E4 (VfZwCommitEnlistment.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCommitEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, TmVirtualClock, v2);
}
