/*
 * XREFs of LOCK_TRANSACTION_LIST @ 0x1403FDA44
 * Callers:
 *     CmpTransEnlistUowInCmTrans @ 0x14000AE94 (CmpTransEnlistUowInCmTrans.c)
 *     CmpRundownUnitOfWork @ 0x1403FD8BC (CmpRundownUnitOfWork.c)
 * Callees:
 *     <none>
 */

void LOCK_TRANSACTION_LIST()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
}
