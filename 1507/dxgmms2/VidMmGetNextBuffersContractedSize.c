/*
 * XREFs of VidMmGetNextBuffersContractedSize @ 0x1C000E690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall VidMmGetNextBuffersContractedSize(
        VIDMM_DMA_POOL *a1,
        unsigned __int64 *a2,
        unsigned int *a3,
        unsigned int *a4)
{
  VIDMM_DMA_POOL::GetNextBuffersContractedSize(a1, a2, a3, a4);
}
