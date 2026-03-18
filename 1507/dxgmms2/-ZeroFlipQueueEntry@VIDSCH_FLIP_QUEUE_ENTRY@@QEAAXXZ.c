/*
 * XREFs of ?ZeroFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ @ 0x1C0008D50
 * Callers:
 *     VidSchiSendToExecutionQueue @ 0x1C0001A80 (VidSchiSendToExecutionQueue.c)
 *     ?VidSchiSubmitIndependentFlip@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@@Z @ 0x1C00132A0 (-VidSchiSubmitIndependentFlip@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C001A630 (VidSchiSubmitMmIoFlipCommand.c)
 * Callees:
 *     memset @ 0x1C0008500 (memset.c)
 */

void __fastcall VIDSCH_FLIP_QUEUE_ENTRY::ZeroFlipQueueEntry(VIDSCH_FLIP_QUEUE_ENTRY *this)
{
  VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *v1; // rbx

  v1 = (VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)*((_QWORD *)this + 142);
  memset(this, 0, 0x478uLL);
  *((_QWORD *)this + 142) = v1;
  VIDSCH_FLIP_MULTIPLANE_OVERLAY2::ZeroStructure(v1);
}
