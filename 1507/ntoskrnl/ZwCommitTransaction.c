/*
 * XREFs of ZwCommitTransaction @ 0x140180250
 * Callers:
 *     VerifierZwCommitTransaction @ 0x14074256C (VerifierZwCommitTransaction.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCommitTransaction(HANDLE TransactionHandle, BOOLEAN Wait)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TransactionHandle);
}
