/*
 * XREFs of MiIncreaseCommitLimits @ 0x14016BCC8
 * Callers:
 *     MiInitializeCommitment @ 0x14016BB7C (MiInitializeCommitment.c)
 *     MiAddPhysicalMemory @ 0x1402123C8 (MiAddPhysicalMemory.c)
 *     MiDeletePartitionResources @ 0x14021D020 (MiDeletePartitionResources.c)
 *     MiInsertPartitionPages @ 0x14021D494 (MiInsertPartitionPages.c)
 *     MiCreatePagingFile @ 0x1405B4240 (MiCreatePagingFile.c)
 *     MiInsertPageFileInList @ 0x1405B4BD0 (MiInsertPageFileInList.c)
 *     MiExtendPagingFiles @ 0x1406A50F4 (MiExtendPagingFiles.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     MiComputeCommitThresholds @ 0x14016BDA4 (MiComputeCommitThresholds.c)
 *     MiUpdatePageFileList @ 0x14016BE74 (MiUpdatePageFileList.c)
 */

__int64 __fastcall MiIncreaseCommitLimits(__int64 a1, unsigned __int64 a2, __int64 a3, int a4, __int64 a5)
{
  unsigned int v9; // esi
  __int64 v10; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v9 = 1;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 4776), &LockHandle);
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 4744) + a3) < *(_QWORD *)(a1 + 4744) )
  {
    v9 = 0;
  }
  else
  {
    if ( a2 )
    {
      if ( a4 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5576), a2);
      *(_QWORD *)(a1 + 5736) += a2;
    }
    if ( a3 )
      *(_QWORD *)(a1 + 4744) += a3;
    MiComputeCommitThresholds(a1);
    if ( a5 )
    {
      MiUpdatePageFileList(a5, 1LL);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5576), 2uLL);
      v10 = *(unsigned int *)(a1 + 5336);
      *(_QWORD *)(a1 + 8 * v10 + 5344) = a5;
      *(_DWORD *)(a1 + 5336) = v10 + 1;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v9;
}
