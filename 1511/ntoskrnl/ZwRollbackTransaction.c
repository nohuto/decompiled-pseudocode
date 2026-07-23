/*
 * XREFs of ZwRollbackTransaction @ 0x140153320
 * Callers:
 *     VerifierZwRollbackTransaction @ 0x1406C0DD4 (VerifierZwRollbackTransaction.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRollbackTransaction(HANDLE TransactionHandle, BOOLEAN Wait)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TransactionHandle);
}
