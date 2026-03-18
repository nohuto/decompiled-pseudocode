/*
 * XREFs of MiIncreaseCommitLimits @ 0x14013A344
 * Callers:
 *     MiInitializeCommitment @ 0x14013A1E4 (MiInitializeCommitment.c)
 *     MiDeletePartitionResources @ 0x1401D91C8 (MiDeletePartitionResources.c)
 *     MiInsertPartitionPages @ 0x1401D9510 (MiInsertPartitionPages.c)
 *     MiCreatePagingFile @ 0x140537A84 (MiCreatePagingFile.c)
 *     MiInsertPageFileInList @ 0x140538300 (MiInsertPageFileInList.c)
 *     MiAddPhysicalMemory @ 0x140622114 (MiAddPhysicalMemory.c)
 *     MiExtendPagingFiles @ 0x1406256F8 (MiExtendPagingFiles.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiComputeCommitThresholds @ 0x14013A420 (MiComputeCommitThresholds.c)
 *     MiUpdatePageFileList @ 0x14013A4F0 (MiUpdatePageFileList.c)
 */

__int64 __fastcall MiIncreaseCommitLimits(__int64 a1, unsigned __int64 a2, __int64 a3, int a4, __int64 a5)
{
  unsigned int v9; // esi
  __int64 v10; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v9 = 1;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 5032), &LockHandle);
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 5000) + a3) < *(_QWORD *)(a1 + 5000) )
  {
    v9 = 0;
  }
  else
  {
    if ( a2 )
    {
      if ( a4 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5960), a2);
      *(_QWORD *)(a1 + 6120) += a2;
    }
    if ( a3 )
      *(_QWORD *)(a1 + 5000) += a3;
    MiComputeCommitThresholds(a1);
    if ( a5 )
    {
      MiUpdatePageFileList(a5, 1LL);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5960), 2uLL);
      v10 = *(unsigned int *)(a1 + 5720);
      *(_QWORD *)(a1 + 8 * v10 + 5728) = a5;
      *(_DWORD *)(a1 + 5720) = v10 + 1;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v9;
}
