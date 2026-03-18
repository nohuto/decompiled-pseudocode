/*
 * XREFs of VidMmReleaseDmaBuffer @ 0x1C001C730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VidMmReleaseDmaBuffer(struct _VIDMM_DMA_BUFFER *a1)
{
  VIDMM_DMA_POOL::ReleaseBuffer(a1, a1, 0);
}
