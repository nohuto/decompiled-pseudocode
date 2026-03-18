/*
 * XREFs of VerifierZwRollbackTransaction @ 0x1406C0DD4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierZwRollbackTransaction(HANDLE TransactionHandle, BOOLEAN Wait)
{
  return pXdvZwRollbackTransaction(TransactionHandle, Wait);
}
