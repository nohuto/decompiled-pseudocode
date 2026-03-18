/*
 * XREFs of VERIFY_BUFFER_LOCKED @ 0x140705EFC
 * Callers:
 *     VfBuildScatterGatherList @ 0x140706890 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140706B6C (VfBuildScatterGatherListEx.c)
 *     VfGetScatterGatherList @ 0x1407075F8 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140707934 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x140707CC0 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140707E68 (VfMapTransferEx.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x140223544 (VfReportIssueWithOptions.c)
 *     MmAreMdlPagesLocked @ 0x140701990 (MmAreMdlPagesLocked.c)
 *     ViHalPreprocessOptions @ 0x140709ABC (ViHalPreprocessOptions.c)
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
