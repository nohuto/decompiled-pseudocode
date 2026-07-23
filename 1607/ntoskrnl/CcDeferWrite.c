/*
 * XREFs of CcDeferWrite @ 0x1401B18EC
 * Callers:
 *     <none>
 * Callees:
 *     CcScheduleLazyWriteScan @ 0x14007049C (CcScheduleLazyWriteScan.c)
 *     ExInterlockedInsertTailList @ 0x14008B840 (ExInterlockedInsertTailList.c)
 *     ExInterlockedInsertHeadList @ 0x1400A60E8 (ExInterlockedInsertHeadList.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     CcPostDeferredWrites @ 0x1401B19E8 (CcPostDeferredWrites.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

void __stdcall CcDeferWrite(
        PFILE_OBJECT FileObject,
        PCC_POST_DEFERRED_WRITE PostRoutine,
        PVOID Context1,
        PVOID Context2,
        ULONG BytesToWrite,
        BOOLEAN Retrying)
{
  char *PoolWithTag; // rax
  _LIST_ENTRY *v11; // rdx
  __int64 v12; // rcx
  KIRQL v13; // bl

  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x77446343u);
  if ( PoolWithTag )
  {
    *((_QWORD *)PoolWithTag + 5) = 0LL;
    *(_DWORD *)PoolWithTag = 4719356;
    *((_QWORD *)PoolWithTag + 1) = FileObject;
    *((_DWORD *)PoolWithTag + 4) = BytesToWrite;
    *((_QWORD *)PoolWithTag + 6) = PostRoutine;
    *((_QWORD *)PoolWithTag + 7) = Context1;
    *((_QWORD *)PoolWithTag + 8) = Context2;
    v11 = (_LIST_ENTRY *)(PoolWithTag + 24);
    if ( Retrying )
      ExInterlockedInsertHeadList(&CcDeferredWrites, v11, &CcDeferredWriteSpinLock);
    else
      ExInterlockedInsertTailList(&CcDeferredWrites, v11, &CcDeferredWriteSpinLock);
    CcPostDeferredWrites(v12);
    v13 = KeAcquireQueuedSpinLock(5uLL);
    CcScheduleLazyWriteScan(1, 0);
    KeReleaseQueuedSpinLock(5uLL, v13);
  }
  else
  {
    ((void (__fastcall *)(PVOID, PVOID))PostRoutine)(Context1, Context2);
  }
}
