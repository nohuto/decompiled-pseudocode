/*
 * XREFs of ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0011DA0
 * Callers:
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0001380 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C0001AE0 (ndisMDispatchReceiveNetBufferLists.c)
 *     ndisMTopReceiveNetBufferLists @ 0x1C0002240 (ndisMTopReceiveNetBufferLists.c)
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C00029D0 (ndisMIndicateNetBufferListsToOpen.c)
 *     ndisMSendCompleteNetBufferListsInternal @ 0x1C00031E0 (ndisMSendCompleteNetBufferListsInternal.c)
 *     ?ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS_PCW_CONTEXT@@@Z @ 0x1C0003558 (-ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS.c)
 *     NdisMSendNetBufferListsComplete @ 0x1C0003600 (NdisMSendNetBufferListsComplete.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C00039D0 (NdisMIndicateReceiveNetBufferLists.c)
 *     ndisInterruptDpc @ 0x1C0006D00 (ndisInterruptDpc.c)
 *     ndisQueuedMiniportDpcWorkItem @ 0x1C000A800 (ndisQueuedMiniportDpcWorkItem.c)
 *     NdisSendNetBufferLists @ 0x1C000B5B0 (NdisSendNetBufferLists.c)
 *     NdisReturnNetBufferLists @ 0x1C000CF90 (NdisReturnNetBufferLists.c)
 *     NdisMAllocateNetBufferSGList @ 0x1C000D400 (NdisMAllocateNetBufferSGList.c)
 *     ndisMiniportMessageIsr @ 0x1C000DA30 (ndisMiniportMessageIsr.c)
 *     ndisMSendNBLToMiniport @ 0x1C000E0D0 (ndisMSendNBLToMiniport.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C0021200 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ndisMiniportIsr @ 0x1C0026160 (ndisMiniportIsr.c)
 *     NdisBuildScatterGatherList @ 0x1C00471A0 (NdisBuildScatterGatherList.c)
 *     ndisMSendNetBufferListsCompleteInternal @ 0x1C0050F7C (ndisMSendNetBufferListsCompleteInternal.c)
 *     ndisSendNBLToFilter @ 0x1C0054960 (ndisSendNBLToFilter.c)
 *     ndisMIsr @ 0x1C005C6C0 (ndisMIsr.c)
 *     ndisMIndicateSplitNblChain @ 0x1C00625A8 (ndisMIndicateSplitNblChain.c)
 *     ndisReturnNetBufferListsInternal @ 0x1C0062E18 (ndisReturnNetBufferListsInternal.c)
 *     ndisReplaySendNbls @ 0x1C0066B90 (ndisReplaySendNbls.c)
 * Callees:
 *     ?ndisPcwGetCpu@@YAKPEAUNDIS_PCW_CONTEXT@@@Z @ 0x1C0011E28 (-ndisPcwGetCpu@@YAKPEAUNDIS_PCW_CONTEXT@@@Z.c)
 */

void __fastcall ndisPcwStartCycleCounter(struct NDIS_PCW_CONTEXT *a1)
{
  unsigned int Cpu; // eax
  _QWORD *v2; // rcx
  __int64 v3; // r10

  Cpu = ndisPcwGetCpu(a1);
  *(_QWORD *)(*v2 + ndisPcwOffsetToPerCpuData + (unsigned __int64)(Cpu * ndisPcwPerCpuDataStride) + 8 * v3 + 304) = __rdtsc();
}
