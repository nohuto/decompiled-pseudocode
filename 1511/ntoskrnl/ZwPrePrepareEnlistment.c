/*
 * XREFs of ZwPrePrepareEnlistment @ 0x140152A60
 * Callers:
 *     VfZwPrePrepareEnlistment @ 0x1406D30AC (VfZwPrePrepareEnlistment.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwPrePrepareEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, TmVirtualClock, v2);
}
