/*
 * XREFs of ZwPrePrepareEnlistment @ 0x1401813D0
 * Callers:
 *     VfZwPrePrepareEnlistment @ 0x140756C74 (VfZwPrePrepareEnlistment.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwPrePrepareEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
