/*
 * XREFs of VerifierZwRollbackTransaction @ 0x140742614
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
