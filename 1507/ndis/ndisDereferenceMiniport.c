/*
 * XREFs of ndisDereferenceMiniport @ 0x1C0003280
 * Callers:
 *     ndisDoOidRequests @ 0x1C0002EF0 (ndisDoOidRequests.c)
 *     ndisCloseIrpHandler @ 0x1C0003150 (ndisCloseIrpHandler.c)
 *     ndisMWakeUpDpcX @ 0x1C0008120 (ndisMWakeUpDpcX.c)
 *     ndisInterruptDpc @ 0x1C0008260 (ndisInterruptDpc.c)
 *     ndisCreateHandler @ 0x1C00086B0 (ndisCreateHandler.c)
 *     ndisQueueRequestWorkItem @ 0x1C000895C (ndisQueueRequestWorkItem.c)
 *     ?ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@@EW4_NDIS_MP_REFTAG@@PEAJPEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0008DA0 (-ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@.c)
 *     ?ndisNicActiveHandleCleanup@@YAXPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@@Z @ 0x1C0008E18 (-ndisNicActiveHandleCleanup@@YAXPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@@Z.c)
 *     NdisFreeIoWorkItem @ 0x1C000F3B0 (NdisFreeIoWorkItem.c)
 *     ndisCompleteWaitWake @ 0x1C0010E6C (ndisCompleteWaitWake.c)
 *     ndisCancelMediaDisconnectTimer @ 0x1C001923C (ndisCancelMediaDisconnectTimer.c)
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C001CF98 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     NdisAllocateIoWorkItem @ 0x1C001F760 (NdisAllocateIoWorkItem.c)
 *     ndisAllocateReceiveQueue @ 0x1C003787C (ndisAllocateReceiveQueue.c)
 *     ndisDereferenceReceiveFilter @ 0x1C0037E38 (ndisDereferenceReceiveFilter.c)
 *     ndisDereferenceReceiveQueue @ 0x1C003800C (ndisDereferenceReceiveQueue.c)
 *     ndisSetReceiveFilter @ 0x1C0039558 (ndisSetReceiveFilter.c)
 *     NdisMAllocatePort @ 0x1C0039C60 (NdisMAllocatePort.c)
 *     NdisMFreePort @ 0x1C0039FB0 (NdisMFreePort.c)
 *     ndisDoDirectOidRequest @ 0x1C003FF54 (ndisDoDirectOidRequest.c)
 *     ndisMOidRequestCompleteInternal @ 0x1C0040E6C (ndisMOidRequestCompleteInternal.c)
 *     ndisProcessRequestAsync @ 0x1C0042FD0 (ndisProcessRequestAsync.c)
 *     ndisDmaAddCpuNotify @ 0x1C00462B8 (ndisDmaAddCpuNotify.c)
 *     ndisCsResiliencyCallback @ 0x1C0049E90 (ndisCsResiliencyCallback.c)
 *     ndisEnableWppTracingCallback @ 0x1C0049F78 (ndisEnableWppTracingCallback.c)
 *     ndisWnfPdcCallback @ 0x1C004A9B0 (ndisWnfPdcCallback.c)
 *     NdisClOpenAddressFamilyEx @ 0x1C004BC70 (NdisClOpenAddressFamilyEx.c)
 *     NdisMCmRegisterAddressFamilyEx @ 0x1C004C610 (NdisMCmRegisterAddressFamilyEx.c)
 *     NdisEnumerateFilterModules @ 0x1C00522E0 (NdisEnumerateFilterModules.c)
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C0055C68 (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C0056A24 (ndisOpenAdapterLegacyProtocol.c)
 *     ndisCloseHandler @ 0x1C00575C4 (ndisCloseHandler.c)
 *     NdisMResetMiniport @ 0x1C00589F0 (NdisMResetMiniport.c)
 *     ndisQueuedResetMiniport @ 0x1C005AF50 (ndisQueuedResetMiniport.c)
 *     ndisMQueuedAllocateSharedHandler @ 0x1C005BDF0 (ndisMQueuedAllocateSharedHandler.c)
 *     ?ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z @ 0x1C005C330 (-ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z.c)
 *     ndis5QueuedMiniportDpcWorkItem @ 0x1C005C730 (ndis5QueuedMiniportDpcWorkItem.c)
 *     NdisMReenumerateFailedAdapter @ 0x1C005ECA0 (NdisMReenumerateFailedAdapter.c)
 *     ndisMediaDisconnectTimeout @ 0x1C005FA00 (ndisMediaDisconnectTimeout.c)
 *     ndisSignalD0CompleteWorkItem @ 0x1C005FC50 (ndisSignalD0CompleteWorkItem.c)
 *     ndisNdkPcwAddCounter @ 0x1C00612EC (ndisNdkPcwAddCounter.c)
 *     ndisNdkPcwEnumerateInstances @ 0x1C0061440 (ndisNdkPcwEnumerateInstances.c)
 *     ndisPeriodicReceivesWorker @ 0x1C0064280 (ndisPeriodicReceivesWorker.c)
 *     ?ndisPcwCollectPhysicalData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C0064A24 (-ndisPcwCollectPhysicalData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ?ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C0064B08 (-ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ?ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x1C0064C3C (-ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_.c)
 *     ndisSriovInterfaceDereference @ 0x1C0066980 (ndisSriovInterfaceDereference.c)
 *     NdisMIdleNotificationCompleteEx @ 0x1C0067030 (NdisMIdleNotificationCompleteEx.c)
 *     ndisSSIdleTimerWorkItem @ 0x1C00684E0 (ndisSSIdleTimerWorkItem.c)
 *     ndisSubmitIdleRequest @ 0x1C00690A0 (ndisSubmitIdleRequest.c)
 *     ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x1C00699BC (-ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z.c)
 *     ?ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0069B30 (-ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0069BE0 (-ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x1C006A390 (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C006AE98 (-ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisTempRefTimerDpc@@YAXPEAX000@Z @ 0x1C006AF40 (-ndisTempRefTimerDpc@@YAXPEAX000@Z.c)
 *     ndisPnPIrpSurpriseRemovalInner @ 0x1C009A97C (ndisPnPIrpSurpriseRemovalInner.c)
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C009AB90 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 *     ndisMHaltMiniport @ 0x1C009BCB4 (ndisMHaltMiniport.c)
 *     ?ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z @ 0x1C009BFC4 (-ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z.c)
 *     ?ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z @ 0x1C00A0DDC (-ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z.c)
 *     ndisIfQueryBindingMiniportIfIndex @ 0x1C00A5BD4 (ndisIfQueryBindingMiniportIfIndex.c)
 *     ndisWmiQuerySingleInstance @ 0x1C00A8144 (ndisWmiQuerySingleInstance.c)
 *     ndisInitModeTimeoutWorkItem @ 0x1C00B0260 (ndisInitModeTimeoutWorkItem.c)
 *     ndisCancelInitModeTimeoutTimer @ 0x1C00B032C (ndisCancelInitModeTimeoutTimer.c)
 *     ndisHandleBindNotification @ 0x1C00B3678 (ndisHandleBindNotification.c)
 *     ndisPMAddRemoveAsync @ 0x1C00CA900 (ndisPMAddRemoveAsync.c)
 *     ndisPMRejectAsync @ 0x1C00CA9E0 (ndisPMRejectAsync.c)
 *     ndisQueuedUpdatePMCapabilities @ 0x1C00CB0E0 (ndisQueuedUpdatePMCapabilities.c)
 *     ?ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z @ 0x1C00CCFB0 (-ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z.c)
 *     ndisQueuedStatusUnbindAdapter @ 0x1C00D0830 (ndisQueuedStatusUnbindAdapter.c)
 *     ?ndisMQueuedPromoteMiniport@@YAXPEAX@Z @ 0x1C00D1A20 (-ndisMQueuedPromoteMiniport@@YAXPEAX@Z.c)
 *     ?ndisMUpdateInterfaceWorker@@YAXPEAX@Z @ 0x1C00D1BA0 (-ndisMUpdateInterfaceWorker@@YAXPEAX@Z.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x1C00D2CA0 (NdisIMDeInitializeDeviceInstance.c)
 *     ndisMQueuedFreeSharedHandler @ 0x1C00D3970 (ndisMQueuedFreeSharedHandler.c)
 *     ndisPnPIrpStopDevice @ 0x1C00D4D9C (ndisPnPIrpStopDevice.c)
 *     ndisQueuedReenumerateFailedAdapter @ 0x1C00D4F50 (ndisQueuedReenumerateFailedAdapter.c)
 *     ndisMediaDisconnectWorker @ 0x1C00D5010 (ndisMediaDisconnectWorker.c)
 *     ndisPowerIrpWorker @ 0x1C00D51A0 (ndisPowerIrpWorker.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00D53A0 (ndisWmiChangeSingleInstance.c)
 *     ndisWmiExecuteMethod @ 0x1C00D5B60 (ndisWmiExecuteMethod.c)
 *     ndisWmiQueryAllData @ 0x1C00D6580 (ndisWmiQueryAllData.c)
 *     ndisNdkPcwMiniportCleanup @ 0x1C00D7F24 (ndisNdkPcwMiniportCleanup.c)
 *     ndisNdkPcwRemoveCounter @ 0x1C00D7FE8 (ndisNdkPcwRemoveCounter.c)
 *     ?ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C00D85D8 (-ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ndisOidPrePDCloseProvider @ 0x1C00E1670 (ndisOidPrePDCloseProvider.c)
 *     ndisOidPrePDOpenProvider @ 0x1C00E19B0 (ndisOidPrePDOpenProvider.c)
 *     ndisHandlePnPRequest @ 0x1C00E5000 (ndisHandlePnPRequest.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00E5488 (ndisPnPIrpRemoveDevice.c)
 *     ndisDevicePowerOn @ 0x1C00E5640 (ndisDevicePowerOn.c)
 *     ndisMFinishClose @ 0x1C00E7034 (ndisMFinishClose.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C00E74C8 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 *     ndisMOpenAdapter @ 0x1C00E8200 (ndisMOpenAdapter.c)
 *     ndisReferenceMiniportByName @ 0x1C00E8720 (ndisReferenceMiniportByName.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00E88AC (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     NdisOpenAdapterEx @ 0x1C00E9A60 (NdisOpenAdapterEx.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00EB7AC (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C00EB930 (ndisHandleProtocolReconfigNotification.c)
 *     ndisUnprocessAllMiniports @ 0x1C00F2434 (ndisUnprocessAllMiniports.c)
 *     NdisClOpenAddressFamily @ 0x1C00F2770 (NdisClOpenAddressFamily.c)
 *     NdisMCmRegisterAddressFamily @ 0x1C00F2FD0 (NdisMCmRegisterAddressFamily.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00F59AC (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     NdisCmOpenAddressFamilyComplete @ 0x1C00F7040 (NdisCmOpenAddressFamilyComplete.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     ndisBugCheckEx @ 0x1C0049E68 (ndisBugCheckEx.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C0066D40 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C0066DDC (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall ndisDereferenceMiniport(__int64 a1, unsigned __int8 a2)
{
  KIRQL v4; // al
  ULONG_PTR v5; // r8
  KIRQL v6; // bp
  __int64 v7; // rax
  unsigned __int8 v8; // r9
  unsigned __int8 v9; // dl
  bool v10; // di
  struct _KEVENT *v11; // rcx
  ULONG_PTR v12; // r9
  ULONG_PTR v13; // rdi
  unsigned int v14; // edx

  if ( (unsigned __int8)byte_1C008531B >= 4u )
    WPP_SF_q(25LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, a1);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 4496));
  v5 = *(_QWORD *)(a1 + 4952);
  v6 = v4;
  if ( v5 )
  {
    if ( a2 == 0xFF )
    {
      *(_BYTE *)v5 &= ~2u;
    }
    else if ( *(_BYTE *)(v5 + 1) )
    {
      if ( *(_BYTE *)(v5 + 1) == 1 )
      {
        v12 = a2;
        v13 = v5 + ((unsigned __int64)a2 << 6);
        v14 = *(_DWORD *)(v13 + 64);
        if ( v14 >> 17 < 0x3FFE && (unsigned __int16)v14 >> 1 == (v14 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v13 + 8));
          *(_DWORD *)(v13 + 64) &= 0x10001u;
        }
        else
        {
          if ( (v14 & 0xFFFE) == 0 && (v14 & 1) == 0 )
            ndisBugCheckEx(0x1EuLL, 0LL, v5, v12);
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v13 + 8), 0);
        }
      }
    }
    else
    {
      v7 = *(_QWORD *)(v5 + 8);
      if ( v7 && (v8 = *(_BYTE *)(v5 + 3), v9 = 0, v8) )
      {
        while ( *(_BYTE *)(v7 + 2LL * v9) != a2 || !*(_BYTE *)(v7 + 2LL * v9 + 1) )
        {
          if ( ++v9 >= v8 )
            goto LABEL_10;
        }
        --*(_BYTE *)(v7 + 2LL * v9 + 1);
      }
      else
      {
LABEL_10:
        if ( !_bittestandreset((signed __int32 *)(v5 + 16), a2) )
          ndisBugCheckEx(0x1EuLL, 0LL, v5, a2);
      }
    }
  }
  v10 = --*(_DWORD *)(a1 + 4504) == 0;
  if ( (unsigned __int8)byte_1C008531B >= 4u )
    WPP_SF_qD(14LL, &WPP_99d55c594fb658073ac0709936c97fa5_Traceguids, a1, *(unsigned int *)(a1 + 4504));
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 4496), v6);
  if ( v10 )
  {
    v11 = *(struct _KEVENT **)(a1 + 1608);
    if ( v11 )
      KeSetEvent(v11, 0, 0);
  }
  if ( (unsigned __int8)byte_1C008531B >= 4u )
    WPP_SF_q(26LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, a1);
}
