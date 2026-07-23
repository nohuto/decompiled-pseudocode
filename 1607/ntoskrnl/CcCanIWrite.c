/*
 * XREFs of CcCanIWrite @ 0x140020570
 * Callers:
 *     FsRtlCopyWrite @ 0x14061D6EC (FsRtlCopyWrite.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14061E0CC (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     CcCanIWriteStream @ 0x140020620 (CcCanIWriteStream.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x14006F800 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     CcScheduleLazyWriteScan @ 0x14007049C (CcScheduleLazyWriteScan.c)
 *     ExInterlockedInsertTailList @ 0x14008B840 (ExInterlockedInsertTailList.c)
 *     ExInterlockedInsertHeadList @ 0x1400A60E8 (ExInterlockedInsertHeadList.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     CcPostDeferredWrites @ 0x1401B19E8 (CcPostDeferredWrites.c)
 *     CcPerfLogCanWriteFail @ 0x1401B28C0 (CcPerfLogCanWriteFail.c)
 */

BOOLEAN __stdcall CcCanIWrite(PFILE_OBJECT FileObject, ULONG BytesToWrite, BOOLEAN Wait, UCHAR Retrying)
{
  ULONG Flags; // eax
  __int64 v9; // rcx
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
  v9 = *((unsigned int *)&KeGetCurrentThread()[1].SwapListEntry + 3);
  if ( (v9 & 2) != 0 )
    return 1;
  if ( (Retrying || CcDeferredWrites.Flink == &CcDeferredWrites)
    && (unsigned __int8)CcCanIWriteStream(FileObject, BytesToWrite, 0LL, 0LL) )
  {
    return 1;
  }
  if ( (xmmword_1403AA2D0 & 0x20000) != 0 )
    CcPerfLogCanWriteFail(FileObject, BytesToWrite, CcGlobalDirtyPageStatistics, CcGlobalDirtyPageThresholds);
  LOBYTE(v9) = 1;
  CcAdjustWriteBehindThreadPoolIfNeeded(v9);
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
