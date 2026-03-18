/*
 * XREFs of ZwRecoverTransactionManager @ 0x14015C780
 * Callers:
 *     CmpInitCmRM @ 0x14049EB58 (CmpInitCmRM.c)
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
