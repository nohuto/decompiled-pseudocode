/*
 * XREFs of VidMmResizeBuffersInPool @ 0x1C001C760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall VidMmResizeBuffersInPool(VIDMM_DMA_POOL *a1, unsigned __int64 a2, unsigned int a3, unsigned int a4)
{
  return VIDMM_DMA_POOL::ResizeBuffersInPool(a1, a2, a3, a4);
}
