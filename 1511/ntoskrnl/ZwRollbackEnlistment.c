/*
 * XREFs of ZwRollbackEnlistment @ 0x140153300
 * Callers:
 *     VfZwRollbackEnlistment @ 0x1406D4174 (VfZwRollbackEnlistment.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRollbackEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, TmVirtualClock, v2);
}
