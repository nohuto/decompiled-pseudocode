/*
 * XREFs of ZwRecoverEnlistment @ 0x14015C740
 * Callers:
 *     CmpRecoverEnlistment @ 0x140605048 (CmpRecoverEnlistment.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverEnlistment(HANDLE EnlistmentHandle, PVOID EnlistmentKey)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, EnlistmentKey, v2);
}
