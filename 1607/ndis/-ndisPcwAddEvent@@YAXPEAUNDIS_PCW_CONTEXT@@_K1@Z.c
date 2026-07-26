/*
 * XREFs of ?ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z @ 0x1C0067948
 * Callers:
 *     ndisMSendCompleteNetBufferListsInternal @ 0x1C0002270 (ndisMSendCompleteNetBufferListsInternal.c)
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C0003810 (ndisMIndicateNetBufferListsToOpen.c)
 *     NdisReturnNetBufferLists @ 0x1C0004140 (NdisReturnNetBufferLists.c)
 *     ?ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS_PCW_CONTEXT@@@Z @ 0x1C00045EC (-ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS.c)
 *     NdisSendNetBufferLists @ 0x1C0004690 (NdisSendNetBufferLists.c)
 *     ndisInterruptDpc @ 0x1C0004D50 (ndisInterruptDpc.c)
 *     NdisMAllocateNetBufferSGList @ 0x1C0006870 (NdisMAllocateNetBufferSGList.c)
 *     ndisMiniportMessageIsr @ 0x1C00070A0 (ndisMiniportMessageIsr.c)
 *     NdisMQueueDpcEx @ 0x1C00109C0 (NdisMQueueDpcEx.c)
 *     ndisQueuedMiniportDpcWorkItem @ 0x1C0021260 (ndisQueuedMiniportDpcWorkItem.c)
 *     ndisPostSetMiniportRSSParameters @ 0x1C00247F4 (ndisPostSetMiniportRSSParameters.c)
 *     ndisMiniportIsr @ 0x1C0026480 (ndisMiniportIsr.c)
 *     NdisBuildScatterGatherList @ 0x1C004B790 (NdisBuildScatterGatherList.c)
 *     ndisMIsr @ 0x1C0060700 (ndisMIsr.c)
 *     ?NdisMTcpOffloadReceiveIndicate@@YAHPEAXPEAU_NET_BUFFER_LIST@@HPEAK@Z @ 0x1C00646E0 (-NdisMTcpOffloadReceiveIndicate@@YAHPEAXPEAU_NET_BUFFER_LIST@@HPEAK@Z.c)
 *     NdisOffloadTcpSend @ 0x1C0064A90 (NdisOffloadTcpSend.c)
 * Callees:
 *     ?ndisPcwGetCpu@@YAKPEAUNDIS_PCW_CONTEXT@@@Z @ 0x1C0010D5C (-ndisPcwGetCpu@@YAKPEAUNDIS_PCW_CONTEXT@@@Z.c)
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
