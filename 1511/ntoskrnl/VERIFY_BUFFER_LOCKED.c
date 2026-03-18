/*
 * XREFs of VERIFY_BUFFER_LOCKED @ 0x1406B9E88
 * Callers:
 *     VfBuildScatterGatherList @ 0x1406BA81C (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x1406BAAF8 (VfBuildScatterGatherListEx.c)
 *     VfGetScatterGatherList @ 0x1406BB584 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x1406BB8C0 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x1406BBC4C (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x1406BBDF4 (VfMapTransferEx.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14020BA88 (VfReportIssueWithOptions.c)
 *     MmAreMdlPagesLocked @ 0x1406B5B58 (MmAreMdlPagesLocked.c)
 *     ViHalPreprocessOptions @ 0x1406BDA64 (ViHalPreprocessOptions.c)
 */

void __fastcall VERIFY_BUFFER_LOCKED(__int64 a1)
{
  int v1; // ebx

  v1 = a1;
  if ( !(unsigned int)MmAreMdlPagesLocked(a1) )
  {
    ViHalPreprocessOptions(byte_1402D3FB8, "DMA Pages Not Locked! MDL %p for DMA not locked", (const void *)0xE);
    VfReportIssueWithOptions(230, 14, v1, 0, 0LL, byte_1402D3FB8);
  }
}
