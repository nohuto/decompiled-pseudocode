/*
 * XREFs of UNLOCK_TRANSACTION_LIST @ 0x1403FDA20
 * Callers:
 *     CmpTransEnlistUowInCmTrans @ 0x14000AE94 (CmpTransEnlistUowInCmTrans.c)
 *     CmpRundownUnitOfWork @ 0x1403FD8BC (CmpRundownUnitOfWork.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1400F0700 (ExReleaseFastMutexUnsafe.c)
 */

__int64 UNLOCK_TRANSACTION_LIST()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9

  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v0, v1, v2);
}
