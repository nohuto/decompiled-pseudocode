/*
 * XREFs of ?ZeroStructure@VIDSCH_FLIP_MULTIPLANE_OVERLAY2@@QEAAXXZ @ 0x1C0017450
 * Callers:
 *     ?ZeroFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ @ 0x1C0001498 (-ZeroFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDSCH_FLIP_MULTIPLANE_OVERLAY2::ZeroStructure(VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *this)
{
  memset((char *)this + 16, 0, (unsigned __int64)(unsigned int)(*((_DWORD *)this + 1) * *((_DWORD *)this + 2)) << 6);
}
