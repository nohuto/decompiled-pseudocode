/*
 * XREFs of VERIFY_BUFFER_LOCKED @ 0x14073A4BC
 * Callers:
 *     VfBuildScatterGatherList @ 0x14073B110 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x14073B444 (VfBuildScatterGatherListEx.c)
 *     VfGetScatterGatherList @ 0x14073BF14 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x14073C2A4 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x14073C630 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x14073C7D8 (VfMapTransferEx.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14025B0C0 (VfReportIssueWithOptions.c)
 *     MmAreMdlPagesLocked @ 0x140735E3C (MmAreMdlPagesLocked.c)
 *     ViHalPreprocessOptions @ 0x14073E7D0 (ViHalPreprocessOptions.c)
 */

void __fastcall VERIFY_BUFFER_LOCKED(__int64 a1)
{
  int v1; // ebx

  v1 = a1;
  if ( !(unsigned int)MmAreMdlPagesLocked(a1) )
  {
    ViHalPreprocessOptions(byte_1403230E8, "DMA Pages Not Locked! MDL %p for DMA not locked", (const void *)0xE);
    VfReportIssueWithOptions(230, 14, v1, 0, 0LL, byte_1403230E8);
  }
}
