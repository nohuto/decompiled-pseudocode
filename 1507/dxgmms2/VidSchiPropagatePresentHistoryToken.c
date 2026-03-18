/*
 * XREFs of VidSchiPropagatePresentHistoryToken @ 0x1C00016F8
 * Callers:
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N@Z @ 0x1C00014D0 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_IN.c)
 *     VidSchUnwaitFlipQueue @ 0x1C00150E4 (VidSchUnwaitFlipQueue.c)
 *     VidSchiCompleteFlipEntry @ 0x1C00157C8 (VidSchiCompleteFlipEntry.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C0016460 (VidSchiExecuteMmIoFlip.c)
 *     VidSchSubmitCommand @ 0x1C002E700 (VidSchSubmitCommand.c)
 * Callees:
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C000DFB4 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 */

void __fastcall VidSchiPropagatePresentHistoryToken(
        PKSPIN_LOCK SpinLock,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a2,
        bool a3,
        bool a4,
        bool a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  CRefCountedBuffer *v12; // rcx
  CRefCountedBuffer *v13; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  if ( a6 && a7 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a6 + 16), &LockHandle);
    v13 = *(CRefCountedBuffer **)(a6 + 8);
    if ( v13 )
      CRefCountedBuffer::RefCountedBufferRelease(v13);
    *(_QWORD *)(a6 + 8) = a7;
    _InterlockedIncrement((volatile signed __int32 *)(a7 + 4));
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  if ( a8 )
  {
    v12 = *(CRefCountedBuffer **)(a8 + 24);
    if ( v12 )
    {
      CRefCountedBuffer::RefCountedBufferRelease(v12);
      *(_QWORD *)(a8 + 24) = 0LL;
    }
  }
  DXGPRESENTHISTORYTOKENQUEUE::PropagatePresentHistoryToken(SpinLock, a2, a3, a4, a5);
}
