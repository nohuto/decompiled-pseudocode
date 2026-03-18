/*
 * XREFs of ?SetVPRPaging@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C00150D4
 * Callers:
 *     ?DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0098748 (-DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_.c)
 *     ?ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C0099684 (-ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ.c)
 * Callees:
 *     ?EndCPUAccess@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C004C5B0 (-EndCPUAccess@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::SetVPRPaging(VIDMM_GLOBAL *this, struct _VIDMM_DMA_BUFFER *a2)
{
  char v2; // di

  v2 = (char)a2;
  VIDMM_DMA_POOL::EndCPUAccess(this, a2);
  *((_BYTE *)this + 40873) ^= (*((_BYTE *)this + 40873) ^ (4 * v2)) & 4;
}
