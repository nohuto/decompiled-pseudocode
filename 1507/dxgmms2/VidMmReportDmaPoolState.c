/*
 * XREFs of VidMmReportDmaPoolState @ 0x1C000E7B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall VidMmReportDmaPoolState(VIDMM_DMA_POOL *a1)
{
  VIDMM_DMA_POOL::ReportState(a1);
}
