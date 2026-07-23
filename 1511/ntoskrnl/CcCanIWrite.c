/*
 * XREFs of CcCanIWrite @ 0x14002F540
 * Callers:
 *     FsRtlCopyWrite @ 0x1405F33C8 (FsRtlCopyWrite.c)
 *     FsRtlPrepareMdlWriteDev @ 0x1405F3CC0 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     CcCanIWriteStream @ 0x14002F5F0 (CcCanIWriteStream.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     CcScheduleLazyWriteScan @ 0x1400AF9F0 (CcScheduleLazyWriteScan.c)
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x1400B2D14 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     ExInterlockedInsertHeadList @ 0x1400E237C (ExInterlockedInsertHeadList.c)
 *     ExInterlockedInsertTailList @ 0x1400E23E0 (ExInterlockedInsertTailList.c)
 *     CcPostDeferredWrites @ 0x1401A8F40 (CcPostDeferredWrites.c)
 *     CcPerfLogCanWriteFail @ 0x1401A9B7C (CcPerfLogCanWriteFail.c)
 */

BOOLEAN __stdcall CcCanIWrite(PFILE_OBJECT FileObject, ULONG BytesToWrite, BOOLEAN Wait, UCHAR Retrying)
{
  ULONG Flags; // eax
  __int64 Queue_low; // rcx
  KIRQL v11; // al
  __int64 v12; // rcx
  KIRQL v13; // bl
  KIRQL v14; // al
  __int64 v15; // rcx
  KIRQL v16; // bl
  __int16 Object; // [rsp+30h] [rbp-78h] BYREF
  char v18; // [rsp+32h] [rbp-76h]
  int v19; // [rsp+34h] [rbp-74h]
  _QWORD v20[3]; // [rsp+38h] [rbp-70h] BYREF
  int v21; // [rsp+50h] [rbp-58h]
  PFILE_OBJECT v22; // [rsp+58h] [rbp-50h]
  ULONG v23; // [rsp+60h] [rbp-48h]
  _LIST_ENTRY ListEntry; // [rsp+68h] [rbp-40h] BYREF
  __int16 *p_Object; // [rsp+78h] [rbp-30h]

  if ( FileObject )
  {
    Flags = FileObject->Flags;
    if ( (Flags & 0x10) != 0 || (Flags & 0x1000000) != 0 )
      return 1;
  }
  Queue_low = LODWORD(KeGetCurrentThread()[1].Queue);
  if ( (Queue_low & 2) != 0 )
    return 1;
  if ( (Retrying || CcDeferredWrites.Flink == &CcDeferredWrites)
    && (unsigned __int8)CcCanIWriteStream(FileObject, BytesToWrite, 0LL, 0LL) )
  {
    return 1;
  }
  if ( (xmmword_140382290 & 0x20000) != 0 )
    CcPerfLogCanWriteFail(FileObject, BytesToWrite, CcGlobalDirtyPageStatistics, CcGlobalDirtyPageThresholds);
  LOBYTE(Queue_low) = 1;
  CcAdjustWriteBehindThreadPoolIfNeeded(Queue_low);
  if ( Wait )
  {
    Object = 0;
    v20[1] = v20;
    v20[0] = v20;
    p_Object = &Object;
    v18 = 6;
    v19 = 0;
    v21 = 4719356;
    v22 = FileObject;
    v23 = BytesToWrite;
    if ( Retrying )
      ExInterlockedInsertHeadList(&CcDeferredWrites, &ListEntry, &CcDeferredWriteSpinLock);
    else
      ExInterlockedInsertTailList(&CcDeferredWrites, &ListEntry, &CcDeferredWriteSpinLock);
    v11 = KeAcquireQueuedSpinLock(5uLL);
    LOBYTE(v12) = 1;
    v13 = v11;
    CcScheduleLazyWriteScan(v12, 0LL);
    KeReleaseQueuedSpinLock(5uLL, v13);
    while ( 1 )
    {
      CcPostDeferredWrites();
      if ( !KeWaitForSingleObject(&Object, Executive, 0, 0, &CcIdleDelay) )
        break;
      if ( CcCoalescingState || CcForcedDisableLazywriteScan )
      {
        v14 = KeAcquireQueuedSpinLock(5uLL);
        LOBYTE(v15) = 1;
        v16 = v14;
        CcScheduleLazyWriteScan(v15, 0LL);
        if ( CcForcedDisableLazywriteScan )
          CcForcedDisableLazywriteScan = 0;
        KeReleaseQueuedSpinLock(5uLL, v16);
      }
    }
    return 1;
  }
  return 0;
}
