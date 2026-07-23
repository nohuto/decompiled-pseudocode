/*
 * XREFs of ZwRollbackEnlistment @ 0x140181C70
 * Callers:
 *     VfZwRollbackEnlistment @ 0x140757D3C (VfZwRollbackEnlistment.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRollbackEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
