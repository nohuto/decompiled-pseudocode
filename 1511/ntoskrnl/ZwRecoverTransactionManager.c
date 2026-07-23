/*
 * XREFs of ZwRecoverTransactionManager @ 0x1401530A0
 * Callers:
 *     CmpInitCmRM @ 0x1403BA424 (CmpInitCmRM.c)
 *     VerifierZwRecoverTransactionManager @ 0x1406C0DBC (VerifierZwRecoverTransactionManager.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverTransactionManager(HANDLE TransactionManagerHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TransactionManagerHandle);
}
