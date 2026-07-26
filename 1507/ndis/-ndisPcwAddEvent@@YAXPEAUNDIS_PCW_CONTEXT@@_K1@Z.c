/*
 * XREFs of ?ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z @ 0x1C00649F8
 * Callers:
 *     NdisSendNetBufferLists @ 0x1C00016E0 (NdisSendNetBufferLists.c)
 *     ndisMSendCompleteNetBufferListsInternal @ 0x1C0001DF0 (ndisMSendCompleteNetBufferListsInternal.c)
 *     ?ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS_PCW_CONTEXT@@@Z @ 0x1C0002140 (-ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS.c)
 *     ndisInterruptDpc @ 0x1C0008260 (ndisInterruptDpc.c)
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C00094A0 (ndisMIndicateNetBufferListsToOpen.c)
 *     NdisReturnNetBufferLists @ 0x1C000A000 (NdisReturnNetBufferLists.c)
 *     NdisMAllocateNetBufferSGList @ 0x1C000A470 (NdisMAllocateNetBufferSGList.c)
 *     ndisMiniportMessageIsr @ 0x1C000A980 (ndisMiniportMessageIsr.c)
 *     ndisPostSetMiniportRSSParameters @ 0x1C001FD64 (ndisPostSetMiniportRSSParameters.c)
 *     NdisBuildScatterGatherList @ 0x1C0045E80 (NdisBuildScatterGatherList.c)
 *     ?ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z @ 0x1C005C330 (-ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z.c)
 *     NdisMQueueDpcEx @ 0x1C005C550 (NdisMQueueDpcEx.c)
 *     ndisMIsr @ 0x1C005CC40 (ndisMIsr.c)
 *     ndisMiniportIsr @ 0x1C005D1E0 (ndisMiniportIsr.c)
 *     ?NdisMTcpOffloadReceiveIndicate@@YAHPEAXPEAU_NET_BUFFER_LIST@@HPEAK@Z @ 0x1C0060BE0 (-NdisMTcpOffloadReceiveIndicate@@YAHPEAXPEAU_NET_BUFFER_LIST@@HPEAK@Z.c)
 *     NdisOffloadTcpSend @ 0x1C0060F90 (NdisOffloadTcpSend.c)
 * Callees:
 *     ?ndisPcwGetCpu@@YAKPEAUNDIS_PCW_CONTEXT@@@Z @ 0x1C0064C24 (-ndisPcwGetCpu@@YAKPEAUNDIS_PCW_CONTEXT@@@Z.c)
 */

void __fastcall ndisPcwAddEvent(struct NDIS_PCW_CONTEXT *a1)
{
  __int64 v1; // r10
  _QWORD *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8

  v1 = ndisPcwGetCpu(a1) * ndisPcwPerCpuDataStride;
  *(_QWORD *)(*v2 + ndisPcwOffsetToPerCpuData + v1 + 8 * v3) += v4;
}
