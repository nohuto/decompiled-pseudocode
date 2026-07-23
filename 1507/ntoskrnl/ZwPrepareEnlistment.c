/*
 * XREFs of ZwPrepareEnlistment @ 0x140181410
 * Callers:
 *     VfZwPrepareEnlistment @ 0x140756CF4 (VfZwPrepareEnlistment.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwPrepareEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
