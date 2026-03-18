/*
 * XREFs of VF_ASSERT_IRQL @ 0x14073A528
 * Callers:
 *     VfAllocateAdapterChannel @ 0x14073A974 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x14073AB94 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x14073ADC0 (VfAllocateCommonBuffer.c)
 *     VfAllocateCrashDumpRegisters @ 0x14073AEF0 (VfAllocateCrashDumpRegisters.c)
 *     VfBuildScatterGatherList @ 0x14073B110 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x14073B444 (VfBuildScatterGatherListEx.c)
 *     VfFreeAdapterChannel @ 0x14073B9A4 (VfFreeAdapterChannel.c)
 *     VfFreeCommonBuffer @ 0x14073BB9C (VfFreeCommonBuffer.c)
 *     VfFreeMapRegisters @ 0x14073BC54 (VfFreeMapRegisters.c)
 *     VfGetDmaAdapter @ 0x14073BD44 (VfGetDmaAdapter.c)
 *     VfGetDmaAlignment @ 0x14073BE8C (VfGetDmaAlignment.c)
 *     VfGetScatterGatherList @ 0x14073BF14 (VfGetScatterGatherList.c)
 *     VfPutScatterGatherList @ 0x14073CCCC (VfPutScatterGatherList.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14025B0C0 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x14073E7D0 (ViHalPreprocessOptions.c)
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
    ViHalPreprocessOptions(byte_14032310C, "Bad IRQL -- needed %x, got %x.", 268435475, 1);
    VfReportIssueWithOptions(230, 19, 1, v2, v3, byte_14032310C);
  }
}
