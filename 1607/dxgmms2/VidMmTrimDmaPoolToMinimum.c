/*
 * XREFs of VidMmTrimDmaPoolToMinimum @ 0x1C001D6A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VidMmTrimDmaPoolToMinimum(VIDMM_DMA_POOL *a1)
{
  VIDMM_DMA_POOL::TrimPool(a1, 1u);
}
