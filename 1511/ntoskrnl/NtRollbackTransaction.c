/*
 * XREFs of NtRollbackTransaction @ 0x140001108
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtRollbackTransaction(HANDLE TransactionHandle, BOOLEAN Wait)
{
  return __imp_NtRollbackTransaction(TransactionHandle, Wait);
}
