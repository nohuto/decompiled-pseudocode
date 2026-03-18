/*
 * XREFs of VerifierZwCommitTransaction @ 0x14074256C
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
