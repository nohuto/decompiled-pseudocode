/*
 * XREFs of ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0011F24
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x1C0002D90 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0003BA0 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N@Z @ 0x1C00105A0 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_IN.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1C0011348 (VidSchiPropagatePresentHistoryToken.c)
 *     ?VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IIAEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAHPEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x1C0020E18 (-VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IIAEAU_VIDSCH_CALL_EXECUTE_FLI.c)
 * Callees:
 *     <none>
 */

void __fastcall CRefCountedBuffer::RefCountedBufferRelease(CRefCountedBuffer *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 1, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag(this, 0);
}
