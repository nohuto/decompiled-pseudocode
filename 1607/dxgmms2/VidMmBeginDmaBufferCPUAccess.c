/*
 * XREFs of VidMmBeginDmaBufferCPUAccess @ 0x1C0014F90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VidMmBeginDmaBufferCPUAccess(VIDMM_DMA_POOL **a1, void **a2)
{
  VIDMM_DMA_POOL::BeginCPUAccess(a1[17], (struct _VIDMM_DMA_BUFFER *)a1, a2);
}
