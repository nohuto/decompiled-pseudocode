/*
 * XREFs of ndisReferenceMiniport @ 0x1C000D160
 * Callers:
 *     ndisCreateHandler @ 0x1C000CEDC (ndisCreateHandler.c)
 *     ndisScheduleD0CompleteSignalWorkItem @ 0x1C001165C (ndisScheduleD0CompleteSignalWorkItem.c)
 *     ndisReferenceMiniportByGuid @ 0x1C0011BA8 (ndisReferenceMiniportByGuid.c)
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0014890 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ndisReferenceMiniportByHandle @ 0x1C001791C (ndisReferenceMiniportByHandle.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0018568 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisSetMediaDisconnectTimer @ 0x1C0020040 (ndisSetMediaDisconnectTimer.c)
 *     NdisAllocateIoWorkItem @ 0x1C00202A0 (NdisAllocateIoWorkItem.c)
 *     ndisCreatePMRejectWorkItem @ 0x1C00254C4 (ndisCreatePMRejectWorkItem.c)
 *     ndisAllocateReceiveQueue @ 0x1C003C4EC (ndisAllocateReceiveQueue.c)
 *     ndisSetReceiveFilter @ 0x1C003E208 (ndisSetReceiveFilter.c)
 *     NdisMAllocatePort @ 0x1C003E920 (NdisMAllocatePort.c)
 *     ndisDoDirectOidRequest @ 0x1C0045154 (ndisDoDirectOidRequest.c)
 *     ndisQueueRequestOnTopAsync @ 0x1C0047F94 (ndisQueueRequestOnTopAsync.c)
 *     ndisQueueRestoreRequestsOnTop @ 0x1C0048090 (ndisQueueRestoreRequestsOnTop.c)
 *     ndisCreatePMAddRemoveWorkItem @ 0x1C0048E0C (ndisCreatePMAddRemoveWorkItem.c)
 *     ndisCreatePMPdcTaskClientWorkItem @ 0x1C0048EBC (ndisCreatePMPdcTaskClientWorkItem.c)
 *     ndisSetPdcTaskClientExpiryTimer @ 0x1C004AD9C (ndisSetPdcTaskClientExpiryTimer.c)
 *     ndisDmaAddCpuNotify @ 0x1C004BBC8 (ndisDmaAddCpuNotify.c)
 *     ndisCsResiliencyCallback @ 0x1C004F0C0 (ndisCsResiliencyCallback.c)
 *     ndisEnableWppTracingCallback @ 0x1C004F1A8 (ndisEnableWppTracingCallback.c)
 *     ndisMapOpenByName @ 0x1C004F430 (ndisMapOpenByName.c)
 *     ndisWnfPdcCallback @ 0x1C004FC70 (ndisWnfPdcCallback.c)
 *     NdisMCmRegisterAddressFamilyEx @ 0x1C00518B0 (NdisMCmRegisterAddressFamilyEx.c)
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C005A2F4 (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     NdisMResetMiniport @ 0x1C005CD30 (NdisMResetMiniport.c)
 *     NdisMAllocateSharedMemoryAsync @ 0x1C005F220 (NdisMAllocateSharedMemoryAsync.c)
 *     NdisMReenumerateFailedAdapter @ 0x1C0062600 (NdisMReenumerateFailedAdapter.c)
 *     ndisNdkPcwAddCounter @ 0x1C0064DEC (ndisNdkPcwAddCounter.c)
 *     ndisNdkPcwEnumerateInstances @ 0x1C0064F40 (ndisNdkPcwEnumerateInstances.c)
 *     ?ndisPcwCollectPhysicalData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C0067974 (-ndisPcwCollectPhysicalData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ?ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C0067A58 (-ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ?ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x1C0067B74 (-ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_.c)
 *     ndisSSIdleTimerDpc @ 0x1C006BF40 (ndisSSIdleTimerDpc.c)
 *     ndisSubmitIdleRequest @ 0x1C006CB8C (ndisSubmitIdleRequest.c)
 *     ?ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C006D3AC (-ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C006E760 (-ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@.c)
 *     ?ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C006EA94 (-ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z @ 0x1C00A41FC (-ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z.c)
 *     ndisMStartInitMode @ 0x1C00AC400 (ndisMStartInitMode.c)
 *     ndisRequestWaitWake @ 0x1C00B2CB4 (ndisRequestWaitWake.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x1C00D2120 (NdisIMDeInitializeDeviceInstance.c)
 *     ndisPnPIrpStopDevice @ 0x1C00D44EC (ndisPnPIrpStopDevice.c)
 *     ?ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C00D7CC8 (-ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ndisOidPrePDOpenProvider @ 0x1C00E15A0 (ndisOidPrePDOpenProvider.c)
 *     ndisMOpenAdapter @ 0x1C00E7CD0 (ndisMOpenAdapter.c)
 *     ndisReferenceMiniportByName @ 0x1C00E81F0 (ndisReferenceMiniportByName.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00E93B4 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ndisReferenceNextUnprocessedMiniport @ 0x1C00F3040 (ndisReferenceNextUnprocessedMiniport.c)
 *     NdisMCmRegisterAddressFamily @ 0x1C00F3CA0 (NdisMCmRegisterAddressFamily.c)
 * Callees:
 *     ?ndisReferenceWithTagCompact@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C000D200 (-ndisReferenceWithTagCompact@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006A490 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

char __fastcall ndisReferenceMiniport(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rdi
  char v5; // bl
  KIRQL v6; // r14
  struct _NDIS_REFCOUNT_BLOCK *v7; // rcx

  v2 = a1 + 4496;
  v5 = 1;
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 4496));
  if ( *(_BYTE *)(v2 + 12) )
    goto LABEL_10;
  v7 = *(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 4952);
  if ( v7 )
  {
    if ( v7->Type )
    {
      if ( v7->Type == 1 )
        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)&v7->8 + a2, 1u);
    }
    else
    {
      ndisReferenceWithTagCompact(v7, a2);
    }
  }
  if ( (*(_DWORD *)(v2 + 8))++ == -1 )
  {
    *(_DWORD *)(v2 + 8) = -1;
LABEL_10:
    v5 = 0;
  }
  if ( (unsigned __int8)byte_1C00895DB >= 4u )
    WPP_SF_qD(12LL, &WPP_8ce524521b613c0e10407cfbf52a0b71_Traceguids, a1, *(unsigned int *)(a1 + 4504));
  KeReleaseSpinLock((PKSPIN_LOCK)v2, v6);
  return v5;
}
