/*
 * XREFs of ViGetRealDmaOperation @ 0x1406BD8CC
 * Callers:
 *     VfAllocateDomainCommonBuffer @ 0x14020AF74 (VfAllocateDomainCommonBuffer.c)
 *     VfFlushDmaBuffer @ 0x14020B090 (VfFlushDmaBuffer.c)
 *     VfGetDmaDomain @ 0x14020B0D0 (VfGetDmaDomain.c)
 *     VfJoinDmaDomain @ 0x14020B0F0 (VfJoinDmaDomain.c)
 *     VfLeaveDmaDomain @ 0x14020B120 (VfLeaveDmaDomain.c)
 *     VfAllocateAdapterChannel @ 0x1406BA16C (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1406BA330 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x1406BA514 (VfAllocateCommonBuffer.c)
 *     VfAllocateCommonBufferEx @ 0x1406BA5B8 (VfAllocateCommonBufferEx.c)
 *     VfBuildMdlFromScatterGatherList @ 0x1406BA6D0 (VfBuildMdlFromScatterGatherList.c)
 *     VfBuildScatterGatherList @ 0x1406BA81C (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x1406BAAF8 (VfBuildScatterGatherListEx.c)
 *     VfCalculateScatterGatherListSize @ 0x1406BACAC (VfCalculateScatterGatherListSize.c)
 *     VfCancelAdapterChannel @ 0x1406BACFC (VfCancelAdapterChannel.c)
 *     VfCancelMappedTransfer @ 0x1406BADB8 (VfCancelMappedTransfer.c)
 *     VfConfigureAdapterChannel @ 0x1406BADE8 (VfConfigureAdapterChannel.c)
 *     VfFlushAdapterBuffers @ 0x1406BAE24 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x1406BAFBC (VfFlushAdapterBuffersEx.c)
 *     VfFreeAdapterChannel @ 0x1406BB058 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x1406BB0F8 (VfFreeAdapterObject.c)
 *     VfFreeCommonBuffer @ 0x1406BB20C (VfFreeCommonBuffer.c)
 *     VfFreeMapRegisters @ 0x1406BB2C4 (VfFreeMapRegisters.c)
 *     VfGetDmaAdapterInfo @ 0x1406BB4CC (VfGetDmaAdapterInfo.c)
 *     VfGetDmaAlignment @ 0x1406BB4FC (VfGetDmaAlignment.c)
 *     VfGetDmaTransferInfo @ 0x1406BB534 (VfGetDmaTransferInfo.c)
 *     VfGetScatterGatherList @ 0x1406BB584 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x1406BB8C0 (VfGetScatterGatherListEx.c)
 *     VfInitializeDmaTransferContext @ 0x1406BBB9C (VfInitializeDmaTransferContext.c)
 *     VfMapTransfer @ 0x1406BBC4C (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x1406BBDF4 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x1406BBFD8 (VfPutDmaAdapter.c)
 *     VfPutScatterGatherList @ 0x1406BC29C (VfPutScatterGatherList.c)
 *     VfReadDmaCounter @ 0x1406BC3EC (VfReadDmaCounter.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14020BA88 (VfReportIssueWithOptions.c)
 *     ViGetAdapterInformationInternal @ 0x1406BD6B0 (ViGetAdapterInformationInternal.c)
 *     ViHalPreprocessOptions @ 0x1406BDA64 (ViHalPreprocessOptions.c)
 */

__int64 __fastcall ViGetRealDmaOperation(struct _LIST_ENTRY *a1, unsigned int a2)
{
  __int64 v3; // rdi
  struct _LIST_ENTRY *AdapterInformationInternal; // rax
  struct _LIST_ENTRY *Flink; // rax

  v3 = a2;
  if ( ViVerifyDma && !a1 )
  {
    ViHalPreprocessOptions(byte_1402D4050, "DMA adapters aren't supposed to be NULL anymore", 25LL, 0LL);
    VfReportIssueWithOptions(230, (_DWORD)a1 + 25, 0, 0, 0LL, byte_1402D4050);
  }
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1, 1);
  if ( AdapterInformationInternal )
    Flink = AdapterInformationInternal[3].Flink;
  else
    Flink = a1->Blink;
  return *(__int64 *)((char *)&Flink->Flink + v3);
}
