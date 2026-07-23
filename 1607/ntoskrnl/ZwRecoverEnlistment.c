/*
 * XREFs of ZwRecoverEnlistment @ 0x14015CCB0
 * Callers:
 *     CmpRecoverEnlistment @ 0x1406050FC (CmpRecoverEnlistment.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverEnlistment(HANDLE EnlistmentHandle, PVOID EnlistmentKey)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
