/*
 * XREFs of ndisDereferenceMiniport @ 0x1C000CD90
 * Callers:
 *     ndisInterruptDpc @ 0x1C0004D50 (ndisInterruptDpc.c)
 *     ndisCloseHandler @ 0x1C000CC68 (ndisCloseHandler.c)
 *     ndisCreateHandler @ 0x1C000CEDC (ndisCreateHandler.c)
 *     ndisMWakeUpDpcX @ 0x1C000F6E0 (ndisMWakeUpDpcX.c)
 *     ndisSignalD0CompleteWorkItem @ 0x1C0011030 (ndisSignalD0CompleteWorkItem.c)
 *     NdisFreeIoWorkItem @ 0x1C0012E70 (NdisFreeIoWorkItem.c)
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0014890 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ndisQueueRequestWorkItem @ 0x1C0016378 (ndisQueueRequestWorkItem.c)
 *     ndisIndicateStatusInternal @ 0x1C0016D10 (ndisIndicateStatusInternal.c)
 *     ndisCancelMediaDisconnectTimer @ 0x1C00183D8 (ndisCancelMediaDisconnectTimer.c)
 *     ?ndisNicActiveHandleCleanup@@YAXPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@@Z @ 0x1C001C0F0 (-ndisNicActiveHandleCleanup@@YAXPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@@Z.c)
 *     ?ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@@EW4_NDIS_MP_REFTAG@@PEAJPEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001C12C (-ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@.c)
 *     NdisAllocateIoWorkItem @ 0x1C00202A0 (NdisAllocateIoWorkItem.c)
 *     ndisQueuedMiniportDpcWorkItem @ 0x1C0021260 (ndisQueuedMiniportDpcWorkItem.c)
 *     ndisMOidRequestCompleteInternal @ 0x1C0025D70 (ndisMOidRequestCompleteInternal.c)
 *     ndisAllocateReceiveQueue @ 0x1C003C4EC (ndisAllocateReceiveQueue.c)
 *     ndisDereferenceReceiveFilter @ 0x1C003CAA8 (ndisDereferenceReceiveFilter.c)
 *     ndisDereferenceReceiveQueue @ 0x1C003CC7C (ndisDereferenceReceiveQueue.c)
 *     ndisSetReceiveFilter @ 0x1C003E208 (ndisSetReceiveFilter.c)
 *     NdisMAllocatePort @ 0x1C003E920 (NdisMAllocatePort.c)
 *     NdisMFreePort @ 0x1C003EC70 (NdisMFreePort.c)
 *     ndisDoDirectOidRequest @ 0x1C0045154 (ndisDoDirectOidRequest.c)
 *     ndisProcessRequestAsync @ 0x1C0047AA0 (ndisProcessRequestAsync.c)
 *     ndisPMPDCTaskClient @ 0x1C004A520 (ndisPMPDCTaskClient.c)
 *     ndisSetPdcTaskClientExpiryTimer @ 0x1C004AD9C (ndisSetPdcTaskClientExpiryTimer.c)
 *     ndisDmaAddCpuNotify @ 0x1C004BBC8 (ndisDmaAddCpuNotify.c)
 *     ndisCsResiliencyCallback @ 0x1C004F0C0 (ndisCsResiliencyCallback.c)
 *     ndisEnableWppTracingCallback @ 0x1C004F1A8 (ndisEnableWppTracingCallback.c)
 *     ndisWnfPdcCallback @ 0x1C004FC70 (ndisWnfPdcCallback.c)
 *     NdisClOpenAddressFamilyEx @ 0x1C0050F10 (NdisClOpenAddressFamilyEx.c)
 *     NdisMCmRegisterAddressFamilyEx @ 0x1C00518B0 (NdisMCmRegisterAddressFamilyEx.c)
 *     NdisEnumerateFilterModules @ 0x1C0057280 (NdisEnumerateFilterModules.c)
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C005A2F4 (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005B088 (ndisOpenAdapterLegacyProtocol.c)
 *     NdisMResetMiniport @ 0x1C005CD30 (NdisMResetMiniport.c)
 *     ndisQueuedResetMiniport @ 0x1C005ED90 (ndisQueuedResetMiniport.c)
 *     ndisMQueuedAllocateSharedHandler @ 0x1C005F960 (ndisMQueuedAllocateSharedHandler.c)
 *     ndis5QueuedMiniportDpcWorkItem @ 0x1C00601F0 (ndis5QueuedMiniportDpcWorkItem.c)
 *     NdisMReenumerateFailedAdapter @ 0x1C0062600 (NdisMReenumerateFailedAdapter.c)
 *     ndisCompleteWaitWake @ 0x1C0063200 (ndisCompleteWaitWake.c)
 *     ndisMediaDisconnectTimeout @ 0x1C00635E0 (ndisMediaDisconnectTimeout.c)
 *     ndisNdkPcwAddCounter @ 0x1C0064DEC (ndisNdkPcwAddCounter.c)
 *     ndisNdkPcwEnumerateInstances @ 0x1C0064F40 (ndisNdkPcwEnumerateInstances.c)
 *     ndisPeriodicReceivesWorker @ 0x1C0067110 (ndisPeriodicReceivesWorker.c)
 *     ?ndisPcwCollectPhysicalData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C0067974 (-ndisPcwCollectPhysicalData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ?ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C0067A58 (-ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ?ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x1C0067B74 (-ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_.c)
 *     ndisSriovInterfaceDereference @ 0x1C006A0F0 (ndisSriovInterfaceDereference.c)
 *     NdisMIdleNotificationCompleteEx @ 0x1C006B0F0 (NdisMIdleNotificationCompleteEx.c)
 *     ndisSSIdleTimerWorkItem @ 0x1C006C010 (ndisSSIdleTimerWorkItem.c)
 *     ndisSubmitIdleRequest @ 0x1C006CB8C (ndisSubmitIdleRequest.c)
 *     ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x1C006D4D8 (-ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z.c)
 *     ?ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C006D680 (-ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C006D730 (-ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x1C006DF84 (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C006EA94 (-ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisTempRefTimerDpc@@YAXPEAX000@Z @ 0x1C006EB40 (-ndisTempRefTimerDpc@@YAXPEAX000@Z.c)
 *     ?ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z @ 0x1C009CF00 (-ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z.c)
 *     ndisPnPIrpSurpriseRemovalInner @ 0x1C009E2D4 (ndisPnPIrpSurpriseRemovalInner.c)
 *     ndisMHaltMiniport @ 0x1C009E8F8 (ndisMHaltMiniport.c)
 *     ndisIfQueryBindingMiniportIfIndex @ 0x1C00A398C (ndisIfQueryBindingMiniportIfIndex.c)
 *     ?ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z @ 0x1C00A41FC (-ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z.c)
 *     ndisWmiQuerySingleInstance @ 0x1C00A9BF4 (ndisWmiQuerySingleInstance.c)
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C00AC7E0 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 *     ndisInitModeTimeoutWorkItem @ 0x1C00AD360 (ndisInitModeTimeoutWorkItem.c)
 *     ndisCancelInitModeTimeoutTimer @ 0x1C00AD438 (ndisCancelInitModeTimeoutTimer.c)
 *     ndisPMAddRemoveAsync @ 0x1C00C9640 (ndisPMAddRemoveAsync.c)
 *     ndisPMRejectAsync @ 0x1C00C9720 (ndisPMRejectAsync.c)
 *     ndisPdcTaskClientDisableTimeoutWorkItem @ 0x1C00C9840 (ndisPdcTaskClientDisableTimeoutWorkItem.c)
 *     ndisQueuedUpdatePMCapabilities @ 0x1C00C9EB0 (ndisQueuedUpdatePMCapabilities.c)
 *     ?ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z @ 0x1C00CBE70 (-ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z.c)
 *     ndisHandleBindNotification @ 0x1C00CC5AC (ndisHandleBindNotification.c)
 *     ndisQueuedStatusUnbindAdapter @ 0x1C00CF660 (ndisQueuedStatusUnbindAdapter.c)
 *     ?ndisMQueuedPromoteMiniport@@YAXPEAX@Z @ 0x1C00D07B0 (-ndisMQueuedPromoteMiniport@@YAXPEAX@Z.c)
 *     ?ndisMUpdateInterfaceWorker@@YAXPEAX@Z @ 0x1C00D0930 (-ndisMUpdateInterfaceWorker@@YAXPEAX@Z.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x1C00D2120 (NdisIMDeInitializeDeviceInstance.c)
 *     ndisMQueuedFreeSharedHandler @ 0x1C00D2E30 (ndisMQueuedFreeSharedHandler.c)
 *     ndisPnPIrpStopDevice @ 0x1C00D44EC (ndisPnPIrpStopDevice.c)
 *     ndisQueuedReenumerateFailedAdapter @ 0x1C00D46A0 (ndisQueuedReenumerateFailedAdapter.c)
 *     ndisMediaDisconnectWorker @ 0x1C00D4820 (ndisMediaDisconnectWorker.c)
 *     ndisPowerIrpWorker @ 0x1C00D49B0 (ndisPowerIrpWorker.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00D4BB0 (ndisWmiChangeSingleInstance.c)
 *     ndisWmiExecuteMethod @ 0x1C00D5370 (ndisWmiExecuteMethod.c)
 *     ndisWmiQueryAllData @ 0x1C00D5C4C (ndisWmiQueryAllData.c)
 *     ndisNdkPcwMiniportCleanup @ 0x1C00D75B8 (ndisNdkPcwMiniportCleanup.c)
 *     ndisNdkPcwRemoveCounter @ 0x1C00D7688 (ndisNdkPcwRemoveCounter.c)
 *     ?ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C00D7CC8 (-ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ndisOidPrePDCloseProvider @ 0x1C00E1260 (ndisOidPrePDCloseProvider.c)
 *     ndisOidPrePDOpenProvider @ 0x1C00E15A0 (ndisOidPrePDOpenProvider.c)
 *     ndisDevicePowerOn @ 0x1C00E5000 (ndisDevicePowerOn.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00E6AE0 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00E6DF8 (ndisPnPIrpRemoveDevice.c)
 *     NdisOpenAdapterEx @ 0x1C00E75A0 (NdisOpenAdapterEx.c)
 *     ndisMOpenAdapter @ 0x1C00E7CD0 (ndisMOpenAdapter.c)
 *     ndisReferenceMiniportByName @ 0x1C00E81F0 (ndisReferenceMiniportByName.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C00E8738 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00E93B4 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00EA1F0 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ndisMFinishClose @ 0x1C00EB318 (ndisMFinishClose.c)
 *     ndisHandlePnPRequest @ 0x1C00EBC18 (ndisHandlePnPRequest.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C00F2BA8 (ndisHandleProtocolReconfigNotification.c)
 *     ndisUnprocessAllMiniports @ 0x1C00F3104 (ndisUnprocessAllMiniports.c)
 *     NdisClOpenAddressFamily @ 0x1C00F3440 (NdisClOpenAddressFamily.c)
 *     NdisMCmRegisterAddressFamily @ 0x1C00F3CA0 (NdisMCmRegisterAddressFamily.c)
 *     NdisCmOpenAddressFamilyComplete @ 0x1C00F7040 (NdisCmOpenAddressFamilyComplete.c)
 * Callees:
 *     NdisDereferenceWithTag @ 0x1C000CE60 (NdisDereferenceWithTag.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 */

void __fastcall ndisDereferenceMiniport(__int64 a1)
{
  KIRQL v2; // al
  ULONG_PTR v3; // rcx
  KIRQL v4; // bp
  bool v5; // zf
  bool v6; // si
  struct _KEVENT *v7; // rcx

  if ( (unsigned __int8)byte_1C00895DB >= 4u )
    WPP_SF_q(25LL, &WPP_b02f9d78c57635ef76bd3f6eba54b479_Traceguids, a1);
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 4496));
  v3 = *(_QWORD *)(a1 + 4952);
  v4 = v2;
  if ( v3 )
    NdisDereferenceWithTag(v3);
  v5 = (*(_DWORD *)(a1 + 4504))-- == 1;
  v6 = v5;
  if ( (unsigned __int8)byte_1C00895DB >= 4u )
    WPP_SF_qD(14LL, &WPP_8ce524521b613c0e10407cfbf52a0b71_Traceguids, a1, *(unsigned int *)(a1 + 4504));
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 4496), v4);
  if ( v6 )
  {
    v7 = *(struct _KEVENT **)(a1 + 1608);
    if ( v7 )
      KeSetEvent(v7, 0, 0);
  }
  if ( (unsigned __int8)byte_1C00895DB >= 4u )
    WPP_SF_q(26LL, &WPP_b02f9d78c57635ef76bd3f6eba54b479_Traceguids, a1);
}
