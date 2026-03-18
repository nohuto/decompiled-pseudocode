/*
 * XREFs of ZwRecoverEnlistment @ 0x140153060
 * Callers:
 *     CmpRecoverEnlistment @ 0x1405E5AF8 (CmpRecoverEnlistment.c)
 *     VerifierZwRecoverEnlistment @ 0x1406C0DB4 (VerifierZwRecoverEnlistment.c)
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
