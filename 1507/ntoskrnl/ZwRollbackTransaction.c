/*
 * XREFs of ZwRollbackTransaction @ 0x140181C90
 * Callers:
 *     VerifierZwRollbackTransaction @ 0x140742614 (VerifierZwRollbackTransaction.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRollbackTransaction(HANDLE TransactionHandle, BOOLEAN Wait)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TransactionHandle);
}
