/*
 * XREFs of ViGetRealDmaOperation @ 0x140709954
 * Callers:
 *     VfAllocateDomainCommonBuffer @ 0x14022285C (VfAllocateDomainCommonBuffer.c)
 *     VfFlushDmaBuffer @ 0x140222978 (VfFlushDmaBuffer.c)
 *     VfGetDmaDomain @ 0x1402229B8 (VfGetDmaDomain.c)
 *     VfJoinDmaDomain @ 0x1402229D8 (VfJoinDmaDomain.c)
 *     VfLeaveDmaDomain @ 0x140222A08 (VfLeaveDmaDomain.c)
 *     VfAllocateAdapterChannel @ 0x140706210 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1407063D4 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x1407065B8 (VfAllocateCommonBuffer.c)
 *     VfAllocateCommonBufferEx @ 0x14070665C (VfAllocateCommonBufferEx.c)
 *     VfBuildMdlFromScatterGatherList @ 0x140706774 (VfBuildMdlFromScatterGatherList.c)
 *     VfBuildScatterGatherList @ 0x1407068C0 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140706B9C (VfBuildScatterGatherListEx.c)
 *     VfCalculateScatterGatherListSize @ 0x140706D50 (VfCalculateScatterGatherListSize.c)
 *     VfCancelAdapterChannel @ 0x140706DA0 (VfCancelAdapterChannel.c)
 *     VfCancelMappedTransfer @ 0x140706E5C (VfCancelMappedTransfer.c)
 *     VfConfigureAdapterChannel @ 0x140706E8C (VfConfigureAdapterChannel.c)
 *     VfFlushAdapterBuffers @ 0x140706EC8 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x140707060 (VfFlushAdapterBuffersEx.c)
 *     VfFreeAdapterChannel @ 0x1407070FC (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x14070719C (VfFreeAdapterObject.c)
 *     VfFreeCommonBuffer @ 0x1407072B0 (VfFreeCommonBuffer.c)
 *     VfFreeMapRegisters @ 0x140707368 (VfFreeMapRegisters.c)
 *     VfGetDmaAdapterInfo @ 0x140707570 (VfGetDmaAdapterInfo.c)
 *     VfGetDmaAlignment @ 0x1407075A0 (VfGetDmaAlignment.c)
 *     VfGetDmaTransferInfo @ 0x1407075D8 (VfGetDmaTransferInfo.c)
 *     VfGetScatterGatherList @ 0x140707628 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140707964 (VfGetScatterGatherListEx.c)
 *     VfInitializeDmaTransferContext @ 0x140707C40 (VfInitializeDmaTransferContext.c)
 *     VfMapTransfer @ 0x140707CF0 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140707E98 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x14070807C (VfPutDmaAdapter.c)
 *     VfPutScatterGatherList @ 0x140708340 (VfPutScatterGatherList.c)
 *     VfReadDmaCounter @ 0x140708490 (VfReadDmaCounter.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x140223370 (VfReportIssueWithOptions.c)
 *     ViGetAdapterInformationInternal @ 0x140709738 (ViGetAdapterInformationInternal.c)
 *     ViHalPreprocessOptions @ 0x140709AEC (ViHalPreprocessOptions.c)
 */

__int64 __fastcall ViGetRealDmaOperation(struct _LIST_ENTRY *a1, unsigned int a2)
{
  __int64 v3; // rdi
  struct _LIST_ENTRY *AdapterInformationInternal; // rax
  struct _LIST_ENTRY *Flink; // rax

  v3 = a2;
  if ( ViVerifyDma && !a1 )
  {
    ViHalPreprocessOptions(byte_1402F99B4, "DMA adapters aren't supposed to be NULL anymore", 25LL, 0LL);
    VfReportIssueWithOptions(230, (_DWORD)a1 + 25, 0, 0, 0LL, byte_1402F99B4);
  }
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1, 1);
  if ( AdapterInformationInternal )
    Flink = AdapterInformationInternal[3].Flink;
  else
    Flink = a1->Blink;
  return *(__int64 *)((char *)&Flink->Flink + v3);
}
