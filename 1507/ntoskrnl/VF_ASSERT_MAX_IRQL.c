/*
 * XREFs of VF_ASSERT_MAX_IRQL @ 0x14073A5A0
 * Callers:
 *     VfFlushAdapterBuffers @ 0x14073B770 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x14073B908 (VfFlushAdapterBuffersEx.c)
 *     VfGetScatterGatherListEx @ 0x14073C2A4 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x14073C630 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x14073C7D8 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x14073C9BC (VfPutDmaAdapter.c)
 *     VfReadDmaCounter @ 0x14073CE94 (VfReadDmaCounter.c)
 *     ViGetAdapterInformationInternal @ 0x14073E33C (ViGetAdapterInformationInternal.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14025B0C0 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x14073E7D0 (ViHalPreprocessOptions.c)
 */

void VF_ASSERT_MAX_IRQL()
{
  unsigned __int8 CurrentIrql; // al
  ULONG_PTR v1; // rbx

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
  {
    v1 = CurrentIrql;
    ViHalPreprocessOptions(byte_140323110, "Bad IRQL -- needed %x or less, got %x.", 268435475, 2);
    VfReportIssueWithOptions(230, 19, 2, 2, v1, byte_140323110);
  }
}
