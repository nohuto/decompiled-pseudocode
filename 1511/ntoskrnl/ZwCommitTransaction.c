/*
 * XREFs of ZwCommitTransaction @ 0x140151880
 * Callers:
 *     VerifierZwCommitTransaction @ 0x1406C0D2C (VerifierZwCommitTransaction.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCommitTransaction(HANDLE TransactionHandle, BOOLEAN Wait)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(TransactionHandle, Wait, v2);
}
