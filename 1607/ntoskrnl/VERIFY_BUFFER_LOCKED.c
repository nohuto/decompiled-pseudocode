/*
 * XREFs of VERIFY_BUFFER_LOCKED @ 0x140705F2C
 * Callers:
 *     VfBuildScatterGatherList @ 0x1407068C0 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140706B9C (VfBuildScatterGatherListEx.c)
 *     VfGetScatterGatherList @ 0x140707628 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140707964 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x140707CF0 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140707E98 (VfMapTransferEx.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x140223370 (VfReportIssueWithOptions.c)
 *     MmAreMdlPagesLocked @ 0x1407019C0 (MmAreMdlPagesLocked.c)
 *     ViHalPreprocessOptions @ 0x140709AEC (ViHalPreprocessOptions.c)
 */

void __fastcall VERIFY_BUFFER_LOCKED(__int64 a1)
{
  int v1; // ebx

  v1 = a1;
  if ( !(unsigned int)MmAreMdlPagesLocked(a1) )
  {
    ViHalPreprocessOptions(byte_1402F9928, "DMA Pages Not Locked! MDL %p for DMA not locked", (const void *)0xE);
    VfReportIssueWithOptions(230, 14, v1, 0, 0LL, byte_1402F9928);
  }
}
