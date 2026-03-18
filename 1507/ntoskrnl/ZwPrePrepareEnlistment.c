/*
 * XREFs of ZwPrePrepareEnlistment @ 0x1401813D0
 * Callers:
 *     VfZwPrePrepareEnlistment @ 0x140756C74 (VfZwPrePrepareEnlistment.c)
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
