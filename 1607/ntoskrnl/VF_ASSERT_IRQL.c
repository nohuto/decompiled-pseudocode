/*
 * XREFs of VF_ASSERT_IRQL @ 0x140705F68
 * Callers:
 *     VfAllocateAdapterChannel @ 0x1407061E0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1407063A4 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x140706588 (VfAllocateCommonBuffer.c)
 *     VfAllocateCrashDumpRegisters @ 0x1407066B8 (VfAllocateCrashDumpRegisters.c)
 *     VfBuildScatterGatherList @ 0x140706890 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140706B6C (VfBuildScatterGatherListEx.c)
 *     VfFreeAdapterChannel @ 0x1407070CC (VfFreeAdapterChannel.c)
 *     VfFreeCommonBuffer @ 0x140707280 (VfFreeCommonBuffer.c)
 *     VfFreeMapRegisters @ 0x140707338 (VfFreeMapRegisters.c)
 *     VfGetDmaAdapter @ 0x140707428 (VfGetDmaAdapter.c)
 *     VfGetDmaAlignment @ 0x140707570 (VfGetDmaAlignment.c)
 *     VfGetScatterGatherList @ 0x1407075F8 (VfGetScatterGatherList.c)
 *     VfPutScatterGatherList @ 0x140708310 (VfPutScatterGatherList.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x140223544 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140709ABC (ViHalPreprocessOptions.c)
 */

void __fastcall VF_ASSERT_IRQL(unsigned __int8 a1)
{
  unsigned __int8 CurrentIrql; // al
  int v2; // edi
  ULONG_PTR v3; // rbx

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != a1 )
  {
    v2 = a1;
    v3 = CurrentIrql;
    ViHalPreprocessOptions(byte_1402F994C, "Bad IRQL -- needed %x, got %x.", 268435475, 1);
    VfReportIssueWithOptions(230, 19, 1, v2, v3, byte_1402F994C);
  }
}
