/*
 * XREFs of NtRecoverTransactionManager @ 0x1400010F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtRecoverTransactionManager(HANDLE TransactionManagerHandle)
{
  return __imp_NtRecoverTransactionManager(TransactionManagerHandle);
}
