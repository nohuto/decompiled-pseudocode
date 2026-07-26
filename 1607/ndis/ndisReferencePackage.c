/*
 * XREFs of ndisReferencePackage @ 0x1C009B308
 * Callers:
 *     ndisQuerySetMiniportEx @ 0x1C000A5C0 (ndisQuerySetMiniportEx.c)
 *     ndisCloseHandler @ 0x1C000CC68 (ndisCloseHandler.c)
 *     ndisCreateHandler @ 0x1C000CEDC (ndisCreateHandler.c)
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C0012EAC (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     ndisIsMiniportStarted @ 0x1C00180A4 (ndisIsMiniportStarted.c)
 *     ndisQueueFilterOnDriver @ 0x1C001AE14 (ndisQueueFilterOnDriver.c)
 *     NdisRegisterDeviceEx @ 0x1C001EA40 (NdisRegisterDeviceEx.c)
 *     NdisClOpenAddressFamilyEx @ 0x1C0050F10 (NdisClOpenAddressFamilyEx.c)
 *     NdisCmRegisterAddressFamilyEx @ 0x1C00515A0 (NdisCmRegisterAddressFamilyEx.c)
 *     NdisMCmRegisterAddressFamilyEx @ 0x1C00518B0 (NdisMCmRegisterAddressFamilyEx.c)
 *     NdisEnumerateFilterModules @ 0x1C0057280 (NdisEnumerateFilterModules.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005B088 (ndisOpenAdapterLegacyProtocol.c)
 *     NdisDeregisterDeviceEx @ 0x1C005F070 (NdisDeregisterDeviceEx.c)
 *     NdisMDeregisterDevice @ 0x1C005F370 (NdisMDeregisterDevice.c)
 *     ndisDeviceInternalDispatch @ 0x1C0062AD8 (ndisDeviceInternalDispatch.c)
 *     ndisDeviceControlHandler @ 0x1C009B358 (ndisDeviceControlHandler.c)
 *     ndisSetPower @ 0x1C009C35C (ndisSetPower.c)
 *     ndisPnPDispatch @ 0x1C009DAC0 (ndisPnPDispatch.c)
 *     ndisStartDeviceWorkItem @ 0x1C009E9F0 (ndisStartDeviceWorkItem.c)
 *     NdisRegisterProtocolDriver @ 0x1C00A1E20 (NdisRegisterProtocolDriver.c)
 *     ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00A2D98 (-ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INF.c)
 *     ?ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00A3D18 (-ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00A48A8 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 *     ndisPnPNotifyBindingUnlocked @ 0x1C00A8448 (ndisPnPNotifyBindingUnlocked.c)
 *     ndisWmiQuerySingleInstance @ 0x1C00A9BF4 (ndisWmiQuerySingleInstance.c)
 *     ?ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00A9E94 (-ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     ndisInitializeAdapter @ 0x1C00AC974 (ndisInitializeAdapter.c)
 *     ndisInitModeTimeoutWorkItem @ 0x1C00AD360 (ndisInitModeTimeoutWorkItem.c)
 *     ndisDispatchRequest @ 0x1C00AD4B0 (ndisDispatchRequest.c)
 *     NdisIMInitializeDeviceInstanceEx @ 0x1C00CCBA0 (NdisIMInitializeDeviceInstanceEx.c)
 *     NdisRegisterProtocol @ 0x1C00CF100 (NdisRegisterProtocol.c)
 *     NdisWdfPnpPowerEventHandler @ 0x1C00D29F0 (NdisWdfPnpPowerEventHandler.c)
 *     ndisPnPHandlePagingIrp @ 0x1C00D4060 (ndisPnPHandlePagingIrp.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00D4BB0 (ndisWmiChangeSingleInstance.c)
 *     ndisWmiExecuteMethod @ 0x1C00D5370 (ndisWmiExecuteMethod.c)
 *     ndisWmiQueryAllData @ 0x1C00D5C4C (ndisWmiQueryAllData.c)
 *     ndisDevicePowerOn @ 0x1C00E5000 (ndisDevicePowerOn.c)
 *     ndisQueryPower @ 0x1C00E5B80 (ndisQueryPower.c)
 *     ndisDevicePowerDown @ 0x1C00E5F90 (ndisDevicePowerDown.c)
 *     ndisPmHaltMiniport @ 0x1C00E69B8 (ndisPmHaltMiniport.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00E6AE0 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ndisDeQueueMiniportOnDriver @ 0x1C00E6D5C (ndisDeQueueMiniportOnDriver.c)
 *     ndisPnPRemoveDevice @ 0x1C00E6FA8 (ndisPnPRemoveDevice.c)
 *     NdisOpenAdapterEx @ 0x1C00E75A0 (NdisOpenAdapterEx.c)
 *     NdisMSetAttributesEx @ 0x1C00E84E0 (NdisMSetAttributesEx.c)
 *     ndisAddDevice @ 0x1C00E88C0 (ndisAddDevice.c)
 *     ndisPnPNotifyAllTransports @ 0x1C00E90B8 (ndisPnPNotifyAllTransports.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00E93B4 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ndisNotifyMiniports @ 0x1C00EB1F0 (ndisNotifyMiniports.c)
 *     ndisQueueMiniportOnDriver @ 0x1C00EB27C (ndisQueueMiniportOnDriver.c)
 *     ndisMCommonHaltMiniport @ 0x1C00EB5E4 (ndisMCommonHaltMiniport.c)
 *     NdisCloseAdapter @ 0x1C00EC1F0 (NdisCloseAdapter.c)
 *     ndisMKillOpen @ 0x1C00EC300 (ndisMKillOpen.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00EC4E4 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     NdisMRegisterInterruptEx @ 0x1C00EC840 (NdisMRegisterInterruptEx.c)
 *     ndisFindRootDevice @ 0x1C00F277C (ndisFindRootDevice.c)
 *     ndisMUnload @ 0x1C00F3290 (ndisMUnload.c)
 *     NdisClOpenAddressFamily @ 0x1C00F3440 (NdisClOpenAddressFamily.c)
 *     NdisCmRegisterAddressFamily @ 0x1C00F3980 (NdisCmRegisterAddressFamily.c)
 *     NdisMCmRegisterAddressFamily @ 0x1C00F3CA0 (NdisMCmRegisterAddressFamily.c)
 *     ndisNotifyAfRegistration @ 0x1C00F4100 (ndisNotifyAfRegistration.c)
 *     NdisDeregisterProtocol @ 0x1C00F41E0 (NdisDeregisterProtocol.c)
 *     NdisMAllocateMapRegisters @ 0x1C00F45F0 (NdisMAllocateMapRegisters.c)
 *     NdisMDeregisterDmaChannel @ 0x1C00F4B50 (NdisMDeregisterDmaChannel.c)
 *     NdisMFreeMapRegisters @ 0x1C00F4C10 (NdisMFreeMapRegisters.c)
 *     NdisMRegisterDevice @ 0x1C00F4D50 (NdisMRegisterDevice.c)
 *     NdisMRegisterDmaChannel @ 0x1C00F5000 (NdisMRegisterDmaChannel.c)
 *     ndisFindMiniportOnGlobalList @ 0x1C00F5300 (ndisFindMiniportOnGlobalList.c)
 *     ndisMFinishQueuedPendingOpen @ 0x1C00F5440 (ndisMFinishQueuedPendingOpen.c)
 *     ndisRegisterMiniportDriver @ 0x1C00F5618 (ndisRegisterMiniportDriver.c)
 *     NdisMDeregisterInterruptEx @ 0x1C00F5C70 (NdisMDeregisterInterruptEx.c)
 * Callees:
 *     NdisMSleep @ 0x1C00B1AA0 (NdisMSleep.c)
 */

void __fastcall ndisReferencePackage(__int64 a1)
{
  signed __int32 v2; // eax
  PVOID v3; // rax

  v2 = _InterlockedIncrement((volatile signed __int32 *)a1);
  if ( !*(_QWORD *)(a1 + 16) )
  {
    if ( v2 == 1 )
    {
      v3 = MmLockPagableDataSection(*(PVOID *)(a1 + 8));
      *(_QWORD *)(a1 + 16) = v3;
      MmUnlockPagableImageSection(v3);
    }
    else
    {
      do
        NdisMSleep(0x32u);
      while ( !*(_QWORD *)(a1 + 16) );
    }
  }
  MmLockPagableSectionByHandle(*(PVOID *)(a1 + 16));
}
