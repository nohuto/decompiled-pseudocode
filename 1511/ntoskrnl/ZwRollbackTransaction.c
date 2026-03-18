/*
 * XREFs of ZwRollbackTransaction @ 0x140153320
 * Callers:
 *     VerifierZwRollbackTransaction @ 0x1406C0DD4 (VerifierZwRollbackTransaction.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwRollbackTransaction(HANDLE TransactionHandle, BOOLEAN Wait)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(TransactionHandle, Wait, v2);
}
