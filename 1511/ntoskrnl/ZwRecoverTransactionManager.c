/*
 * XREFs of ZwRecoverTransactionManager @ 0x1401530A0
 * Callers:
 *     CmpInitCmRM @ 0x1403BA424 (CmpInitCmRM.c)
 *     VerifierZwRecoverTransactionManager @ 0x1406C0DBC (VerifierZwRecoverTransactionManager.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverTransactionManager(HANDLE TransactionManagerHandle)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(TransactionManagerHandle, v1, v2);
}
