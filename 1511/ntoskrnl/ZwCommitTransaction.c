/*
 * XREFs of ZwCommitTransaction @ 0x140151880
 * Callers:
 *     VerifierZwCommitTransaction @ 0x1406C0D2C (VerifierZwCommitTransaction.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCommitTransaction(HANDLE TransactionHandle, BOOLEAN Wait)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TransactionHandle);
}
