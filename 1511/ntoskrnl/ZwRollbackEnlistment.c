/*
 * XREFs of ZwRollbackEnlistment @ 0x140153300
 * Callers:
 *     VfZwRollbackEnlistment @ 0x1406D4174 (VfZwRollbackEnlistment.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRollbackEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
