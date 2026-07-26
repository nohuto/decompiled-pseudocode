/*
 * XREFs of ndisReferencePackage @ 0x1C0097740
 * Callers:
 *     ndisCloseIrpHandler @ 0x1C0003150 (ndisCloseIrpHandler.c)
 *     ndisQuerySetMiniportEx @ 0x1C00036D0 (ndisQuerySetMiniportEx.c)
 *     ndisCreateHandler @ 0x1C00086B0 (ndisCreateHandler.c)
 *     ndisIsMiniportStarted @ 0x1C0019940 (ndisIsMiniportStarted.c)
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C001C6DC (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     NdisRegisterDeviceEx @ 0x1C001E5C0 (NdisRegisterDeviceEx.c)
 *     ndisQueueFilterOnDriver @ 0x1C001F898 (ndisQueueFilterOnDriver.c)
 *     NdisClOpenAddressFamilyEx @ 0x1C004BC70 (NdisClOpenAddressFamilyEx.c)
 *     NdisCmRegisterAddressFamilyEx @ 0x1C004C300 (NdisCmRegisterAddressFamilyEx.c)
 *     NdisMCmRegisterAddressFamilyEx @ 0x1C004C610 (NdisMCmRegisterAddressFamilyEx.c)
 *     NdisEnumerateFilterModules @ 0x1C00522E0 (NdisEnumerateFilterModules.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C0056A24 (ndisOpenAdapterLegacyProtocol.c)
 *     ndisCloseHandler @ 0x1C00575C4 (ndisCloseHandler.c)
 *     NdisDeregisterDeviceEx @ 0x1C005B4C0 (NdisDeregisterDeviceEx.c)
 *     NdisMDeregisterDevice @ 0x1C005B7C0 (NdisMDeregisterDevice.c)
 *     ndisDeviceInternalDispatch @ 0x1C005F19C (ndisDeviceInternalDispatch.c)
 *     ndisSetPower @ 0x1C009B644 (ndisSetPower.c)
 *     ?ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00A04E4 (-ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     ?ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00A13F4 (-ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00A1520 (-ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INF.c)
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00A177C (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00A222C (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 *     ndisInitializeAdapter @ 0x1C00AC230 (ndisInitializeAdapter.c)
 *     ndisStartDeviceWorkItem @ 0x1C00AC570 (ndisStartDeviceWorkItem.c)
 *     NdisRegisterProtocolDriver @ 0x1C00ADE90 (NdisRegisterProtocolDriver.c)
 *     ndisInitModeTimeoutWorkItem @ 0x1C00B0260 (ndisInitModeTimeoutWorkItem.c)
 *     ndisPnPNotifyBindingUnlocked @ 0x1C00B05B4 (ndisPnPNotifyBindingUnlocked.c)
 *     NdisIMInitializeDeviceInstanceEx @ 0x1C00CDEB0 (NdisIMInitializeDeviceInstanceEx.c)
 *     NdisRegisterProtocol @ 0x1C00D02D0 (NdisRegisterProtocol.c)
 *     NdisWdfPnpPowerEventHandler @ 0x1C00D3570 (NdisWdfPnpPowerEventHandler.c)
 *     ndisPnPHandlePagingIrp @ 0x1C00D4910 (ndisPnPHandlePagingIrp.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00D53A0 (ndisWmiChangeSingleInstance.c)
 *     ndisWmiExecuteMethod @ 0x1C00D5B60 (ndisWmiExecuteMethod.c)
 *     ndisWmiQueryAllData @ 0x1C00D6580 (ndisWmiQueryAllData.c)
 *     ndisDevicePowerOn @ 0x1C00E5640 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C00E5B90 (ndisDevicePowerDown.c)
 *     ndisQueryPower @ 0x1C00E5E24 (ndisQueryPower.c)
 *     ndisPnPNotifyAllTransports @ 0x1C00E6058 (ndisPnPNotifyAllTransports.c)
 *     ndisPnPRemoveDevice @ 0x1C00E63F0 (ndisPnPRemoveDevice.c)
 *     ndisMCommonHaltMiniport @ 0x1C00E6698 (ndisMCommonHaltMiniport.c)
 *     ndisDeQueueMiniportOnDriver @ 0x1C00E6CD0 (ndisDeQueueMiniportOnDriver.c)
 *     NdisCloseAdapter @ 0x1C00E6D70 (NdisCloseAdapter.c)
 *     ndisMKillOpen @ 0x1C00E6E7C (ndisMKillOpen.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00E72A4 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ndisAddDevice @ 0x1C00E7650 (ndisAddDevice.c)
 *     NdisMSetAttributesEx @ 0x1C00E7E60 (NdisMSetAttributesEx.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00E88AC (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     NdisOpenAdapterEx @ 0x1C00E9A60 (NdisOpenAdapterEx.c)
 *     ndisNotifyMiniports @ 0x1C00EAC48 (ndisNotifyMiniports.c)
 *     ndisQueueMiniportOnDriver @ 0x1C00EACD4 (ndisQueueMiniportOnDriver.c)
 *     NdisMRegisterInterruptEx @ 0x1C00EAD70 (NdisMRegisterInterruptEx.c)
 *     ndisFindRootDevice @ 0x1C00F1F44 (ndisFindRootDevice.c)
 *     ndisMUnload @ 0x1C00F25C0 (ndisMUnload.c)
 *     NdisClOpenAddressFamily @ 0x1C00F2770 (NdisClOpenAddressFamily.c)
 *     NdisCmRegisterAddressFamily @ 0x1C00F2CB0 (NdisCmRegisterAddressFamily.c)
 *     NdisMCmRegisterAddressFamily @ 0x1C00F2FD0 (NdisMCmRegisterAddressFamily.c)
 *     ndisNotifyAfRegistration @ 0x1C00F3430 (ndisNotifyAfRegistration.c)
 *     NdisDeregisterProtocol @ 0x1C00F3570 (NdisDeregisterProtocol.c)
 *     NdisMAllocateMapRegisters @ 0x1C00F3800 (NdisMAllocateMapRegisters.c)
 *     NdisMDeregisterDmaChannel @ 0x1C00F3D60 (NdisMDeregisterDmaChannel.c)
 *     NdisMFreeMapRegisters @ 0x1C00F3E20 (NdisMFreeMapRegisters.c)
 *     NdisMRegisterDevice @ 0x1C00F3F60 (NdisMRegisterDevice.c)
 *     NdisMRegisterDmaChannel @ 0x1C00F4210 (NdisMRegisterDmaChannel.c)
 *     ndisFindMiniportOnGlobalList @ 0x1C00F4510 (ndisFindMiniportOnGlobalList.c)
 *     ndisMFinishQueuedPendingOpen @ 0x1C00F4650 (ndisMFinishQueuedPendingOpen.c)
 *     ndisRegisterMiniportDriver @ 0x1C00F4828 (ndisRegisterMiniportDriver.c)
 *     NdisMDeregisterInterruptEx @ 0x1C00F4E60 (NdisMDeregisterInterruptEx.c)
 *     ndisPmHaltMiniport @ 0x1C00F50D4 (ndisPmHaltMiniport.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00F59AC (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     NdisMSleep @ 0x1C00AFE00 (NdisMSleep.c)
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
