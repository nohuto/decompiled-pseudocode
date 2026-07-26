/*
 * XREFs of ndisDereferenceMiniport @ 0x1C000B190
 * Callers:
 *     ?ndisNicActiveHandleCleanup@@YAXPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@@Z @ 0x1C0004A28 (-ndisNicActiveHandleCleanup@@YAXPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@@Z.c)
 *     ?ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@@EW4_NDIS_MP_REFTAG@@PEAJPEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0004BA0 (-ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@.c)
 *     ndisCreateHandler @ 0x1C0004CC4 (ndisCreateHandler.c)
 *     ndisQueueRequestWorkItem @ 0x1C000A40C (ndisQueueRequestWorkItem.c)
 *     ndisQueuedMiniportDpcWorkItem @ 0x1C000A800 (ndisQueuedMiniportDpcWorkItem.c)
 *     ndisCloseHandler @ 0x1C000B2C0 (ndisCloseHandler.c)
 *     ndisMWakeUpDpcX @ 0x1C000F8C0 (ndisMWakeUpDpcX.c)
 *     ndisSignalD0CompleteWorkItem @ 0x1C0012140 (ndisSignalD0CompleteWorkItem.c)
 *     ndisCompleteWaitWake @ 0x1C001316C (ndisCompleteWaitWake.c)
 *     NdisFreeIoWorkItem @ 0x1C0013510 (NdisFreeIoWorkItem.c)
 *     ?ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z @ 0x1C00155EC (-ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z.c)
 *     ndisIndicateStatusInternal @ 0x1C001CD04 (ndisIndicateStatusInternal.c)
 *     ndisCancelMediaDisconnectTimer @ 0x1C001EBA8 (ndisCancelMediaDisconnectTimer.c)
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C001EBD4 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     NdisAllocateIoWorkItem @ 0x1C00245F0 (NdisAllocateIoWorkItem.c)
 *     ndisMOidRequestCompleteInternal @ 0x1C0025A0C (ndisMOidRequestCompleteInternal.c)
 *     ndisAllocateReceiveQueue @ 0x1C0038570 (ndisAllocateReceiveQueue.c)
 *     ndisDereferenceReceiveFilter @ 0x1C0038B2C (ndisDereferenceReceiveFilter.c)
 *     ndisDereferenceReceiveQueue @ 0x1C0038D00 (ndisDereferenceReceiveQueue.c)
 *     ndisSetReceiveFilter @ 0x1C003A288 (ndisSetReceiveFilter.c)
 *     NdisMAllocatePort @ 0x1C003A9A0 (NdisMAllocatePort.c)
 *     NdisMFreePort @ 0x1C003ACF0 (NdisMFreePort.c)
 *     ndisDoDirectOidRequest @ 0x1C0041654 (ndisDoDirectOidRequest.c)
 *     ndisProcessRequestAsync @ 0x1C0044560 (ndisProcessRequestAsync.c)
 *     ndisDmaAddCpuNotify @ 0x1C00475D8 (ndisDmaAddCpuNotify.c)
 *     ndisCsResiliencyCallback @ 0x1C004A730 (ndisCsResiliencyCallback.c)
 *     ndisEnableWppTracingCallback @ 0x1C004A818 (ndisEnableWppTracingCallback.c)
 *     ndisWnfPdcCallback @ 0x1C004B250 (ndisWnfPdcCallback.c)
 *     NdisClOpenAddressFamilyEx @ 0x1C004C4B0 (NdisClOpenAddressFamilyEx.c)
 *     NdisMCmRegisterAddressFamilyEx @ 0x1C004CE50 (NdisMCmRegisterAddressFamilyEx.c)
 *     NdisEnumerateFilterModules @ 0x1C0052790 (NdisEnumerateFilterModules.c)
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C0055B08 (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C00568B4 (ndisOpenAdapterLegacyProtocol.c)
 *     NdisMResetMiniport @ 0x1C00586E0 (NdisMResetMiniport.c)
 *     ndisQueuedResetMiniport @ 0x1C005AEF0 (ndisQueuedResetMiniport.c)
 *     ndisMQueuedAllocateSharedHandler @ 0x1C005BB60 (ndisMQueuedAllocateSharedHandler.c)
 *     ndis5QueuedMiniportDpcWorkItem @ 0x1C005C1B0 (ndis5QueuedMiniportDpcWorkItem.c)
 *     NdisMReenumerateFailedAdapter @ 0x1C005E600 (NdisMReenumerateFailedAdapter.c)
 *     ndisMediaDisconnectTimeout @ 0x1C005F370 (ndisMediaDisconnectTimeout.c)
 *     ndisNdkPcwAddCounter @ 0x1C0060AAC (ndisNdkPcwAddCounter.c)
 *     ndisNdkPcwEnumerateInstances @ 0x1C0060C00 (ndisNdkPcwEnumerateInstances.c)
 *     ndisPeriodicReceivesWorker @ 0x1C0062D40 (ndisPeriodicReceivesWorker.c)
 *     ?ndisPcwCollectPhysicalData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C00635B4 (-ndisPcwCollectPhysicalData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ?ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C0063698 (-ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ?ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x1C00637B4 (-ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_.c)
 *     ndisSriovInterfaceDereference @ 0x1C0065B50 (ndisSriovInterfaceDereference.c)
 *     NdisMIdleNotificationCompleteEx @ 0x1C0066100 (NdisMIdleNotificationCompleteEx.c)
 *     ndisSSIdleTimerWorkItem @ 0x1C00675B0 (ndisSSIdleTimerWorkItem.c)
 *     ndisSubmitIdleRequest @ 0x1C0068170 (ndisSubmitIdleRequest.c)
 *     ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x1C0068A9C (-ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z.c)
 *     ?ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0068C20 (-ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0068CD0 (-ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x1C0069480 (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0069F94 (-ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisTempRefTimerDpc@@YAXPEAX000@Z @ 0x1C006A040 (-ndisTempRefTimerDpc@@YAXPEAX000@Z.c)
 *     ndisPnPIrpSurpriseRemovalInner @ 0x1C0098598 (ndisPnPIrpSurpriseRemovalInner.c)
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C0098740 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 *     ndisMHaltMiniport @ 0x1C0098F24 (ndisMHaltMiniport.c)
 *     ?ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z @ 0x1C00992D4 (-ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z.c)
 *     ndisWmiQuerySingleInstance @ 0x1C009F180 (ndisWmiQuerySingleInstance.c)
 *     ndisIfQueryBindingMiniportIfIndex @ 0x1C00A0D68 (ndisIfQueryBindingMiniportIfIndex.c)
 *     ?ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z @ 0x1C00A5ABC (-ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z.c)
 *     ndisInitModeTimeoutWorkItem @ 0x1C00A96D0 (ndisInitModeTimeoutWorkItem.c)
 *     ndisCancelInitModeTimeoutTimer @ 0x1C00A97A4 (ndisCancelInitModeTimeoutTimer.c)
 *     ndisPMAddRemoveAsync @ 0x1C00C3D20 (ndisPMAddRemoveAsync.c)
 *     ndisPMRejectAsync @ 0x1C00C3E00 (ndisPMRejectAsync.c)
 *     ndisQueuedUpdatePMCapabilities @ 0x1C00C4500 (ndisQueuedUpdatePMCapabilities.c)
 *     ?ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z @ 0x1C00C63D0 (-ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z.c)
 *     ndisHandleBindNotification @ 0x1C00C6B0C (ndisHandleBindNotification.c)
 *     ndisQueuedStatusUnbindAdapter @ 0x1C00C9C40 (ndisQueuedStatusUnbindAdapter.c)
 *     ?ndisMQueuedPromoteMiniport@@YAXPEAX@Z @ 0x1C00CAD90 (-ndisMQueuedPromoteMiniport@@YAXPEAX@Z.c)
 *     ?ndisMUpdateInterfaceWorker@@YAXPEAX@Z @ 0x1C00CAF10 (-ndisMUpdateInterfaceWorker@@YAXPEAX@Z.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x1C00CC430 (NdisIMDeInitializeDeviceInstance.c)
 *     ndisMQueuedFreeSharedHandler @ 0x1C00CD100 (ndisMQueuedFreeSharedHandler.c)
 *     ndisPnPIrpStopDevice @ 0x1C00CE52C (ndisPnPIrpStopDevice.c)
 *     ndisQueuedReenumerateFailedAdapter @ 0x1C00CE6E0 (ndisQueuedReenumerateFailedAdapter.c)
 *     ndisMediaDisconnectWorker @ 0x1C00CE7D0 (ndisMediaDisconnectWorker.c)
 *     ndisPowerIrpWorker @ 0x1C00CE960 (ndisPowerIrpWorker.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00CEB60 (ndisWmiChangeSingleInstance.c)
 *     ndisWmiExecuteMethod @ 0x1C00CF320 (ndisWmiExecuteMethod.c)
 *     ndisWmiQueryAllData @ 0x1C00CFBFC (ndisWmiQueryAllData.c)
 *     ndisNdkPcwMiniportCleanup @ 0x1C00D1594 (ndisNdkPcwMiniportCleanup.c)
 *     ndisNdkPcwRemoveCounter @ 0x1C00D1658 (ndisNdkPcwRemoveCounter.c)
 *     ?ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C00D1CD8 (-ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ndisOidPrePDCloseProvider @ 0x1C00DB3A0 (ndisOidPrePDCloseProvider.c)
 *     ndisOidPrePDOpenProvider @ 0x1C00DB6E0 (ndisOidPrePDOpenProvider.c)
 *     ndisHandlePnPRequest @ 0x1C00DF000 (ndisHandlePnPRequest.c)
 *     ndisDevicePowerOn @ 0x1C00DF3D0 (ndisDevicePowerOn.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00E0108 (ndisPnPIrpRemoveDevice.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00E0E20 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ndisMFinishClose @ 0x1C00E1498 (ndisMFinishClose.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00E1F18 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ndisReferenceMiniportByName @ 0x1C00E30F8 (ndisReferenceMiniportByName.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C00E3284 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 *     ndisMOpenAdapter @ 0x1C00E340C (ndisMOpenAdapter.c)
 *     NdisOpenAdapterEx @ 0x1C00E3930 (NdisOpenAdapterEx.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C00EBF10 (ndisHandleProtocolReconfigNotification.c)
 *     ndisUnprocessAllMiniports @ 0x1C00EC40C (ndisUnprocessAllMiniports.c)
 *     NdisClOpenAddressFamily @ 0x1C00EC750 (NdisClOpenAddressFamily.c)
 *     NdisMCmRegisterAddressFamily @ 0x1C00ECFB0 (NdisMCmRegisterAddressFamily.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00EFB2C (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     NdisCmOpenAddressFamilyComplete @ 0x1C00F1040 (NdisCmOpenAddressFamilyComplete.c)
 * Callees:
 *     ndisDereferenceWithTag @ 0x1C000B124 (ndisDereferenceWithTag.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 */

void __fastcall ndisDereferenceMiniport(__int64 a1, unsigned __int8 a2)
{
  KIRQL v4; // al
  ULONG_PTR v5; // rcx
  KIRQL v6; // bp
  bool v7; // si
  struct _KEVENT *v8; // rcx

  if ( (unsigned __int8)byte_1C008371B >= 4u )
    WPP_SF_q(25LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, a1);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 4496));
  v5 = *(_QWORD *)(a1 + 4952);
  v6 = v4;
  if ( v5 )
    ndisDereferenceWithTag(v5, a2);
  v7 = --*(_DWORD *)(a1 + 4504) == 0;
  if ( (unsigned __int8)byte_1C008371B >= 4u )
    WPP_SF_qD(14LL, &WPP_16c28ebb9fa84dacc642b00af20fc2f4_Traceguids, a1, *(unsigned int *)(a1 + 4504));
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 4496), v6);
  if ( v7 )
  {
    v8 = *(struct _KEVENT **)(a1 + 1608);
    if ( v8 )
      KeSetEvent(v8, 0, 0);
  }
  if ( (unsigned __int8)byte_1C008371B >= 4u )
    WPP_SF_q(26LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, a1);
}
