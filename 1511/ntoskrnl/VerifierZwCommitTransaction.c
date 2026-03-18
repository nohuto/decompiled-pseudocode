/*
 * XREFs of VerifierZwCommitTransaction @ 0x1406C0D2C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierZwCommitTransaction(HANDLE TransactionHandle, BOOLEAN Wait)
{
  return pXdvZwCommitTransaction(TransactionHandle, Wait);
}
