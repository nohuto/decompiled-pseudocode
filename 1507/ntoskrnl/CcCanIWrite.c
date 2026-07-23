/*
 * XREFs of CcCanIWrite @ 0x1400E4880
 * Callers:
 *     FsRtlCopyWrite @ 0x14066C1B4 (FsRtlCopyWrite.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14066CBCC (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x1400304C4 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     CcScheduleLazyWriteScan @ 0x140030E38 (CcScheduleLazyWriteScan.c)
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     CcCanIWriteStream @ 0x1400E4930 (CcCanIWriteStream.c)
 *     ExInterlockedInsertTailList @ 0x140122800 (ExInterlockedInsertTailList.c)
 *     ExInterlockedInsertHeadList @ 0x14012292C (ExInterlockedInsertHeadList.c)
 *     CcPostDeferredWrites @ 0x1401DD050 (CcPostDeferredWrites.c)
 *     CcPerfLogCanWriteFail @ 0x1401DE4EC (CcPerfLogCanWriteFail.c)
 */

BOOLEAN __stdcall CcCanIWrite(PFILE_OBJECT FileObject, ULONG BytesToWrite, BOOLEAN Wait, UCHAR Retrying)
{
  ULONG Flags; // eax
  KIRQL v10; // bl
  __int64 v11; // rcx
  KIRQL v12; // bl
  __int16 Object; // [rsp+30h] [rbp-78h] BYREF
  char v14; // [rsp+32h] [rbp-76h]
  int v15; // [rsp+34h] [rbp-74h]
  _QWORD v16[3]; // [rsp+38h] [rbp-70h] BYREF
  int v17; // [rsp+50h] [rbp-58h]
  PFILE_OBJECT v18; // [rsp+58h] [rbp-50h]
  ULONG v19; // [rsp+60h] [rbp-48h]
  _LIST_ENTRY ListEntry; // [rsp+68h] [rbp-40h] BYREF
  __int16 *p_Object; // [rsp+78h] [rbp-30h]

  if ( FileObject )
  {
    Flags = FileObject->Flags;
    if ( (Flags & 0x10) != 0 || (Flags & 0x1000000) != 0 )
      return 1;
  }
  if ( ((__int64)KeGetCurrentThread()[1].Queue & 2) != 0 )
    return 1;
  if ( (Retrying || CcDeferredWrites.Flink == &CcDeferredWrites)
    && (unsigned __int8)CcCanIWriteStream(FileObject, BytesToWrite, 0LL, 0LL) )
  {
    return 1;
  }
  if ( (xmmword_1403D1290 & 0x20000) != 0 )
    CcPerfLogCanWriteFail(FileObject, BytesToWrite, CcGlobalDirtyPageStatistics, CcGlobalDirtyPageThresholds);
  CcAdjustWriteBehindThreadPoolIfNeeded(1);
  if ( Wait )
  {
    Object = 0;
    v16[1] = v16;
    v16[0] = v16;
    p_Object = &Object;
    v14 = 6;
    v15 = 0;
    v17 = 4719356;
    v18 = FileObject;
    v19 = BytesToWrite;
    if ( Retrying )
      ExInterlockedInsertHeadList(&CcDeferredWrites, &ListEntry, &CcDeferredWriteSpinLock);
    else
      ExInterlockedInsertTailList(&CcDeferredWrites, &ListEntry, &CcDeferredWriteSpinLock);
    v10 = KeAcquireQueuedSpinLock(5uLL);
    CcScheduleLazyWriteScan(1, 0);
    KeReleaseQueuedSpinLock(5uLL, v10);
    while ( 1 )
    {
      CcPostDeferredWrites(v11);
      if ( !KeWaitForSingleObject(&Object, Executive, 0, 0, &CcIdleDelay) )
        break;
      if ( CcCoalescingState || CcForcedDisableLazywriteScan )
      {
        v12 = KeAcquireQueuedSpinLock(5uLL);
        CcScheduleLazyWriteScan(1, 0);
        if ( CcForcedDisableLazywriteScan )
          CcForcedDisableLazywriteScan = 0;
        KeReleaseQueuedSpinLock(5uLL, v12);
      }
    }
    return 1;
  }
  return 0;
}
