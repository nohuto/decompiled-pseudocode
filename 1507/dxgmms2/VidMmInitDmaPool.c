/*
 * XREFs of VidMmInitDmaPool @ 0x1C000E6B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall VidMmInitDmaPool(VIDMM_DMA_POOL *a1)
{
  return VIDMM_DMA_POOL::Init(a1);
}
