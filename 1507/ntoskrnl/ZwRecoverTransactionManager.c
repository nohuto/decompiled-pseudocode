/*
 * XREFs of ZwRecoverTransactionManager @ 0x140181A10
 * Callers:
 *     CmpInitCmRM @ 0x1404EABF8 (CmpInitCmRM.c)
 *     VerifierZwRecoverTransactionManager @ 0x1407425FC (VerifierZwRecoverTransactionManager.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverTransactionManager(HANDLE TransactionManagerHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TransactionManagerHandle);
}
