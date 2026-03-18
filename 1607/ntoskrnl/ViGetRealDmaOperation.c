/*
 * XREFs of ViGetRealDmaOperation @ 0x140709924
 * Callers:
 *     VfAllocateDomainCommonBuffer @ 0x140222A30 (VfAllocateDomainCommonBuffer.c)
 *     VfFlushDmaBuffer @ 0x140222B4C (VfFlushDmaBuffer.c)
 *     VfGetDmaDomain @ 0x140222B8C (VfGetDmaDomain.c)
 *     VfJoinDmaDomain @ 0x140222BAC (VfJoinDmaDomain.c)
 *     VfLeaveDmaDomain @ 0x140222BDC (VfLeaveDmaDomain.c)
 *     VfAllocateAdapterChannel @ 0x1407061E0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1407063A4 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x140706588 (VfAllocateCommonBuffer.c)
 *     VfAllocateCommonBufferEx @ 0x14070662C (VfAllocateCommonBufferEx.c)
 *     VfBuildMdlFromScatterGatherList @ 0x140706744 (VfBuildMdlFromScatterGatherList.c)
 *     VfBuildScatterGatherList @ 0x140706890 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140706B6C (VfBuildScatterGatherListEx.c)
 *     VfCalculateScatterGatherListSize @ 0x140706D20 (VfCalculateScatterGatherListSize.c)
 *     VfCancelAdapterChannel @ 0x140706D70 (VfCancelAdapterChannel.c)
 *     VfCancelMappedTransfer @ 0x140706E2C (VfCancelMappedTransfer.c)
 *     VfConfigureAdapterChannel @ 0x140706E5C (VfConfigureAdapterChannel.c)
 *     VfFlushAdapterBuffers @ 0x140706E98 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x140707030 (VfFlushAdapterBuffersEx.c)
 *     VfFreeAdapterChannel @ 0x1407070CC (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x14070716C (VfFreeAdapterObject.c)
 *     VfFreeCommonBuffer @ 0x140707280 (VfFreeCommonBuffer.c)
 *     VfFreeMapRegisters @ 0x140707338 (VfFreeMapRegisters.c)
 *     VfGetDmaAdapterInfo @ 0x140707540 (VfGetDmaAdapterInfo.c)
 *     VfGetDmaAlignment @ 0x140707570 (VfGetDmaAlignment.c)
 *     VfGetDmaTransferInfo @ 0x1407075A8 (VfGetDmaTransferInfo.c)
 *     VfGetScatterGatherList @ 0x1407075F8 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140707934 (VfGetScatterGatherListEx.c)
 *     VfInitializeDmaTransferContext @ 0x140707C10 (VfInitializeDmaTransferContext.c)
 *     VfMapTransfer @ 0x140707CC0 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140707E68 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x14070804C (VfPutDmaAdapter.c)
 *     VfPutScatterGatherList @ 0x140708310 (VfPutScatterGatherList.c)
 *     VfReadDmaCounter @ 0x140708460 (VfReadDmaCounter.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x140223544 (VfReportIssueWithOptions.c)
 *     ViGetAdapterInformationInternal @ 0x140709708 (ViGetAdapterInformationInternal.c)
 *     ViHalPreprocessOptions @ 0x140709ABC (ViHalPreprocessOptions.c)
 */

__int64 __fastcall ViGetRealDmaOperation(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  ULONG_PTR AdapterInformationInternal; // rax
  __int64 v5; // rax

  v3 = a2;
  if ( ViVerifyDma && !a1 )
  {
    ViHalPreprocessOptions(byte_1402F99B4, "DMA adapters aren't supposed to be NULL anymore", 25LL, 0LL);
    VfReportIssueWithOptions(230, a1 + 25, 0, 0, 0LL, byte_1402F99B4);
  }
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1, 1);
  if ( AdapterInformationInternal )
    v5 = *(_QWORD *)(AdapterInformationInternal + 48);
  else
    v5 = *(_QWORD *)(a1 + 8);
  return *(_QWORD *)(v3 + v5);
}
