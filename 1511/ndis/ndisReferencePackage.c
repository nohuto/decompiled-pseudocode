/*
 * XREFs of ndisReferencePackage @ 0x1C00950DC
 * Callers:
 *     ndisCreateHandler @ 0x1C0004CC4 (ndisCreateHandler.c)
 *     ndisQuerySetMiniportEx @ 0x1C00059E8 (ndisQuerySetMiniportEx.c)
 *     ndisCloseHandler @ 0x1C000B2C0 (ndisCloseHandler.c)
 *     ndisQueueFilterOnDriver @ 0x1C0018834 (ndisQueueFilterOnDriver.c)
 *     ndisIsMiniportStarted @ 0x1C001BE98 (ndisIsMiniportStarted.c)
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C0021D94 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     NdisRegisterDeviceEx @ 0x1C0022EC0 (NdisRegisterDeviceEx.c)
 *     NdisClOpenAddressFamilyEx @ 0x1C004C4B0 (NdisClOpenAddressFamilyEx.c)
 *     NdisCmRegisterAddressFamilyEx @ 0x1C004CB40 (NdisCmRegisterAddressFamilyEx.c)
 *     NdisMCmRegisterAddressFamilyEx @ 0x1C004CE50 (NdisMCmRegisterAddressFamilyEx.c)
 *     NdisEnumerateFilterModules @ 0x1C0052790 (NdisEnumerateFilterModules.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C00568B4 (ndisOpenAdapterLegacyProtocol.c)
 *     NdisDeregisterDeviceEx @ 0x1C005B230 (NdisDeregisterDeviceEx.c)
 *     NdisMDeregisterDevice @ 0x1C005B530 (NdisMDeregisterDevice.c)
 *     ndisDeviceInternalDispatch @ 0x1C005EAFC (ndisDeviceInternalDispatch.c)
 *     ndisDeviceControlHandler @ 0x1C0093CE0 (ndisDeviceControlHandler.c)
 *     ndisDispatchRequest @ 0x1C0094420 (ndisDispatchRequest.c)
 *     ndisSetPower @ 0x1C0097B38 (ndisSetPower.c)
 *     ?ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00983AC (-ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C009EB00 (-ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     ndisWmiQuerySingleInstance @ 0x1C009F180 (ndisWmiQuerySingleInstance.c)
 *     ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00A1020 (-ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INF.c)
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00A2C8C (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 *     ndisPnPNotifyBindingUnlocked @ 0x1C00A55FC (ndisPnPNotifyBindingUnlocked.c)
 *     NdisRegisterProtocolDriver @ 0x1C00A70D0 (NdisRegisterProtocolDriver.c)
 *     ndisPnPDispatch @ 0x1C00A8060 (ndisPnPDispatch.c)
 *     ndisInitModeTimeoutWorkItem @ 0x1C00A96D0 (ndisInitModeTimeoutWorkItem.c)
 *     ndisStartDeviceWorkItem @ 0x1C00AA620 (ndisStartDeviceWorkItem.c)
 *     ndisInitializeAdapter @ 0x1C00AA8C4 (ndisInitializeAdapter.c)
 *     NdisIMInitializeDeviceInstanceEx @ 0x1C00C72C0 (NdisIMInitializeDeviceInstanceEx.c)
 *     NdisRegisterProtocol @ 0x1C00C96E0 (NdisRegisterProtocol.c)
 *     NdisWdfPnpPowerEventHandler @ 0x1C00CCD00 (NdisWdfPnpPowerEventHandler.c)
 *     ndisPnPHandlePagingIrp @ 0x1C00CE0A0 (ndisPnPHandlePagingIrp.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00CEB60 (ndisWmiChangeSingleInstance.c)
 *     ndisWmiExecuteMethod @ 0x1C00CF320 (ndisWmiExecuteMethod.c)
 *     ndisWmiQueryAllData @ 0x1C00CFBFC (ndisWmiQueryAllData.c)
 *     ndisDevicePowerOn @ 0x1C00DF3D0 (ndisDevicePowerOn.c)
 *     ndisQueryPower @ 0x1C00DF930 (ndisQueryPower.c)
 *     ndisDevicePowerDown @ 0x1C00DFD10 (ndisDevicePowerDown.c)
 *     ndisPnPRemoveDevice @ 0x1C00E02B8 (ndisPnPRemoveDevice.c)
 *     ndisMCommonHaltMiniport @ 0x1C00E0560 (ndisMCommonHaltMiniport.c)
 *     ndisPnPNotifyAllTransports @ 0x1C00E0B98 (ndisPnPNotifyAllTransports.c)
 *     ndisDeQueueMiniportOnDriver @ 0x1C00E0D84 (ndisDeQueueMiniportOnDriver.c)
 *     NdisCloseAdapter @ 0x1C00E0FB0 (NdisCloseAdapter.c)
 *     ndisMKillOpen @ 0x1C00E10BC (ndisMKillOpen.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00E1274 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ndisAddDevice @ 0x1C00E1708 (ndisAddDevice.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00E1F18 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     NdisMSetAttributesEx @ 0x1C00E2D50 (NdisMSetAttributesEx.c)
 *     NdisOpenAdapterEx @ 0x1C00E3930 (NdisOpenAdapterEx.c)
 *     ndisNotifyMiniports @ 0x1C00E4E20 (ndisNotifyMiniports.c)
 *     ndisQueueMiniportOnDriver @ 0x1C00E4EAC (ndisQueueMiniportOnDriver.c)
 *     NdisMRegisterInterruptEx @ 0x1C00E5130 (NdisMRegisterInterruptEx.c)
 *     ndisFindRootDevice @ 0x1C00EBAE4 (ndisFindRootDevice.c)
 *     ndisMUnload @ 0x1C00EC5A0 (ndisMUnload.c)
 *     NdisClOpenAddressFamily @ 0x1C00EC750 (NdisClOpenAddressFamily.c)
 *     NdisCmRegisterAddressFamily @ 0x1C00ECC90 (NdisCmRegisterAddressFamily.c)
 *     NdisMCmRegisterAddressFamily @ 0x1C00ECFB0 (NdisMCmRegisterAddressFamily.c)
 *     ndisNotifyAfRegistration @ 0x1C00ED410 (ndisNotifyAfRegistration.c)
 *     NdisDeregisterProtocol @ 0x1C00ED550 (NdisDeregisterProtocol.c)
 *     NdisMAllocateMapRegisters @ 0x1C00ED960 (NdisMAllocateMapRegisters.c)
 *     NdisMDeregisterDmaChannel @ 0x1C00EDEC0 (NdisMDeregisterDmaChannel.c)
 *     NdisMFreeMapRegisters @ 0x1C00EDF80 (NdisMFreeMapRegisters.c)
 *     NdisMRegisterDevice @ 0x1C00EE0C0 (NdisMRegisterDevice.c)
 *     NdisMRegisterDmaChannel @ 0x1C00EE370 (NdisMRegisterDmaChannel.c)
 *     ndisFindMiniportOnGlobalList @ 0x1C00EE670 (ndisFindMiniportOnGlobalList.c)
 *     ndisMFinishQueuedPendingOpen @ 0x1C00EE7B0 (ndisMFinishQueuedPendingOpen.c)
 *     ndisRegisterMiniportDriver @ 0x1C00EE988 (ndisRegisterMiniportDriver.c)
 *     NdisMDeregisterInterruptEx @ 0x1C00EEFE0 (NdisMDeregisterInterruptEx.c)
 *     ndisPmHaltMiniport @ 0x1C00EF254 (ndisPmHaltMiniport.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00EFB2C (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     NdisMSleep @ 0x1C00AAAA0 (NdisMSleep.c)
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
