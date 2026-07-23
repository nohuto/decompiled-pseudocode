/*
 * XREFs of ZwPrepareEnlistment @ 0x140152AA0
 * Callers:
 *     VfZwPrepareEnlistment @ 0x1406D312C (VfZwPrepareEnlistment.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwPrepareEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
