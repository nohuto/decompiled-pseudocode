/*
 * XREFs of ?ZeroFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ @ 0x1C0001498
 * Callers:
 *     ?VidSchiSubmitIndependentFlip@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@@Z @ 0x1C0001000 (-VidSchiSubmitIndependentFlip@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER.c)
 *     VidSchiSendToExecutionQueue @ 0x1C00086D0 (VidSchiSendToExecutionQueue.c)
 * Callees:
 *     memset @ 0x1C0016C00 (memset.c)
 */

void __fastcall VIDSCH_FLIP_QUEUE_ENTRY::ZeroFlipQueueEntry(VIDSCH_FLIP_QUEUE_ENTRY *this)
{
  VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *v1; // rbx

  v1 = (VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)*((_QWORD *)this + 144);
  memset(this, 0, 0x488uLL);
  *((_QWORD *)this + 144) = v1;
  VIDSCH_FLIP_MULTIPLANE_OVERLAY2::ZeroStructure(v1);
}
