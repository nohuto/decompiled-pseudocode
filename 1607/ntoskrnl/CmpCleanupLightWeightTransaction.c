/*
 * XREFs of CmpCleanupLightWeightTransaction @ 0x1404E9890
 * Callers:
 *     CmpAbortLightWeightTransaction @ 0x1404E97EC (CmpAbortLightWeightTransaction.c)
 *     CmpCommitLightWeightTransaction @ 0x14053A870 (CmpCommitLightWeightTransaction.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400F05A0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400F0700 (ExReleaseFastMutexUnsafe.c)
 *     CmpTransMgrFreeVolatileData @ 0x1403FD614 (CmpTransMgrFreeVolatileData.c)
 *     CmpLockRegistryExclusive @ 0x1403FD9E8 (CmpLockRegistryExclusive.c)
 *     CmpTransDereferenceTransaction @ 0x1403FF128 (CmpTransDereferenceTransaction.c)
 *     CmpUnlockRegistry @ 0x14040476C (CmpUnlockRegistry.c)
 */

LONG_PTR __fastcall CmpCleanupLightWeightTransaction(_QWORD *BugCheckParameter2, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  LONG_PTR result; // rax

  CmpLockRegistryExclusive();
  CmpTransMgrFreeVolatileData((ULONG_PTR)BugCheckParameter2, a2);
  CmpUnlockRegistry();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  v5 = *BugCheckParameter2;
  v6 = (_QWORD *)BugCheckParameter2[1];
  if ( *(_QWORD **)(*BugCheckParameter2 + 8LL) != BugCheckParameter2 || (_QWORD *)*v6 != BugCheckParameter2 )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  result = KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v7, v8, v9);
  if ( BugCheckParameter2[7] )
    return CmpTransDereferenceTransaction(BugCheckParameter2[7]);
  return result;
}
