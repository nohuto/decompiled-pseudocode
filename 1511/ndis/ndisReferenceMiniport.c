/*
 * XREFs of ndisReferenceMiniport @ 0x1C0004C2C
 * Callers:
 *     ndisCreatePMRejectWorkItem @ 0x1C00049E8 (ndisCreatePMRejectWorkItem.c)
 *     ndisCreateHandler @ 0x1C0004CC4 (ndisCreateHandler.c)
 *     ndisScheduleD0CompleteSignalWorkItem @ 0x1C0012800 (ndisScheduleD0CompleteSignalWorkItem.c)
 *     ndisReferenceMiniportByGuid @ 0x1C0013D88 (ndisReferenceMiniportByGuid.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001B908 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisReferenceMiniportByHandle @ 0x1C001D878 (ndisReferenceMiniportByHandle.c)
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C001EBD4 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     NdisAllocateIoWorkItem @ 0x1C00245F0 (NdisAllocateIoWorkItem.c)
 *     ndisSetMediaDisconnectTimer @ 0x1C0024B88 (ndisSetMediaDisconnectTimer.c)
 *     ndisAllocateReceiveQueue @ 0x1C0038570 (ndisAllocateReceiveQueue.c)
 *     ndisSetReceiveFilter @ 0x1C003A288 (ndisSetReceiveFilter.c)
 *     NdisMAllocatePort @ 0x1C003A9A0 (NdisMAllocatePort.c)
 *     ndisDoDirectOidRequest @ 0x1C0041654 (ndisDoDirectOidRequest.c)
 *     ndisQueueRequestOnTopAsync @ 0x1C0044A54 (ndisQueueRequestOnTopAsync.c)
 *     ndisQueueRestoreRequestsOnTop @ 0x1C0044B50 (ndisQueueRestoreRequestsOnTop.c)
 *     ndisCreatePMAddRemoveWorkItem @ 0x1C0045898 (ndisCreatePMAddRemoveWorkItem.c)
 *     ndisDmaAddCpuNotify @ 0x1C00475D8 (ndisDmaAddCpuNotify.c)
 *     ndisCsResiliencyCallback @ 0x1C004A730 (ndisCsResiliencyCallback.c)
 *     ndisEnableWppTracingCallback @ 0x1C004A818 (ndisEnableWppTracingCallback.c)
 *     ndisMapOpenByName @ 0x1C004AA14 (ndisMapOpenByName.c)
 *     ndisWnfPdcCallback @ 0x1C004B250 (ndisWnfPdcCallback.c)
 *     NdisMCmRegisterAddressFamilyEx @ 0x1C004CE50 (NdisMCmRegisterAddressFamilyEx.c)
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C0055B08 (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     NdisMResetMiniport @ 0x1C00586E0 (NdisMResetMiniport.c)
 *     NdisMAllocateSharedMemoryAsync @ 0x1C005B3E0 (NdisMAllocateSharedMemoryAsync.c)
 *     NdisMReenumerateFailedAdapter @ 0x1C005E600 (NdisMReenumerateFailedAdapter.c)
 *     ndisNdkPcwAddCounter @ 0x1C0060AAC (ndisNdkPcwAddCounter.c)
 *     ndisNdkPcwEnumerateInstances @ 0x1C0060C00 (ndisNdkPcwEnumerateInstances.c)
 *     ?ndisPcwCollectPhysicalData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C00635B4 (-ndisPcwCollectPhysicalData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ?ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C0063698 (-ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ?ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x1C00637B4 (-ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_.c)
 *     ndisSSIdleTimerDpc @ 0x1C00674E0 (ndisSSIdleTimerDpc.c)
 *     ndisSubmitIdleRequest @ 0x1C0068170 (ndisSubmitIdleRequest.c)
 *     ?ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0068970 (-ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0069C60 (-ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@.c)
 *     ?ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0069F94 (-ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z @ 0x1C00A5ABC (-ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z.c)
 *     ndisMStartInitMode @ 0x1C00AC5D0 (ndisMStartInitMode.c)
 *     ndisRequestWaitWake @ 0x1C00AC8D0 (ndisRequestWaitWake.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x1C00CC430 (NdisIMDeInitializeDeviceInstance.c)
 *     ndisPnPIrpStopDevice @ 0x1C00CE52C (ndisPnPIrpStopDevice.c)
 *     ?ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C00D1CD8 (-ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ndisOidPrePDOpenProvider @ 0x1C00DB6E0 (ndisOidPrePDOpenProvider.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00E1F18 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ndisReferenceMiniportByName @ 0x1C00E30F8 (ndisReferenceMiniportByName.c)
 *     ndisMOpenAdapter @ 0x1C00E340C (ndisMOpenAdapter.c)
 *     ndisReferenceNextUnprocessedMiniport @ 0x1C00EC348 (ndisReferenceNextUnprocessedMiniport.c)
 *     NdisMCmRegisterAddressFamily @ 0x1C00ECFB0 (NdisMCmRegisterAddressFamily.c)
 * Callees:
 *     ndisReferenceWithTag @ 0x1C0007F00 (ndisReferenceWithTag.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 */

char __fastcall ndisReferenceMiniport(__int64 a1)
{
  __int64 v1; // rbx
  char v3; // di
  KIRQL v4; // r14
  struct _NDIS_REFCOUNT_BLOCK *v5; // rcx

  v1 = a1 + 4496;
  v3 = 1;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 4496));
  if ( *(_BYTE *)(v1 + 12) )
    goto LABEL_9;
  v5 = *(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 4952);
  if ( v5 )
    ndisReferenceWithTag(v5);
  if ( (*(_DWORD *)(v1 + 8))++ == -1 )
  {
    *(_DWORD *)(v1 + 8) = -1;
LABEL_9:
    v3 = 0;
  }
  if ( (unsigned __int8)byte_1C008371B >= 4u )
    WPP_SF_qD(12LL, &WPP_16c28ebb9fa84dacc642b00af20fc2f4_Traceguids, a1, *(unsigned int *)(a1 + 4504));
  KeReleaseSpinLock((PKSPIN_LOCK)v1, v4);
  return v3;
}
