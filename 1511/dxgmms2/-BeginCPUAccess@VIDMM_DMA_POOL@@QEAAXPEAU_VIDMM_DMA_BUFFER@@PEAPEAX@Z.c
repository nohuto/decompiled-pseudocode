/*
 * XREFs of ?BeginCPUAccess@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@PEAPEAX@Z @ 0x1C006DEC0
 * Callers:
 *     VidMmBeginDmaBufferCPUAccess @ 0x1C0016D50 (VidMmBeginDmaBufferCPUAccess.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_DMA_POOL::BeginCPUAccess(VIDMM_DMA_POOL *this, struct _VIDMM_DMA_BUFFER *a2, void **a3)
{
  *a3 = *(void **)(*((_QWORD *)a2 + 7) + 360LL);
}
