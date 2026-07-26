/*
 * XREFs of memmove @ 0x1C0026C00
 * Callers:
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00094B0 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     NdisGetDataBuffer @ 0x1C000CE60 (NdisGetDataBuffer.c)
 *     ndisOidPostEthMulticastList @ 0x1C0010530 (ndisOidPostEthMulticastList.c)
 *     ndisPostOpenSetMulticastList @ 0x1C0010618 (ndisPostOpenSetMulticastList.c)
 *     ?ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C0010B84 (-ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?RtlCopyMdlToMdl@@YAJPEAU_MDL@@_K011PEA_K@Z @ 0x1C00117D4 (-RtlCopyMdlToMdl@@YAJPEAU_MDL@@_K011PEA_K@Z.c)
 *     ?ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_LH@@W4_NSI_STRUCT_TYPE@@K@Z @ 0x1C001409C (-ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_.c)
 *     ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0014380 (-ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ?RtlCopyMdlToBuffer@@YAJPEAU_MDL@@_KPEAX1PEA_K@Z @ 0x1C0015920 (-RtlCopyMdlToBuffer@@YAJPEAU_MDL@@_KPEAX1PEA_K@Z.c)
 *     ndisMIndicateReceiveFilterCapsChange @ 0x1C001623C (ndisMIndicateReceiveFilterCapsChange.c)
 *     ndisMIndicateNicSwitchCapsChange @ 0x1C00162D4 (ndisMIndicateNicSwitchCapsChange.c)
 *     ndisFIndicateOffloadChange @ 0x1C00163C8 (ndisFIndicateOffloadChange.c)
 *     NdisWriteErrorLogEntry @ 0x1C0016460 (NdisWriteErrorLogEntry.c)
 *     ndisMIndicateOffloadChange @ 0x1C00165A0 (ndisMIndicateOffloadChange.c)
 *     ndisMSetGeneralAttributes @ 0x1C0017278 (ndisMSetGeneralAttributes.c)
 *     ndisSetupWmiNode @ 0x1C001A980 (ndisSetupWmiNode.c)
 *     ?ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@@PEAK@Z @ 0x1C001AD78 (-ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001B908 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisWriteWmiStatusIndication @ 0x1C001D65C (ndisWriteWmiStatusIndication.c)
 *     ndisIndicateOffloadChangeInternal @ 0x1C001DDB4 (ndisIndicateOffloadChangeInternal.c)
 *     ?ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C001E29C (-ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 *     ?ndisPostProcessRestartParametersAfterMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C001E500 (-ndisPostProcessRestartParametersAfterMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 *     NdisFRegisterFilterDriver @ 0x1C001EE40 (NdisFRegisterFilterDriver.c)
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C001F5D8 (ndisIfUpdateInterfaceOnInitialize.c)
 *     ndisIfUpdateInterfaceOnAddDevice @ 0x1C001F998 (ndisIfUpdateInterfaceOnAddDevice.c)
 *     ?ndisIfCreateCompartmentBlock@@YAJIPEAU_GUID@@PEAU_NDIS_NSI_COMPARTMENT_RW@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C00206B4 (-ndisIfCreateCompartmentBlock@@YAJIPEAU_GUID@@PEAU_NDIS_NSI_COMPARTMENT_RW@@PEAPEAU_NDIS_IF_COMP.c)
 *     ?ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0020A00 (-ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C0021D94 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     ndisOidPreSupportedList @ 0x1C00221E0 (ndisOidPreSupportedList.c)
 *     NdisAllocateSharedMemory @ 0x1C0022AA0 (NdisAllocateSharedMemory.c)
 *     NdisFIndicateStatus @ 0x1C0022D70 (NdisFIndicateStatus.c)
 *     NdisGetProcessorInformationEx @ 0x1C0022DF0 (NdisGetProcessorInformationEx.c)
 *     NdisRegisterDeviceEx @ 0x1C0022EC0 (NdisRegisterDeviceEx.c)
 *     ndisSetOpenRSSParameters @ 0x1C002336C (ndisSetOpenRSSParameters.c)
 *     ndisPostSetOpenRSSParameters @ 0x1C0023660 (ndisPostSetOpenRSSParameters.c)
 *     ndisPostSetMiniportRSSParameters @ 0x1C0023808 (ndisPostSetMiniportRSSParameters.c)
 *     NdisIfRegisterProvider @ 0x1C0024310 (NdisIfRegisterProvider.c)
 *     ndisOidPostEthMulticastOid @ 0x1C00252B0 (ndisOidPostEthMulticastOid.c)
 *     ndisIovCopyVFInfo @ 0x1C00272F8 (ndisIovCopyVFInfo.c)
 *     ndisAllocateReceiveQueue @ 0x1C0038570 (ndisAllocateReceiveQueue.c)
 *     ndisOidPreRcvFilterParameters @ 0x1C0039E50 (ndisOidPreRcvFilterParameters.c)
 *     ndisOidPreRcvFilterQueueParameters @ 0x1C003A050 (ndisOidPreRcvFilterQueueParameters.c)
 *     ndisSetReceiveFilter @ 0x1C003A288 (ndisSetReceiveFilter.c)
 *     NdisMAllocatePort @ 0x1C003A9A0 (NdisMAllocatePort.c)
 *     ?ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C003DB00 (-ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C003E2D0 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ndisIfAliasChange @ 0x1C003F5D0 (ndisIfAliasChange.c)
 *     ndisIfSetIfDescr @ 0x1C003FF20 (ndisIfSetIfDescr.c)
 *     ndisIfUpdateCurrentMacAddress @ 0x1C0040160 (ndisIfUpdateCurrentMacAddress.c)
 *     ndisMAllocateRequest @ 0x1C0041FE4 (ndisMAllocateRequest.c)
 *     ndisOidPostMiniportStats @ 0x1C0043460 (ndisOidPostMiniportStats.c)
 *     ndisOidPostTcpConnectionOffloadParameters @ 0x1C00436A0 (ndisOidPostTcpConnectionOffloadParameters.c)
 *     ndisOidPreQosGetParameters @ 0x1C0043DB0 (ndisOidPreQosGetParameters.c)
 *     ndisOidPreQueryOffloadEncapsulation @ 0x1C0043F5C (ndisOidPreQueryOffloadEncapsulation.c)
 *     ndisQueryMiniportRSSParameters @ 0x1C00447A0 (ndisQueryMiniportRSSParameters.c)
 *     ndisQueryOpenRSSParameters @ 0x1C00448F8 (ndisQueryOpenRSSParameters.c)
 *     ndisClonePMPatternList @ 0x1C0045790 (ndisClonePMPatternList.c)
 *     ndisQueryWakeUpPatternList @ 0x1C0046B10 (ndisQueryWakeUpPatternList.c)
 *     ?RtlCopyBufferToMdl@@YAJPEAXPEAU_MDL@@_K2PEA_K@Z @ 0x1C0047008 (-RtlCopyBufferToMdl@@YAJPEAXPEAU_MDL@@_K2PEA_K@Z.c)
 *     ndisReadUpperBindings @ 0x1C004B408 (ndisReadUpperBindings.c)
 *     NdisCopyFromPacketToPacket @ 0x1C004BB00 (NdisCopyFromPacketToPacket.c)
 *     NdisCopyFromPacketToPacketSafe @ 0x1C004BD00 (NdisCopyFromPacketToPacketSafe.c)
 *     ndisDoLoopbackNetBufferList @ 0x1C004F050 (ndisDoLoopbackNetBufferList.c)
 *     ndisMCopyFromPacketToBuffer @ 0x1C004F4F0 (ndisMCopyFromPacketToBuffer.c)
 *     NdisEnumerateFilterModules @ 0x1C0052790 (NdisEnumerateFilterModules.c)
 *     ndisFDoLoopbackNetBufferList @ 0x1C0053A54 (ndisFDoLoopbackNetBufferList.c)
 *     NdisMWriteLogData @ 0x1C0055520 (NdisMWriteLogData.c)
 *     ndisMGetLogData @ 0x1C00557DC (ndisMGetLogData.c)
 *     NdisWriteEventLogEntry @ 0x1C0056190 (NdisWriteEventLogEntry.c)
 *     ndisGetPowerInfo @ 0x1C0057550 (ndisGetPowerInfo.c)
 *     ndisCheckIfTypeMismatch @ 0x1C0058FF4 (ndisCheckIfTypeMismatch.c)
 *     ndisMIndicateQosParametersChange @ 0x1C0059A7C (ndisMIndicateQosParametersChange.c)
 *     EthQueryGlobalFilterAddresses @ 0x1C005D1C0 (EthQueryGlobalFilterAddresses.c)
 *     EthQueryOpenFilterAddresses @ 0x1C005D250 (EthQueryOpenFilterAddresses.c)
 *     ndisTopTcpConnectionOffloadStatus @ 0x1C0060A28 (ndisTopTcpConnectionOffloadStatus.c)
 *     NdisSetSessionCompartmentId @ 0x1C0060F30 (NdisSetSessionCompartmentId.c)
 *     ?ndisCopyPeriodicReceiveNbl@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@KPEAU1@@Z @ 0x1C00612AC (-ndisCopyPeriodicReceiveNbl@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@KPEAU1@@Z.c)
 *     ndisLWM5IndicateReceive @ 0x1C0061E54 (ndisLWM5IndicateReceive.c)
 *     ?ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x1C00637B4 (-ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_.c)
 *     ?ndisExpandStackTrace@@YAEPEAPEAU_NDIS_STACK_TRACE@@PEAU_RTL_DYNAMIC_HASH_TABLE_CONTEXT@@PEA_K@Z @ 0x1C0065B68 (-ndisExpandStackTrace@@YAEPEAPEAU_NDIS_STACK_TRACE@@PEAU_RTL_DYNAMIC_HASH_TABLE_CONTEXT@@PEA_K@Z.c)
 *     ndisSSUpdateOidCacheValue @ 0x1C0067720 (ndisSSUpdateOidCacheValue.c)
 *     ?ndisGetPdInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C006BA58 (-ndisGetPdInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ndisMIndicatePDConfigChange @ 0x1C006D1F0 (ndisMIndicatePDConfigChange.c)
 *     ndisOidPrePDQueryConfig @ 0x1C006D480 (ndisOidPrePDQueryConfig.c)
 *     Duplicate802_11AttachAttributesCommon @ 0x1C006F110 (Duplicate802_11AttachAttributesCommon.c)
 *     ndisCreatePMProtocolOffloadEntry @ 0x1C00933E8 (ndisCreatePMProtocolOffloadEntry.c)
 *     ndisQueryStatisticsOids @ 0x1C00938D0 (ndisQueryStatisticsOids.c)
 *     ndisDeviceControlHandler @ 0x1C0093CE0 (ndisDeviceControlHandler.c)
 *     ?ndisNsiGetInterfaceRodEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0095148 (-ndisNsiGetInterfaceRodEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRosInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00956F0 (-ndisNsiGetInterfaceRosInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00959C0 (-ndisNsiGetInterfaceRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRwInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0095F04 (-ndisNsiGetInterfaceRwInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0096420 (-ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ndisSetMiniportEthMulticastList @ 0x1C00969FC (ndisSetMiniportEthMulticastList.c)
 *     ndisSetOpenEthMulticastList @ 0x1C0096B84 (ndisSetOpenEthMulticastList.c)
 *     ndisCreateWoLPatternEntry @ 0x1C0097204 (ndisCreateWoLPatternEntry.c)
 *     ndisOidPreEthAddress @ 0x1C00976D0 (ndisOidPreEthAddress.c)
 *     ndisNotifyDevicePowerStateChange @ 0x1C0097F64 (ndisNotifyDevicePowerStateChange.c)
 *     ?RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z @ 0x1C00995D8 (-RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z.c)
 *     ndisMSetReceiveFilterAttributes @ 0x1C0099730 (ndisMSetReceiveFilterAttributes.c)
 *     ndisMSetNicSwitchAttributes @ 0x1C0099964 (ndisMSetNicSwitchAttributes.c)
 *     ndisMSetSriovAttributes @ 0x1C0099C80 (ndisMSetSriovAttributes.c)
 *     ndisMSetOffloadAttributes @ 0x1C009A5AC (ndisMSetOffloadAttributes.c)
 *     NdisMSetMiniportAttributes @ 0x1C009A930 (NdisMSetMiniportAttributes.c)
 *     ndisMSetRssCapabilities @ 0x1C009ACB4 (ndisMSetRssCapabilities.c)
 *     ndisCreateSecurityDescriptor @ 0x1C009B5F0 (ndisCreateSecurityDescriptor.c)
 *     NdisReadConfiguration @ 0x1C009DFB0 (NdisReadConfiguration.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C009E688 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 *     ndisInitializeMiniportRestartAttributes @ 0x1C009E9B4 (ndisInitializeMiniportRestartAttributes.c)
 *     ndisNotifyWmiBindUnbind @ 0x1C009ECD4 (ndisNotifyWmiBindUnbind.c)
 *     ndisQueryGuidData @ 0x1C009F550 (ndisQueryGuidData.c)
 *     ndisWmiRegister @ 0x1C009F778 (ndisWmiRegister.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C009F918 (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_L.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00A04A4 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     NdisOpenConfigurationKeyByName @ 0x1C00A0BF0 (NdisOpenConfigurationKeyByName.c)
 *     ndisEnumerateFilterInstances @ 0x1C00A0E40 (ndisEnumerateFilterInstances.c)
 *     NdisOpenProtocolConfiguration @ 0x1C00A1290 (NdisOpenProtocolConfiguration.c)
 *     ??$QueryValueBlob@V_lambda_5bc2d9b33f02c20be684baa9d0d621f5_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING@@V_lambda_5bc2d9b33f02c20be684baa9d0d621f5_@@@Z @ 0x1C00A16B8 (--$QueryValueBlob@V_lambda_5bc2d9b33f02c20be684baa9d0d621f5_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z @ 0x1C00A216C (-Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z.c)
 *     ?reserve@?$KArray@PEAX@Rtl@@QEAA_N_K@Z @ 0x1C00A5198 (-reserve@-$KArray@PEAX@Rtl@@QEAA_N_K@Z.c)
 *     ?reserve@?$KArray@E@Rtl@@QEAA_N_K@Z @ 0x1C00A6D84 (-reserve@-$KArray@E@Rtl@@QEAA_N_K@Z.c)
 *     ndisQuerySupportedGuidToOidList @ 0x1C00A87C4 (ndisQuerySupportedGuidToOidList.c)
 *     ndisSaveParameters @ 0x1C00A99D0 (ndisSaveParameters.c)
 *     ndisPnPStartDevice @ 0x1C00AA734 (ndisPnPStartDevice.c)
 *     Ndis::BindRegistry::LoadNetworkInterfaceString @ 0x1C00AB1C0 (Ndis--BindRegistry--LoadNetworkInterfaceString.c)
 *     ndisMNotifyMachineName @ 0x1C00ABD20 (ndisMNotifyMachineName.c)
 *     ndisOidPreRSSCaps @ 0x1C00ABF50 (ndisOidPreRSSCaps.c)
 *     ndisReadParameter @ 0x1C00AC4A0 (ndisReadParameter.c)
 *     ndisEtwRegisterGuids @ 0x1C00ACA3C (ndisEtwRegisterGuids.c)
 *     SeSddlSecurityDescriptorFromSDDL @ 0x1C00AD2A0 (SeSddlSecurityDescriptorFromSDDL.c)
 *     SepSddlAddAceToAcl @ 0x1C00AD750 (SepSddlAddAceToAcl.c)
 *     ndisSetOpenEthAddDeleteMulticast @ 0x1C00AD9B4 (ndisSetOpenEthAddDeleteMulticast.c)
 *     ethAddOneOpenMulticastAddress @ 0x1C00ADCE4 (ethAddOneOpenMulticastAddress.c)
 *     ndisOidPreReceiveFilterCaps @ 0x1C00BE8B0 (ndisOidPreReceiveFilterCaps.c)
 *     ?ndisNsiGetIfRcvAddressRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00BF47C (-ndisNsiGetIfRcvAddressRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NM_.c)
 *     ndisIfCreateInterfaceForiScsi @ 0x1C00BF8C8 (ndisIfCreateInterfaceForiScsi.c)
 *     ndisOidPreFriendlyName @ 0x1C00C0320 (ndisOidPreFriendlyName.c)
 *     ndisOidPreMacAddress @ 0x1C00C0610 (ndisOidPreMacAddress.c)
 *     ndisOidPreQueryTcpConnectionParameters @ 0x1C00C0DF4 (ndisOidPreQueryTcpConnectionParameters.c)
 *     ndisSetRestoreMulticastList @ 0x1C00C1ABC (ndisSetRestoreMulticastList.c)
 *     ndisCreatePMPacketPattern @ 0x1C00C2EB4 (ndisCreatePMPacketPattern.c)
 *     ndisCreateWakeUpPatternEntry @ 0x1C00C2F88 (ndisCreateWakeUpPatternEntry.c)
 *     ndisQueryWolPatternList @ 0x1C00C4428 (ndisQueryWolPatternList.c)
 *     ndisXlateAddPacketPatternToWolPatternOid @ 0x1C00C5884 (ndisXlateAddPacketPatternToWolPatternOid.c)
 *     ndisXlateAddWolPatternToPacketPatternOid @ 0x1C00C5A2C (ndisXlateAddWolPatternToPacketPatternOid.c)
 *     ndisXlateRemoveWolPatternToPacketPatternOid @ 0x1C00C5CB0 (ndisXlateRemoveWolPatternToPacketPatternOid.c)
 *     ndisXlateWakeUpPatternListToWolPatternList @ 0x1C00C5F38 (ndisXlateWakeUpPatternListToWolPatternList.c)
 *     ndisXlateWolPatternListToWakeUpPatternList @ 0x1C00C61A0 (ndisXlateWolPatternListToWakeUpPatternList.c)
 *     WppTraceCallback @ 0x1C00C67B0 (WppTraceCallback.c)
 *     NdisWriteConfiguration @ 0x1C00C6E70 (NdisWriteConfiguration.c)
 *     ndisGetOrCreateFilterInstanceKey @ 0x1C00C87F0 (ndisGetOrCreateFilterInstanceKey.c)
 *     ndisGetAdapterRssInfo @ 0x1C00C9FF8 (ndisGetAdapterRssInfo.c)
 *     ndisGetHardwareInfo @ 0x1C00CA26C (ndisGetHardwareInfo.c)
 *     ndisMSetQosAttributes @ 0x1C00CBC8C (ndisMSetQosAttributes.c)
 *     NdisInitializeWrapper @ 0x1C00CBE50 (NdisInitializeWrapper.c)
 *     NdisMQueryAdapterResources @ 0x1C00CC850 (NdisMQueryAdapterResources.c)
 *     ethDeleteOneOpenMulticastAddress @ 0x1C00CDB9C (ethDeleteOneOpenMulticastAddress.c)
 *     ndisWmiExecuteMethod @ 0x1C00CF320 (ndisWmiExecuteMethod.c)
 *     ndisWmiQueryAllData @ 0x1C00CFBFC (ndisWmiQueryAllData.c)
 *     ndisWmiXlateEnumNdisRecvQueuesToWmiRecvQueues @ 0x1C00D01E4 (ndisWmiXlateEnumNdisRecvQueuesToWmiRecvQueues.c)
 *     ?ndisPcwAddCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z @ 0x1C00D1B78 (-ndisPcwAddCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z.c)
 *     ndisIovCreateVPort @ 0x1C00D2E78 (ndisIovCreateVPort.c)
 *     ndisIovReadSwitchConfiguration @ 0x1C00D34E0 (ndisIovReadSwitchConfiguration.c)
 *     ndisOidPreIovNicSwitchParameters @ 0x1C00D4250 (ndisOidPreIovNicSwitchParameters.c)
 *     ndisSriovInterfaceReadVFConfig @ 0x1C00D5A60 (ndisSriovInterfaceReadVFConfig.c)
 *     ndisSriovInterfaceReadVfConfigBlock @ 0x1C00D5C00 (ndisSriovInterfaceReadVfConfigBlock.c)
 *     ndisSriovInterfaceWriteVFConfig @ 0x1C00D6000 (ndisSriovInterfaceWriteVFConfig.c)
 *     ndisSriovInterfaceWriteVfConfigBlock @ 0x1C00D6190 (ndisSriovInterfaceWriteVfConfigBlock.c)
 *     ndisSSGetCachedOidValue @ 0x1C00D648C (ndisSSGetCachedOidValue.c)
 *     ?NdisPDPISetReceiveFilter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_FILTER_PARAMETERS@@PEAPEAUNDIS_PD_FILTER_HANDLE__@@@Z @ 0x1C00D98B0 (-NdisPDPISetReceiveFilter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_FILTER_PARAMETERS@@PEA.c)
 *     NdisMRegisterWdiMiniportDriver @ 0x1C00DDD90 (NdisMRegisterWdiMiniportDriver.c)
 *     CmRegUtilUcValueSetUcString @ 0x1C00DEAE0 (CmRegUtilUcValueSetUcString.c)
 *     ndisHandlePnPRequest @ 0x1C00DF000 (ndisHandlePnPRequest.c)
 *     ndisPnPRemoveDevice @ 0x1C00E02B8 (ndisPnPRemoveDevice.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00E1F18 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ndisMInitializeAdapter @ 0x1C00E405C (ndisMInitializeAdapter.c)
 *     ndisEnumerateInterfaces @ 0x1C00E566C (ndisEnumerateInterfaces.c)
 *     ndisEnumerateInterfaces32 @ 0x1C00EB938 (ndisEnumerateInterfaces32.c)
 *     NdisMRegisterDevice @ 0x1C00EE0C0 (NdisMRegisterDevice.c)
 *     ndisRegisterMiniportDriver @ 0x1C00EE988 (ndisRegisterMiniportDriver.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00EFB2C (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     NdisCoAssignInstanceName @ 0x1C00F12C0 (NdisCoAssignInstanceName.c)
 *     ndisIfInitialize @ 0x1C00FEE90 (ndisIfInitialize.c)
 *     ndisAddMediaTypeToArray @ 0x1C01004F0 (ndisAddMediaTypeToArray.c)
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
