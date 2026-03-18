/*
 * XREFs of VF_ASSERT_IRQL @ 0x1406B9EF4
 * Callers:
 *     VfAllocateAdapterChannel @ 0x1406BA16C (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1406BA330 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x1406BA514 (VfAllocateCommonBuffer.c)
 *     VfAllocateCrashDumpRegisters @ 0x1406BA644 (VfAllocateCrashDumpRegisters.c)
 *     VfBuildScatterGatherList @ 0x1406BA81C (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x1406BAAF8 (VfBuildScatterGatherListEx.c)
 *     VfFreeAdapterChannel @ 0x1406BB058 (VfFreeAdapterChannel.c)
 *     VfFreeCommonBuffer @ 0x1406BB20C (VfFreeCommonBuffer.c)
 *     VfFreeMapRegisters @ 0x1406BB2C4 (VfFreeMapRegisters.c)
 *     VfGetDmaAdapter @ 0x1406BB3B4 (VfGetDmaAdapter.c)
 *     VfGetDmaAlignment @ 0x1406BB4FC (VfGetDmaAlignment.c)
 *     VfGetScatterGatherList @ 0x1406BB584 (VfGetScatterGatherList.c)
 *     VfPutScatterGatherList @ 0x1406BC29C (VfPutScatterGatherList.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14020BA88 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x1406BDA64 (ViHalPreprocessOptions.c)
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
    ViHalPreprocessOptions(byte_1402D3FE8, "Bad IRQL -- needed %x, got %x.", 268435475, 1);
    VfReportIssueWithOptions(230, 19, 1, v2, v3, byte_1402D3FE8);
  }
}
