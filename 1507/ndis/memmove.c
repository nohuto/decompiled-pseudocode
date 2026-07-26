/*
 * XREFs of memmove @ 0x1C0023700
 * Callers:
 *     ?RtlCopyMdlToBuffer@@YAJPEAU_MDL@@_KPEAX1PEA_K@Z @ 0x1C000130C (-RtlCopyMdlToBuffer@@YAJPEAU_MDL@@_KPEAX1PEA_K@Z.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C0005A90 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ndisReferenceWithTag @ 0x1C00068E0 (ndisReferenceWithTag.c)
 *     NdisGetDataBuffer @ 0x1C000A850 (NdisGetDataBuffer.c)
 *     ?ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_LH@@W4_NSI_STRUCT_TYPE@@K@Z @ 0x1C0010164 (-ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_.c)
 *     ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0010AE0 (-ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ndisOidPostEthMulticastOid @ 0x1C00112E0 (ndisOidPostEthMulticastOid.c)
 *     ?ndisIfCreateCompartmentBlock@@YAJIPEAU_GUID@@PEAU_NDIS_NSI_COMPARTMENT_RW@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C0012720 (-ndisIfCreateCompartmentBlock@@YAJIPEAU_GUID@@PEAU_NDIS_NSI_COMPARTMENT_RW@@PEAPEAU_NDIS_IF_COMP.c)
 *     ?ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0012A70 (-ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ndisMSetGeneralAttributes @ 0x1C0013AA0 (ndisMSetGeneralAttributes.c)
 *     ndisWriteWmiStatusIndication @ 0x1C0015FD8 (ndisWriteWmiStatusIndication.c)
 *     ndisIndicateOffloadChangeInternal @ 0x1C00164C4 (ndisIndicateOffloadChangeInternal.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0016C08 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ?ndisPostProcessRestartParametersAfterMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0019268 (-ndisPostProcessRestartParametersAfterMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 *     ?ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C001956C (-ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 *     ?ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@@PEAK@Z @ 0x1C0019BD8 (-ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@.c)
 *     ndisSetupWmiNode @ 0x1C001A53C (ndisSetupWmiNode.c)
 *     ndisIfUpdateInterfaceOnAddDevice @ 0x1C001ACF0 (ndisIfUpdateInterfaceOnAddDevice.c)
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C001AED4 (ndisIfUpdateInterfaceOnInitialize.c)
 *     ndisOidPostEthMulticastList @ 0x1C001B2F0 (ndisOidPostEthMulticastList.c)
 *     ndisPostOpenSetMulticastList @ 0x1C001B3D8 (ndisPostOpenSetMulticastList.c)
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C001C6DC (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     NdisFRegisterFilterDriver @ 0x1C001CB10 (NdisFRegisterFilterDriver.c)
 *     ndisOidPreSupportedList @ 0x1C001DA20 (ndisOidPreSupportedList.c)
 *     NdisAllocateSharedMemory @ 0x1C001DBA0 (NdisAllocateSharedMemory.c)
 *     NdisGetProcessorInformationEx @ 0x1C001E440 (NdisGetProcessorInformationEx.c)
 *     NdisFIndicateStatus @ 0x1C001E510 (NdisFIndicateStatus.c)
 *     NdisRegisterDeviceEx @ 0x1C001E5C0 (NdisRegisterDeviceEx.c)
 *     ndisSetOpenRSSParameters @ 0x1C001F0A8 (ndisSetOpenRSSParameters.c)
 *     NdisIfRegisterProvider @ 0x1C001F950 (NdisIfRegisterProvider.c)
 *     ndisPostSetOpenRSSParameters @ 0x1C001FBE4 (ndisPostSetOpenRSSParameters.c)
 *     ndisPostSetMiniportRSSParameters @ 0x1C001FD64 (ndisPostSetMiniportRSSParameters.c)
 *     ndisIfAliasChange @ 0x1C00207CC (ndisIfAliasChange.c)
 *     ndisIfSetIfDescr @ 0x1C0020978 (ndisIfSetIfDescr.c)
 *     ndisMIndicateReceiveFilterCapsChange @ 0x1C0021D88 (ndisMIndicateReceiveFilterCapsChange.c)
 *     ndisMIndicateNicSwitchCapsChange @ 0x1C0021EB0 (ndisMIndicateNicSwitchCapsChange.c)
 *     ndisCheckIfTypeMismatch @ 0x1C0021F14 (ndisCheckIfTypeMismatch.c)
 *     ndisFIndicateOffloadChange @ 0x1C0022104 (ndisFIndicateOffloadChange.c)
 *     NdisWriteErrorLogEntry @ 0x1C0022190 (NdisWriteErrorLogEntry.c)
 *     ndisMIndicateOffloadChange @ 0x1C00222D0 (ndisMIndicateOffloadChange.c)
 *     ndisIovCopyVFInfo @ 0x1C0023DF4 (ndisIovCopyVFInfo.c)
 *     ndisAllocateReceiveQueue @ 0x1C003787C (ndisAllocateReceiveQueue.c)
 *     ndisOidPreRcvFilterParameters @ 0x1C0039120 (ndisOidPreRcvFilterParameters.c)
 *     ndisOidPreRcvFilterQueueParameters @ 0x1C0039320 (ndisOidPreRcvFilterQueueParameters.c)
 *     ndisSetReceiveFilter @ 0x1C0039558 (ndisSetReceiveFilter.c)
 *     NdisMAllocatePort @ 0x1C0039C60 (NdisMAllocatePort.c)
 *     ?ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C003CA80 (-ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C003D240 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ndisIfUpdateCurrentMacAddress @ 0x1C003E928 (ndisIfUpdateCurrentMacAddress.c)
 *     ndisMAllocateRequest @ 0x1C00408E4 (ndisMAllocateRequest.c)
 *     ndisOidPostMiniportStats @ 0x1C0041EA0 (ndisOidPostMiniportStats.c)
 *     ndisOidPostTcpConnectionOffloadParameters @ 0x1C00420E0 (ndisOidPostTcpConnectionOffloadParameters.c)
 *     ndisOidPreQosGetParameters @ 0x1C0042820 (ndisOidPreQosGetParameters.c)
 *     ndisOidPreQueryOffloadEncapsulation @ 0x1C00429CC (ndisOidPreQueryOffloadEncapsulation.c)
 *     ndisQueryMiniportRSSParameters @ 0x1C0043208 (ndisQueryMiniportRSSParameters.c)
 *     ndisQueryOpenRSSParameters @ 0x1C0043360 (ndisQueryOpenRSSParameters.c)
 *     ndisClonePMPatternList @ 0x1C00441F8 (ndisClonePMPatternList.c)
 *     ndisQueryWakeUpPatternList @ 0x1C0045580 (ndisQueryWakeUpPatternList.c)
 *     ?RtlCopyBufferToMdl@@YAJPEAXPEAU_MDL@@_K2PEA_K@Z @ 0x1C0045A78 (-RtlCopyBufferToMdl@@YAJPEAXPEAU_MDL@@_K2PEA_K@Z.c)
 *     ?RtlCopyMdlToMdl@@YAJPEAU_MDL@@_K011PEA_K@Z @ 0x1C0045B60 (-RtlCopyMdlToMdl@@YAJPEAU_MDL@@_K011PEA_K@Z.c)
 *     ndisReadUpperBindings @ 0x1C004AB88 (ndisReadUpperBindings.c)
 *     NdisCopyFromPacketToPacket @ 0x1C004B280 (NdisCopyFromPacketToPacket.c)
 *     NdisCopyFromPacketToPacketSafe @ 0x1C004B480 (NdisCopyFromPacketToPacketSafe.c)
 *     ndisDoLoopbackNetBufferList @ 0x1C004EAB0 (ndisDoLoopbackNetBufferList.c)
 *     ndisMCopyFromPacketToBuffer @ 0x1C004EF50 (ndisMCopyFromPacketToBuffer.c)
 *     NdisEnumerateFilterModules @ 0x1C00522E0 (NdisEnumerateFilterModules.c)
 *     ndisFDoLoopbackNetBufferList @ 0x1C0053664 (ndisFDoLoopbackNetBufferList.c)
 *     NdisMWriteLogData @ 0x1C0055450 (NdisMWriteLogData.c)
 *     ndisMGetLogData @ 0x1C0055934 (ndisMGetLogData.c)
 *     NdisWriteEventLogEntry @ 0x1C0056300 (NdisWriteEventLogEntry.c)
 *     ndisGetPowerInfo @ 0x1C0057830 (ndisGetPowerInfo.c)
 *     ndisMIndicateQosParametersChange @ 0x1C0059ADC (ndisMIndicateQosParametersChange.c)
 *     EthQueryGlobalFilterAddresses @ 0x1C005D860 (EthQueryGlobalFilterAddresses.c)
 *     EthQueryOpenFilterAddresses @ 0x1C005D8F0 (EthQueryOpenFilterAddresses.c)
 *     ndisTopTcpConnectionOffloadStatus @ 0x1C0061268 (ndisTopTcpConnectionOffloadStatus.c)
 *     NdisSetSessionCompartmentId @ 0x1C00616A0 (NdisSetSessionCompartmentId.c)
 *     ?ndisCopyPeriodicReceiveNbl@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@KPEAU1@@Z @ 0x1C006198C (-ndisCopyPeriodicReceiveNbl@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@KPEAU1@@Z.c)
 *     ndisLWM5IndicateReceive @ 0x1C0062CD4 (ndisLWM5IndicateReceive.c)
 *     ?ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x1C0064C3C (-ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_.c)
 *     ?ndisExpandStackTrace@@YAEPEAPEAU_NDIS_STACK_TRACE@@PEAU_RTL_DYNAMIC_HASH_TABLE_CONTEXT@@PEA_K@Z @ 0x1C0066998 (-ndisExpandStackTrace@@YAEPEAPEAU_NDIS_STACK_TRACE@@PEAU_RTL_DYNAMIC_HASH_TABLE_CONTEXT@@PEA_K@Z.c)
 *     ndisSSUpdateOidCacheValue @ 0x1C0068670 (ndisSSUpdateOidCacheValue.c)
 *     ?ndisGetPdInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C006C934 (-ndisGetPdInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ndisMIndicatePDConfigChange @ 0x1C006DD70 (ndisMIndicatePDConfigChange.c)
 *     ndisOidPrePDQueryConfig @ 0x1C006E000 (ndisOidPrePDQueryConfig.c)
 *     Duplicate802_11AttachAttributesCommon @ 0x1C006FC90 (Duplicate802_11AttachAttributesCommon.c)
 *     ndisQueryStatisticsOids @ 0x1C0096198 (ndisQueryStatisticsOids.c)
 *     ndisDeviceControlHandler @ 0x1C009652C (ndisDeviceControlHandler.c)
 *     ?ndisNsiGetInterfaceRwInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00977B0 (-ndisNsiGetInterfaceRwInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRosInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0097BF0 (-ndisNsiGetInterfaceRosInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0097EB0 (-ndisNsiGetInterfaceRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00983E0 (-ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRodEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0098630 (-ndisNsiGetInterfaceRodEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ndisCreateWoLPatternEntry @ 0x1C0099FCC (ndisCreateWoLPatternEntry.c)
 *     ndisCreatePMProtocolOffloadEntry @ 0x1C009A408 (ndisCreatePMProtocolOffloadEntry.c)
 *     ndisOidPreEthAddress @ 0x1C009A6E0 (ndisOidPreEthAddress.c)
 *     ndisNotifyDevicePowerStateChange @ 0x1C009B924 (ndisNotifyDevicePowerStateChange.c)
 *     ?RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z @ 0x1C009C0F4 (-RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z.c)
 *     ??$QueryValueBlob@V_lambda_5bc2d9b33f02c20be684baa9d0d621f5_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING@@V_lambda_5bc2d9b33f02c20be684baa9d0d621f5_@@@Z @ 0x1C009CEB8 (--$QueryValueBlob@V_lambda_5bc2d9b33f02c20be684baa9d0d621f5_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING.c)
 *     Ndis::BindRegistry::LoadNetworkInterfaceString @ 0x1C009D5C8 (Ndis--BindRegistry--LoadNetworkInterfaceString.c)
 *     SeSddlSecurityDescriptorFromSDDL @ 0x1C009DA30 (SeSddlSecurityDescriptorFromSDDL.c)
 *     SepSddlAddAceToAcl @ 0x1C009DEE0 (SepSddlAddAceToAcl.c)
 *     ndisSetOpenEthAddDeleteMulticast @ 0x1C009E144 (ndisSetOpenEthAddDeleteMulticast.c)
 *     ethAddOneOpenMulticastAddress @ 0x1C009E47C (ethAddOneOpenMulticastAddress.c)
 *     ndisCreateSecurityDescriptor @ 0x1C009E8A0 (ndisCreateSecurityDescriptor.c)
 *     ndisMSetOffloadAttributes @ 0x1C009F4EC (ndisMSetOffloadAttributes.c)
 *     ndisMSetRssCapabilities @ 0x1C009F864 (ndisMSetRssCapabilities.c)
 *     NdisMSetMiniportAttributes @ 0x1C00A00B0 (NdisMSetMiniportAttributes.c)
 *     ndisInitializeMiniportRestartAttributes @ 0x1C00A0674 (ndisInitializeMiniportRestartAttributes.c)
 *     NdisOpenProtocolConfiguration @ 0x1C00A5040 (NdisOpenProtocolConfiguration.c)
 *     ?reserve@?$KArray@PEAX@Rtl@@QEAA_N_K@Z @ 0x1C00A5880 (-reserve@-$KArray@PEAX@Rtl@@QEAA_N_K@Z.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z @ 0x1C00A5B68 (-Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z.c)
 *     ndisEnumerateFilterInstances @ 0x1C00A5CAC (ndisEnumerateFilterInstances.c)
 *     NdisOpenConfigurationKeyByName @ 0x1C00A5D70 (NdisOpenConfigurationKeyByName.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00A5EE8 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C00A761C (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_L.c)
 *     ndisNotifyWmiBindUnbind @ 0x1C00A7C88 (ndisNotifyWmiBindUnbind.c)
 *     ndisQueryGuidData @ 0x1C00A84E8 (ndisQueryGuidData.c)
 *     ndisWmiRegister @ 0x1C00A8710 (ndisWmiRegister.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C00A8934 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 *     NdisReadConfiguration @ 0x1C00A9EE0 (NdisReadConfiguration.c)
 *     ndisQuerySupportedGuidToOidList @ 0x1C00AAEB4 (ndisQuerySupportedGuidToOidList.c)
 *     ndisPnPStartDevice @ 0x1C00AC324 (ndisPnPStartDevice.c)
 *     ndisMNotifyMachineName @ 0x1C00ACAB8 (ndisMNotifyMachineName.c)
 *     ?reserve@?$KArray@E@Rtl@@QEAA_N_K@Z @ 0x1C00AD788 (-reserve@-$KArray@E@Rtl@@QEAA_N_K@Z.c)
 *     ndisSetMiniportEthMulticastList @ 0x1C00AD820 (ndisSetMiniportEthMulticastList.c)
 *     ndisSetOpenEthMulticastList @ 0x1C00AD9A4 (ndisSetOpenEthMulticastList.c)
 *     ndisSaveParameters @ 0x1C00AE950 (ndisSaveParameters.c)
 *     ndisOidPreRSSCaps @ 0x1C00B1140 (ndisOidPreRSSCaps.c)
 *     ndisReadParameter @ 0x1C00B1420 (ndisReadParameter.c)
 *     ndisEtwRegisterGuids @ 0x1C00B1AC8 (ndisEtwRegisterGuids.c)
 *     ndisMSetReceiveFilterAttributes @ 0x1C00B2AF8 (ndisMSetReceiveFilterAttributes.c)
 *     ndisMSetNicSwitchAttributes @ 0x1C00B2D2C (ndisMSetNicSwitchAttributes.c)
 *     ndisMSetSriovAttributes @ 0x1C00B33AC (ndisMSetSriovAttributes.c)
 *     ndisOidPreReceiveFilterCaps @ 0x1C00C59F0 (ndisOidPreReceiveFilterCaps.c)
 *     ?ndisNsiGetIfRcvAddressRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00C610C (-ndisNsiGetIfRcvAddressRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NM_.c)
 *     ndisIfCreateInterfaceForiScsi @ 0x1C00C64F8 (ndisIfCreateInterfaceForiScsi.c)
 *     ndisOidPreFriendlyName @ 0x1C00C6F00 (ndisOidPreFriendlyName.c)
 *     ndisOidPreMacAddress @ 0x1C00C71F0 (ndisOidPreMacAddress.c)
 *     ndisOidPreQueryTcpConnectionParameters @ 0x1C00C79D4 (ndisOidPreQueryTcpConnectionParameters.c)
 *     ndisSetRestoreMulticastList @ 0x1C00C869C (ndisSetRestoreMulticastList.c)
 *     ndisCreatePMPacketPattern @ 0x1C00C9A94 (ndisCreatePMPacketPattern.c)
 *     ndisCreateWakeUpPatternEntry @ 0x1C00C9B68 (ndisCreateWakeUpPatternEntry.c)
 *     ndisQueryWolPatternList @ 0x1C00CB008 (ndisQueryWolPatternList.c)
 *     ndisXlateAddPacketPatternToWolPatternOid @ 0x1C00CC464 (ndisXlateAddPacketPatternToWolPatternOid.c)
 *     ndisXlateAddWolPatternToPacketPatternOid @ 0x1C00CC60C (ndisXlateAddWolPatternToPacketPatternOid.c)
 *     ndisXlateRemoveWolPatternToPacketPatternOid @ 0x1C00CC890 (ndisXlateRemoveWolPatternToPacketPatternOid.c)
 *     ndisXlateWakeUpPatternListToWolPatternList @ 0x1C00CCB18 (ndisXlateWakeUpPatternListToWolPatternList.c)
 *     ndisXlateWolPatternListToWakeUpPatternList @ 0x1C00CCD80 (ndisXlateWolPatternListToWakeUpPatternList.c)
 *     WppTraceCallback @ 0x1C00CD390 (WppTraceCallback.c)
 *     NdisWriteConfiguration @ 0x1C00CDA60 (NdisWriteConfiguration.c)
 *     ndisGetOrCreateFilterInstanceKey @ 0x1C00CF3E0 (ndisGetOrCreateFilterInstanceKey.c)
 *     ndisGetAdapterRssInfo @ 0x1C00D0CA4 (ndisGetAdapterRssInfo.c)
 *     ndisGetHardwareInfo @ 0x1C00D0F10 (ndisGetHardwareInfo.c)
 *     ndisMSetQosAttributes @ 0x1C00D291C (ndisMSetQosAttributes.c)
 *     NdisInitializeWrapper @ 0x1C00D2AE0 (NdisInitializeWrapper.c)
 *     NdisMQueryAdapterResources @ 0x1C00D30C0 (NdisMQueryAdapterResources.c)
 *     ethDeleteOneOpenMulticastAddress @ 0x1C00D440C (ethDeleteOneOpenMulticastAddress.c)
 *     ndisWmiExecuteMethod @ 0x1C00D5B60 (ndisWmiExecuteMethod.c)
 *     ndisWmiQueryAllData @ 0x1C00D6580 (ndisWmiQueryAllData.c)
 *     ndisWmiXlateEnumNdisRecvQueuesToWmiRecvQueues @ 0x1C00D6B68 (ndisWmiXlateEnumNdisRecvQueuesToWmiRecvQueues.c)
 *     ?ndisPcwAddCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z @ 0x1C00D8478 (-ndisPcwAddCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z.c)
 *     ndisIovCreateVPort @ 0x1C00D9748 (ndisIovCreateVPort.c)
 *     ndisIovReadSwitchConfiguration @ 0x1C00D9DA0 (ndisIovReadSwitchConfiguration.c)
 *     ndisSriovInterfaceReadVFConfig @ 0x1C00DC110 (ndisSriovInterfaceReadVFConfig.c)
 *     ndisSriovInterfaceReadVfConfigBlock @ 0x1C00DC2B0 (ndisSriovInterfaceReadVfConfigBlock.c)
 *     ndisSriovInterfaceWriteVFConfig @ 0x1C00DC6B0 (ndisSriovInterfaceWriteVFConfig.c)
 *     ndisSriovInterfaceWriteVfConfigBlock @ 0x1C00DC840 (ndisSriovInterfaceWriteVfConfigBlock.c)
 *     ndisSSGetCachedOidValue @ 0x1C00DCB3C (ndisSSGetCachedOidValue.c)
 *     ?NdisPDPISetReceiveFilter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_FILTER_PARAMETERS@@PEAPEAUNDIS_PD_FILTER_HANDLE__@@@Z @ 0x1C00DFE60 (-NdisPDPISetReceiveFilter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_FILTER_PARAMETERS@@PEA.c)
 *     NdisMRegisterWdiMiniportDriver @ 0x1C00E3800 (NdisMRegisterWdiMiniportDriver.c)
 *     CmRegUtilUcValueSetUcString @ 0x1C00E4550 (CmRegUtilUcValueSetUcString.c)
 *     ndisHandlePnPRequest @ 0x1C00E5000 (ndisHandlePnPRequest.c)
 *     ndisPnPRemoveDevice @ 0x1C00E63F0 (ndisPnPRemoveDevice.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00E88AC (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ndisMInitializeAdapter @ 0x1C00E9E1C (ndisMInitializeAdapter.c)
 *     ndisEnumerateInterfaces @ 0x1C00EB5EC (ndisEnumerateInterfaces.c)
 *     ndisEnumerateInterfaces32 @ 0x1C00F1D98 (ndisEnumerateInterfaces32.c)
 *     NdisMRegisterDevice @ 0x1C00F3F60 (NdisMRegisterDevice.c)
 *     ndisRegisterMiniportDriver @ 0x1C00F4828 (ndisRegisterMiniportDriver.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00F59AC (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     NdisCoAssignInstanceName @ 0x1C00F72C0 (NdisCoAssignInstanceName.c)
 *     ndisIfInitialize @ 0x1C010505C (ndisIfInitialize.c)
 *     ndisAddMediaTypeToArray @ 0x1C01064D0 (ndisAddMediaTypeToArray.c)
 * Callees:
 *     <none>
 */

void *__cdecl memmove(void *a1, const void *Src, size_t Size)
{
  __m128i *v3; // r11
  bool v4; // cf
  unsigned __int64 v5; // rdx
  size_t k; // r9
  __int64 v7; // rax
  size_t m; // r8
  char v9; // al
  unsigned int v11; // ecx
  size_t v12; // r9
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  int v15; // eax
  int v16; // eax
  __m128i v17; // xmm1
  __m128i v18; // xmm1
  __m128i *v19; // rcx
  size_t i; // r9
  __int64 v21; // rax
  size_t j; // r8
  __int8 v23; // al
  __m128i *v24; // rax
  __int64 v25; // rcx
  size_t v26; // r9
  __m128i v27; // xmm0
  __m128i v28; // xmm1
  int v29; // eax
  int v30; // eax
  __m128i v31; // xmm1
  __m128i v32; // xmm1
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v3 = (__m128i *)a1;
  v4 = Src < a1;
  v5 = (_BYTE *)Src - (_BYTE *)a1;
  if ( v4 )
  {
    v19 = (__m128i *)((char *)a1 + Size);
    if ( Size >= 0x4F )
    {
      if ( v5 > 0xFFFFFFFFFFFFFFF0uLL )
      {
        for ( ; ((unsigned __int8)v19 & 0xF) != 0; v19->m128i_i8[0] = v19->m128i_i8[v5] )
        {
          v19 = (__m128i *)((char *)v19 - 1);
          --Size;
        }
      }
      else
      {
        v24 = v19;
        v25 = (unsigned __int8)v19 & 0xF;
        if ( (_DWORD)v25 )
        {
          Size -= (unsigned int)v25;
          v25 = -(__int64)(unsigned int)v25;
          v24[-1] = _mm_loadu_si128((__m128i *)((char *)v24 + v5 - 16));
        }
        v19 = (__m128i *)((char *)v24 + v25);
      }
      v26 = Size >> 5;
      if ( Size >> 5 <= 0x2000 || v5 > 0xFFFFFFFFFFFFFE00uLL )
        goto xmov40;
      do
      {
        v29 = 4;
        do
        {
          v19 -= 8;
          _mm_prefetch(&v19->m128i_i8[v5], 0);
          _mm_prefetch(&v19[4].m128i_i8[v5], 0);
          --v29;
        }
        while ( v29 );
        v19 += 32;
        v30 = 8;
        do
        {
          v31 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 32));
          _mm_stream_si128(v19 - 1, _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 16)));
          _mm_stream_si128(v19 - 2, v31);
          v19 -= 4;
          v32 = _mm_loadu_si128((__m128i *)((char *)v19 + v5));
          _mm_stream_si128(v19 + 1, _mm_loadu_si128((__m128i *)((char *)v19 + v5 + 16)));
          _mm_stream_si128(v19, v32);
          --v30;
        }
        while ( v30 );
        Size -= 512LL;
      }
      while ( Size >= 0x200 );
      _InterlockedOr8((volatile signed __int8 *)&retaddr, 0);
      v26 = Size >> 5;
      if ( Size >> 5 )
      {
xmov40:
        Size &= 0x1Fu;
        do
        {
          v27 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 16));
          v28 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 32));
          v19 -= 2;
          v19[1] = v27;
          *v19 = v28;
          --v26;
        }
        while ( v26 );
      }
    }
    for ( i = Size >> 3; i; v19->m128i_i64[0] = v21 )
    {
      v21 = *(__int64 *)((char *)&v19->m128i_i64[-1] + v5);
      v19 = (__m128i *)((char *)v19 - 8);
      --i;
    }
    for ( j = Size & 7; j; v19->m128i_i8[0] = v23 )
    {
      v23 = v19->m128i_i8[v5 - 1];
      v19 = (__m128i *)((char *)v19 - 1);
      --j;
    }
    return v3;
  }
  else
  {
    if ( Size >= 0x4F )
    {
      if ( v5 < 0x10 )
      {
        for ( ; ((unsigned __int8)a1 & 0xF) != 0; a1 = (char *)a1 + 1 )
        {
          --Size;
          *(_BYTE *)a1 = *((_BYTE *)a1 + v5);
        }
      }
      else
      {
        v11 = -(int)a1 & 0xF;
        if ( v11 )
        {
          Size -= v11;
          *v3 = _mm_loadu_si128((__m128i *)((char *)v3 + v5));
        }
        a1 = &v3->m128i_i8[v11];
      }
      v12 = Size >> 5;
      if ( Size >> 5 <= 0x2000 || v5 < 0x200 )
        goto xcpy40;
      do
      {
        v15 = 4;
        do
        {
          _mm_prefetch((const char *)a1 + v5, 0);
          _mm_prefetch((const char *)a1 + v5 + 64, 0);
          a1 = (char *)a1 + 128;
          --v15;
        }
        while ( v15 );
        a1 = (char *)a1 - 512;
        v16 = 8;
        do
        {
          v17 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 + 16));
          _mm_stream_si128((__m128i *)a1, _mm_loadu_si128((const __m128i *)((char *)a1 + v5)));
          _mm_stream_si128((__m128i *)a1 + 1, v17);
          a1 = (char *)a1 + 64;
          v18 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 - 16));
          _mm_stream_si128((__m128i *)a1 - 2, _mm_loadu_si128((const __m128i *)((char *)a1 + v5 - 32)));
          _mm_stream_si128((__m128i *)a1 - 1, v18);
          --v16;
        }
        while ( v16 );
        Size -= 512LL;
      }
      while ( Size >= 0x200 );
      _InterlockedOr8((volatile signed __int8 *)&retaddr, 0);
      v12 = Size >> 5;
      if ( Size >> 5 )
      {
xcpy40:
        Size &= 0x1Fu;
        do
        {
          v13 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5));
          v14 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 + 16));
          a1 = (char *)a1 + 32;
          *((__m128i *)a1 - 2) = v13;
          *((__m128i *)a1 - 1) = v14;
          --v12;
        }
        while ( v12 );
      }
    }
    for ( k = Size >> 3; k; *((_QWORD *)a1 - 1) = v7 )
    {
      v7 = *(_QWORD *)((char *)a1 + v5);
      a1 = (char *)a1 + 8;
      --k;
    }
    for ( m = Size & 7; m; *((char *)a1 - 1) = v9 )
    {
      v9 = *((_BYTE *)a1 + v5);
      a1 = (char *)a1 + 1;
      --m;
    }
    return v3;
  }
}
