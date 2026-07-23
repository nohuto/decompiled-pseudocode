/*
 * XREFs of ZwPrePrepareEnlistment @ 0x140152A60
 * Callers:
 *     VfZwPrePrepareEnlistment @ 0x1406D30AC (VfZwPrePrepareEnlistment.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwPrePrepareEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
