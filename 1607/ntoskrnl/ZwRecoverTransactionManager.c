/*
 * XREFs of ZwRecoverTransactionManager @ 0x14015CCF0
 * Callers:
 *     CmpInitCmRM @ 0x140516F64 (CmpInitCmRM.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverTransactionManager(HANDLE TransactionManagerHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TransactionManagerHandle);
}
