/*
 * XREFs of VF_ASSERT_MAX_IRQL @ 0x140705FE0
 * Callers:
 *     VfFlushAdapterBuffers @ 0x140706E98 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x140707030 (VfFlushAdapterBuffersEx.c)
 *     VfGetScatterGatherListEx @ 0x140707934 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x140707CC0 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140707E68 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x14070804C (VfPutDmaAdapter.c)
 *     VfReadDmaCounter @ 0x140708460 (VfReadDmaCounter.c)
 *     ViGetAdapterInformationInternal @ 0x140709708 (ViGetAdapterInformationInternal.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x140223544 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140709ABC (ViHalPreprocessOptions.c)
 */

void VF_ASSERT_MAX_IRQL()
{
  unsigned __int8 CurrentIrql; // al
  ULONG_PTR v1; // rbx

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
  {
    v1 = CurrentIrql;
    ViHalPreprocessOptions(byte_1402F9948, "Bad IRQL -- needed %x or less, got %x.", 268435475, 2);
    VfReportIssueWithOptions(230, 19, 2, 2, v1, byte_1402F9948);
  }
}
