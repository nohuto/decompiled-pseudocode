/*
 * XREFs of ZwRecoverEnlistment @ 0x1401819D0
 * Callers:
 *     CmpRecoverEnlistment @ 0x14065CBDC (CmpRecoverEnlistment.c)
 *     VerifierZwRecoverEnlistment @ 0x1407425F4 (VerifierZwRecoverEnlistment.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverEnlistment(HANDLE EnlistmentHandle, PVOID EnlistmentKey)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
