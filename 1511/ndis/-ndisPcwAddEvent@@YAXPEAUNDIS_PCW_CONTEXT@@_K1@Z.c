/*
 * XREFs of ?ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z @ 0x1C0063588
 * Callers:
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C00029D0 (ndisMIndicateNetBufferListsToOpen.c)
 *     ndisMSendCompleteNetBufferListsInternal @ 0x1C00031E0 (ndisMSendCompleteNetBufferListsInternal.c)
 *     ?ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS_PCW_CONTEXT@@@Z @ 0x1C0003558 (-ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS.c)
 *     ndisInterruptDpc @ 0x1C0006D00 (ndisInterruptDpc.c)
 *     ndisQueuedMiniportDpcWorkItem @ 0x1C000A800 (ndisQueuedMiniportDpcWorkItem.c)
 *     NdisSendNetBufferLists @ 0x1C000B5B0 (NdisSendNetBufferLists.c)
 *     NdisReturnNetBufferLists @ 0x1C000CF90 (NdisReturnNetBufferLists.c)
 *     NdisMAllocateNetBufferSGList @ 0x1C000D400 (NdisMAllocateNetBufferSGList.c)
 *     ndisMiniportMessageIsr @ 0x1C000DA30 (ndisMiniportMessageIsr.c)
 *     NdisMQueueDpcEx @ 0x1C0011A80 (NdisMQueueDpcEx.c)
 *     ?ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z @ 0x1C00155EC (-ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z.c)
 *     ndisPostSetMiniportRSSParameters @ 0x1C0023808 (ndisPostSetMiniportRSSParameters.c)
 *     ndisMiniportIsr @ 0x1C0026160 (ndisMiniportIsr.c)
 *     NdisBuildScatterGatherList @ 0x1C00471A0 (NdisBuildScatterGatherList.c)
 *     ndisMIsr @ 0x1C005C6C0 (ndisMIsr.c)
 *     ?NdisMTcpOffloadReceiveIndicate@@YAHPEAXPEAU_NET_BUFFER_LIST@@HPEAK@Z @ 0x1C00603A0 (-NdisMTcpOffloadReceiveIndicate@@YAHPEAXPEAU_NET_BUFFER_LIST@@HPEAK@Z.c)
 *     NdisOffloadTcpSend @ 0x1C0060750 (NdisOffloadTcpSend.c)
 * Callees:
 *     ?ndisPcwGetCpu@@YAKPEAUNDIS_PCW_CONTEXT@@@Z @ 0x1C0011E28 (-ndisPcwGetCpu@@YAKPEAUNDIS_PCW_CONTEXT@@@Z.c)
 */

void __fastcall ndisPcwAddEvent(struct NDIS_PCW_CONTEXT *a1)
{
  __int64 v1; // r10
  _QWORD *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8

  v1 = (unsigned int)ndisPcwGetCpu(a1) * ndisPcwPerCpuDataStride;
  *(_QWORD *)(*v2 + ndisPcwOffsetToPerCpuData + v1 + 8 * v3) += v4;
}
