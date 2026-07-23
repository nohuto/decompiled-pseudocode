/*
 * XREFs of VF_ASSERT_IRQL @ 0x140705F98
 * Callers:
 *     VfAllocateAdapterChannel @ 0x140706210 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1407063D4 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x1407065B8 (VfAllocateCommonBuffer.c)
 *     VfAllocateCrashDumpRegisters @ 0x1407066E8 (VfAllocateCrashDumpRegisters.c)
 *     VfBuildScatterGatherList @ 0x1407068C0 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140706B9C (VfBuildScatterGatherListEx.c)
 *     VfFreeAdapterChannel @ 0x1407070FC (VfFreeAdapterChannel.c)
 *     VfFreeCommonBuffer @ 0x1407072B0 (VfFreeCommonBuffer.c)
 *     VfFreeMapRegisters @ 0x140707368 (VfFreeMapRegisters.c)
 *     VfGetDmaAdapter @ 0x140707458 (VfGetDmaAdapter.c)
 *     VfGetDmaAlignment @ 0x1407075A0 (VfGetDmaAlignment.c)
 *     VfGetScatterGatherList @ 0x140707628 (VfGetScatterGatherList.c)
 *     VfPutScatterGatherList @ 0x140708340 (VfPutScatterGatherList.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x140223370 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140709AEC (ViHalPreprocessOptions.c)
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
