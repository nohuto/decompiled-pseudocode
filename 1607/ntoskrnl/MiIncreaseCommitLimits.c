/*
 * XREFs of MiIncreaseCommitLimits @ 0x140142F68
 * Callers:
 *     MiInitializeCommitment @ 0x1400019CC (MiInitializeCommitment.c)
 *     MiDeletePartitionResources @ 0x1401F11FC (MiDeletePartitionResources.c)
 *     MiInsertPartitionPages @ 0x1401F19A0 (MiInsertPartitionPages.c)
 *     MiCreatePagingFile @ 0x140568764 (MiCreatePagingFile.c)
 *     MiInsertPageFileInList @ 0x1405690A4 (MiInsertPageFileInList.c)
 *     MiAddPhysicalMemory @ 0x1406576C0 (MiAddPhysicalMemory.c)
 *     MiExtendPagingFiles @ 0x14065B078 (MiExtendPagingFiles.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiComputeCommitThresholds @ 0x140143044 (MiComputeCommitThresholds.c)
 *     MiUpdatePageFileList @ 0x1401431BC (MiUpdatePageFileList.c)
 */

__int64 __fastcall MiIncreaseCommitLimits(__int64 a1, unsigned __int64 a2, __int64 a3, int a4, __int64 a5)
{
  unsigned int v9; // esi
  __int64 v10; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v9 = 1;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 5672), &LockHandle);
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 5640) + a3) < *(_QWORD *)(a1 + 5640) )
  {
    v9 = 0;
  }
  else
  {
    if ( a2 )
    {
      if ( a4 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7208), a2);
      *(_QWORD *)(a1 + 7336) += a2;
    }
    if ( a3 )
      *(_QWORD *)(a1 + 5640) += a3;
    MiComputeCommitThresholds(a1);
    if ( a5 )
    {
      MiUpdatePageFileList(a5, 1LL);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7208), 2uLL);
      v10 = *(unsigned int *)(a1 + 6296);
      *(_QWORD *)(a1 + 8 * v10 + 6304) = a5;
      *(_DWORD *)(a1 + 6296) = v10 + 1;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v9;
}
