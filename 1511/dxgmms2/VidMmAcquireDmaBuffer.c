/*
 * XREFs of VidMmAcquireDmaBuffer @ 0x1C0011870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidMmAcquireDmaBuffer(
        VIDMM_DMA_POOL *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        struct _VIDMM_DMA_BUFFER **a4)
{
  return VIDMM_DMA_POOL::AcquireBuffer(a1, a4, a2, a3);
}
