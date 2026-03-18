/*
 * XREFs of VF_ASSERT_MAX_IRQL @ 0x1406B9F6C
 * Callers:
 *     VfFlushAdapterBuffers @ 0x1406BAE24 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x1406BAFBC (VfFlushAdapterBuffersEx.c)
 *     VfGetScatterGatherListEx @ 0x1406BB8C0 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x1406BBC4C (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x1406BBDF4 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x1406BBFD8 (VfPutDmaAdapter.c)
 *     VfReadDmaCounter @ 0x1406BC3EC (VfReadDmaCounter.c)
 *     ViGetAdapterInformationInternal @ 0x1406BD6B0 (ViGetAdapterInformationInternal.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14020BA88 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x1406BDA64 (ViHalPreprocessOptions.c)
 */

void VF_ASSERT_MAX_IRQL()
{
  unsigned __int8 CurrentIrql; // al
  ULONG_PTR v1; // rbx

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
  {
    v1 = CurrentIrql;
    ViHalPreprocessOptions(byte_1402D3FE0, "Bad IRQL -- needed %x or less, got %x.", 268435475, 2);
    VfReportIssueWithOptions(230, 19, 2, 2, v1, byte_1402D3FE0);
  }
}
