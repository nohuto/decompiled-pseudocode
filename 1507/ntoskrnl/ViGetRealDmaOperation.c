/*
 * XREFs of ViGetRealDmaOperation @ 0x14073E5E4
 * Callers:
 *     VfAllocateDomainCommonBuffer @ 0x14025A4E8 (VfAllocateDomainCommonBuffer.c)
 *     VfFlushDmaBuffer @ 0x14025A604 (VfFlushDmaBuffer.c)
 *     VfGetDmaDomain @ 0x14025A644 (VfGetDmaDomain.c)
 *     VfJoinDmaDomain @ 0x14025A664 (VfJoinDmaDomain.c)
 *     VfLeaveDmaDomain @ 0x14025A694 (VfLeaveDmaDomain.c)
 *     VfAllocateAdapterChannel @ 0x14073A974 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x14073AB94 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x14073ADC0 (VfAllocateCommonBuffer.c)
 *     VfAllocateCommonBufferEx @ 0x14073AE64 (VfAllocateCommonBufferEx.c)
 *     VfBuildMdlFromScatterGatherList @ 0x14073AF7C (VfBuildMdlFromScatterGatherList.c)
 *     VfBuildScatterGatherList @ 0x14073B110 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x14073B444 (VfBuildScatterGatherListEx.c)
 *     VfCalculateScatterGatherListSize @ 0x14073B5F8 (VfCalculateScatterGatherListSize.c)
 *     VfCancelAdapterChannel @ 0x14073B648 (VfCancelAdapterChannel.c)
 *     VfCancelMappedTransfer @ 0x14073B704 (VfCancelMappedTransfer.c)
 *     VfConfigureAdapterChannel @ 0x14073B734 (VfConfigureAdapterChannel.c)
 *     VfFlushAdapterBuffers @ 0x14073B770 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x14073B908 (VfFlushAdapterBuffersEx.c)
 *     VfFreeAdapterChannel @ 0x14073B9A4 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x14073BA44 (VfFreeAdapterObject.c)
 *     VfFreeCommonBuffer @ 0x14073BB9C (VfFreeCommonBuffer.c)
 *     VfFreeMapRegisters @ 0x14073BC54 (VfFreeMapRegisters.c)
 *     VfGetDmaAdapterInfo @ 0x14073BE5C (VfGetDmaAdapterInfo.c)
 *     VfGetDmaAlignment @ 0x14073BE8C (VfGetDmaAlignment.c)
 *     VfGetDmaTransferInfo @ 0x14073BEC4 (VfGetDmaTransferInfo.c)
 *     VfGetScatterGatherList @ 0x14073BF14 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x14073C2A4 (VfGetScatterGatherListEx.c)
 *     VfInitializeDmaTransferContext @ 0x14073C580 (VfInitializeDmaTransferContext.c)
 *     VfMapTransfer @ 0x14073C630 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x14073C7D8 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x14073C9BC (VfPutDmaAdapter.c)
 *     VfPutScatterGatherList @ 0x14073CCCC (VfPutScatterGatherList.c)
 *     VfReadDmaCounter @ 0x14073CE94 (VfReadDmaCounter.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14025B0C0 (VfReportIssueWithOptions.c)
 *     ViGetAdapterInformationInternal @ 0x14073E33C (ViGetAdapterInformationInternal.c)
 *     ViHalPreprocessOptions @ 0x14073E7D0 (ViHalPreprocessOptions.c)
 */

__int64 __fastcall ViGetRealDmaOperation(struct _LIST_ENTRY *a1, unsigned int a2)
{
  __int64 v3; // rdi
  struct _LIST_ENTRY *AdapterInformationInternal; // rax
  struct _LIST_ENTRY *Flink; // rax

  v3 = a2;
  if ( ViVerifyDma && !a1 )
  {
    ViHalPreprocessOptions(byte_140323174, "DMA adapters aren't supposed to be NULL anymore", 25LL, 0LL);
    VfReportIssueWithOptions(230, (_DWORD)a1 + 25, 0, 0, 0LL, byte_140323174);
  }
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1, 1);
  if ( AdapterInformationInternal )
    Flink = AdapterInformationInternal[3].Flink;
  else
    Flink = a1->Blink;
  return *(__int64 *)((char *)&Flink->Flink + v3);
}
