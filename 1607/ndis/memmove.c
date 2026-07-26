/*
 * XREFs of memmove @ 0x1C00271C0
 * Callers:
 *     NdisGetDataBuffer @ 0x1C00064F0 (NdisGetDataBuffer.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C0007D40 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000D400 (-ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?RtlCopyMdlToMdl@@YAJPEAU_MDL@@_K011PEA_K@Z @ 0x1C00107A8 (-RtlCopyMdlToMdl@@YAJPEAU_MDL@@_K011PEA_K@Z.c)
 *     ?ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_LH@@W4_NSI_STRUCT_TYPE@@K@Z @ 0x1C0011E88 (-ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_.c)
 *     ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0012590 (-ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C0012EAC (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     NdisIfRegisterProvider @ 0x1C0013580 (NdisIfRegisterProvider.c)
 *     ndisOidPostEthMulticastList @ 0x1C0013830 (ndisOidPostEthMulticastList.c)
 *     ndisPostOpenSetMulticastList @ 0x1C0013918 (ndisPostOpenSetMulticastList.c)
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C0013B84 (ndisIfUpdateInterfaceOnInitialize.c)
 *     NdisFRegisterFilterDriver @ 0x1C00141F0 (NdisFRegisterFilterDriver.c)
 *     ?ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@@PEAK@Z @ 0x1C001491C (-ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@.c)
 *     ?ndisPostProcessRestartParametersAfterMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C001515C (-ndisPostProcessRestartParametersAfterMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 *     ?ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C001532C (-ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 *     ndisWriteWmiStatusIndication @ 0x1C00176D4 (ndisWriteWmiStatusIndication.c)
 *     ndisSetupWmiNode @ 0x1C00181A0 (ndisSetupWmiNode.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0018568 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ?ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C001BD04 (-ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisIfCreateCompartmentBlock@@YAJIPEAU_GUID@@PEAU_NDIS_NSI_COMPARTMENT_RW@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C001D2BC (-ndisIfCreateCompartmentBlock@@YAJIPEAU_GUID@@PEAU_NDIS_NSI_COMPARTMENT_RW@@PEAPEAU_NDIS_IF_COMP.c)
 *     ndisOidPreSupportedList @ 0x1C001E2D0 (ndisOidPreSupportedList.c)
 *     ndisMSetGeneralAttributes @ 0x1C001E518 (ndisMSetGeneralAttributes.c)
 *     NdisRegisterDeviceEx @ 0x1C001EA40 (NdisRegisterDeviceEx.c)
 *     NdisFIndicateStatus @ 0x1C001ED80 (NdisFIndicateStatus.c)
 *     ndisIfUpdateInterfaceOnAddDevice @ 0x1C001F8FC (ndisIfUpdateInterfaceOnAddDevice.c)
 *     ndisIndicateOffloadChangeInternal @ 0x1C00231E0 (ndisIndicateOffloadChangeInternal.c)
 *     ?RtlCopyMdlToBuffer@@YAJPEAU_MDL@@_KPEAX1PEA_K@Z @ 0x1C00237B8 (-RtlCopyMdlToBuffer@@YAJPEAU_MDL@@_KPEAX1PEA_K@Z.c)
 *     ndisPostSetOpenRSSParameters @ 0x1C0024300 (ndisPostSetOpenRSSParameters.c)
 *     ndisSetOpenRSSParameters @ 0x1C0024598 (ndisSetOpenRSSParameters.c)
 *     ndisPostSetMiniportRSSParameters @ 0x1C00247F4 (ndisPostSetMiniportRSSParameters.c)
 *     NdisWriteErrorLogEntry @ 0x1C0024CB0 (NdisWriteErrorLogEntry.c)
 *     ndisFIndicateOffloadChange @ 0x1C0024DF0 (ndisFIndicateOffloadChange.c)
 *     ndisMIndicateReceiveFilterCapsChange @ 0x1C0024E7C (ndisMIndicateReceiveFilterCapsChange.c)
 *     ndisMIndicateNicSwitchCapsChange @ 0x1C0024FFC (ndisMIndicateNicSwitchCapsChange.c)
 *     ndisMIndicateOffloadChange @ 0x1C00250E8 (ndisMIndicateOffloadChange.c)
 *     ndisIovCopyVFInfo @ 0x1C00278A4 (ndisIovCopyVFInfo.c)
 *     ndisAllocateReceiveQueue @ 0x1C003C4EC (ndisAllocateReceiveQueue.c)
 *     ndisOidPreRcvFilterParameters @ 0x1C003DDD0 (ndisOidPreRcvFilterParameters.c)
 *     ndisOidPreRcvFilterQueueParameters @ 0x1C003DFD0 (ndisOidPreRcvFilterQueueParameters.c)
 *     ndisSetReceiveFilter @ 0x1C003E208 (ndisSetReceiveFilter.c)
 *     NdisMAllocatePort @ 0x1C003E920 (NdisMAllocatePort.c)
 *     ?ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00416E0 (-ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0041F40 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ndisIfAliasChange @ 0x1C00432A8 (ndisIfAliasChange.c)
 *     ndisIfSetIfDescr @ 0x1C0043A74 (ndisIfSetIfDescr.c)
 *     ndisIfUpdateCurrentMacAddress @ 0x1C0043CB4 (ndisIfUpdateCurrentMacAddress.c)
 *     ndisMAllocateRequest @ 0x1C0045AE4 (ndisMAllocateRequest.c)
 *     ndisOidPostEthMulticastOid @ 0x1C00464A0 (ndisOidPostEthMulticastOid.c)
 *     ndisOidPostMiniportStats @ 0x1C0046970 (ndisOidPostMiniportStats.c)
 *     ndisOidPostTcpConnectionOffloadParameters @ 0x1C0046BB0 (ndisOidPostTcpConnectionOffloadParameters.c)
 *     ndisOidPreQosGetParameters @ 0x1C00472F0 (ndisOidPreQosGetParameters.c)
 *     ndisOidPreQueryOffloadEncapsulation @ 0x1C004749C (ndisOidPreQueryOffloadEncapsulation.c)
 *     ndisQueryMiniportRSSParameters @ 0x1C0047CE0 (ndisQueryMiniportRSSParameters.c)
 *     ndisQueryOpenRSSParameters @ 0x1C0047E38 (ndisQueryOpenRSSParameters.c)
 *     ndisClonePMPatternList @ 0x1C0048D04 (ndisClonePMPatternList.c)
 *     ndisQueryWakeUpPatternList @ 0x1C004AAD0 (ndisQueryWakeUpPatternList.c)
 *     ?RtlCopyBufferToMdl@@YAJPEAXPEAU_MDL@@_K2PEA_K@Z @ 0x1C004B048 (-RtlCopyBufferToMdl@@YAJPEAXPEAU_MDL@@_K2PEA_K@Z.c)
 *     NdisAllocateSharedMemory @ 0x1C004B1E0 (NdisAllocateSharedMemory.c)
 *     NdisGetProcessorInformationEx @ 0x1C004E600 (NdisGetProcessorInformationEx.c)
 *     ndisReadUpperBindings @ 0x1C004FE28 (ndisReadUpperBindings.c)
 *     NdisCopyFromPacketToPacket @ 0x1C0050480 (NdisCopyFromPacketToPacket.c)
 *     NdisCopyFromPacketToPacketSafe @ 0x1C0050680 (NdisCopyFromPacketToPacketSafe.c)
 *     ndisDoLoopbackNetBufferList @ 0x1C0053AA0 (ndisDoLoopbackNetBufferList.c)
 *     ndisMCopyFromPacketToBuffer @ 0x1C0053F54 (ndisMCopyFromPacketToBuffer.c)
 *     NdisEnumerateFilterModules @ 0x1C0057280 (NdisEnumerateFilterModules.c)
 *     ndisFDoLoopbackNetBufferList @ 0x1C0058484 (ndisFDoLoopbackNetBufferList.c)
 *     NdisMWriteLogData @ 0x1C0059D00 (NdisMWriteLogData.c)
 *     ndisMGetLogData @ 0x1C0059FBC (ndisMGetLogData.c)
 *     NdisWriteEventLogEntry @ 0x1C005A990 (NdisWriteEventLogEntry.c)
 *     ndisGetPowerInfo @ 0x1C005BCF0 (ndisGetPowerInfo.c)
 *     ndisCheckIfTypeMismatch @ 0x1C005D498 (ndisCheckIfTypeMismatch.c)
 *     ndisMIndicateQosParametersChange @ 0x1C005DF1C (ndisMIndicateQosParametersChange.c)
 *     EthQueryGlobalFilterAddresses @ 0x1C00611C0 (EthQueryGlobalFilterAddresses.c)
 *     EthQueryOpenFilterAddresses @ 0x1C0061250 (EthQueryOpenFilterAddresses.c)
 *     ndisTopTcpConnectionOffloadStatus @ 0x1C0064D68 (ndisTopTcpConnectionOffloadStatus.c)
 *     NdisSetSessionCompartmentId @ 0x1C00653A0 (NdisSetSessionCompartmentId.c)
 *     ?ndisCopyPeriodicReceiveNbl@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@KPEAU1@@Z @ 0x1C006568C (-ndisCopyPeriodicReceiveNbl@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@KPEAU1@@Z.c)
 *     ndisLWM5IndicateReceive @ 0x1C0066094 (ndisLWM5IndicateReceive.c)
 *     ?ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x1C0067B74 (-ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_.c)
 *     ?ndisExpandStackTrace@@YAEPEAPEAU_NDIS_STACK_TRACE@@PEAU_RTL_DYNAMIC_HASH_TABLE_CONTEXT@@PEA_K@Z @ 0x1C006A108 (-ndisExpandStackTrace@@YAEPEAPEAU_NDIS_STACK_TRACE@@PEAU_RTL_DYNAMIC_HASH_TABLE_CONTEXT@@PEA_K@Z.c)
 *     ndisSSUpdateOidCacheValue @ 0x1C006C180 (ndisSSUpdateOidCacheValue.c)
 *     ?ndisGetPdInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C00706A8 (-ndisGetPdInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ndisMIndicatePDConfigChange @ 0x1C0071D64 (ndisMIndicatePDConfigChange.c)
 *     ndisOidPrePDQueryConfig @ 0x1C0072000 (ndisOidPrePDQueryConfig.c)
 *     Duplicate802_11AttachAttributesCommon @ 0x1C0073FC0 (Duplicate802_11AttachAttributesCommon.c)
 *     ?ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0099200 (-ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRodEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0099450 (-ndisNsiGetInterfaceRodEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRosInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0099A90 (-ndisNsiGetInterfaceRosInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0099D60 (-ndisNsiGetInterfaceRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRwInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C009A5E0 (-ndisNsiGetInterfaceRwInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ndisDeviceControlHandler @ 0x1C009B358 (ndisDeviceControlHandler.c)
 *     ndisQueryStatisticsOids @ 0x1C009BB34 (ndisQueryStatisticsOids.c)
 *     ndisOidPreEthAddress @ 0x1C009BEB0 (ndisOidPreEthAddress.c)
 *     ndisNotifyDevicePowerStateChange @ 0x1C009C754 (ndisNotifyDevicePowerStateChange.c)
 *     SeSddlSecurityDescriptorFromSDDL @ 0x1C009D29C (SeSddlSecurityDescriptorFromSDDL.c)
 *     SepSddlAddAceToAcl @ 0x1C009D74C (SepSddlAddAceToAcl.c)
 *     NdisWriteConfiguration @ 0x1C009D980 (NdisWriteConfiguration.c)
 *     NdisReadConfiguration @ 0x1C00A0620 (NdisReadConfiguration.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C00A17D0 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 *     ?reserve@?$KArray@E@Rtl@@QEAA_N_K@Z @ 0x1C00A1AC8 (-reserve@-$KArray@E@Rtl@@QEAA_N_K@Z.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C00A24F0 (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_L.c)
 *     ndisEnumerateFilterInstances @ 0x1C00A3A64 (ndisEnumerateFilterInstances.c)
 *     ?RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z @ 0x1C00A6B70 (-RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z.c)
 *     ?reserve@?$KArray@PEAX@Rtl@@QEAA_N_K@Z @ 0x1C00A6F7C (-reserve@-$KArray@PEAX@Rtl@@QEAA_N_K@Z.c)
 *     ??$QueryValueBlob@V_lambda_0a0f4a6e234c0d615b3ff6ea32737ef1_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING@@V_lambda_0a0f4a6e234c0d615b3ff6ea32737ef1_@@@Z @ 0x1C00A7A74 (--$QueryValueBlob@V_lambda_0a0f4a6e234c0d615b3ff6ea32737ef1_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z @ 0x1C00A8134 (-Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z.c)
 *     NdisOpenProtocolConfiguration @ 0x1C00A81A0 (NdisOpenProtocolConfiguration.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00A8C44 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ndisNotifyWmiBindUnbind @ 0x1C00A92DC (ndisNotifyWmiBindUnbind.c)
 *     NdisOpenConfigurationKeyByName @ 0x1C00A93E0 (NdisOpenConfigurationKeyByName.c)
 *     ndisQueryGuidData @ 0x1C00A976C (ndisQueryGuidData.c)
 *     ndisWmiRegister @ 0x1C00A9990 (ndisWmiRegister.c)
 *     ndisInitializeMiniportRestartAttributes @ 0x1C00A9F40 (ndisInitializeMiniportRestartAttributes.c)
 *     ndisQuerySupportedGuidToOidList @ 0x1C00AB448 (ndisQuerySupportedGuidToOidList.c)
 *     ndisPnPStartDevice @ 0x1C00ACA60 (ndisPnPStartDevice.c)
 *     ndisEtwRegisterGuids @ 0x1C00AD930 (ndisEtwRegisterGuids.c)
 *     ndisCreateSecurityDescriptor @ 0x1C00ADDA0 (ndisCreateSecurityDescriptor.c)
 *     ndisSetMiniportEthMulticastList @ 0x1C00AE4F0 (ndisSetMiniportEthMulticastList.c)
 *     ndisSetOpenEthMulticastList @ 0x1C00AE674 (ndisSetOpenEthMulticastList.c)
 *     ndisSaveParameters @ 0x1C00AEAD0 (ndisSaveParameters.c)
 *     NdisMSetMiniportAttributes @ 0x1C00AEC30 (NdisMSetMiniportAttributes.c)
 *     Ndis::BindRegistry::LoadNetworkInterfaceString @ 0x1C00AF6C4 (Ndis--BindRegistry--LoadNetworkInterfaceString.c)
 *     ndisOidPreRSSCaps @ 0x1C00AF8B0 (ndisOidPreRSSCaps.c)
 *     ndisMNotifyMachineName @ 0x1C00AF9AC (ndisMNotifyMachineName.c)
 *     ndisReadParameter @ 0x1C00AFF00 (ndisReadParameter.c)
 *     ndisCreateWoLPatternEntry @ 0x1C00B0FAC (ndisCreateWoLPatternEntry.c)
 *     ndisMSetOffloadAttributes @ 0x1C00B1D10 (ndisMSetOffloadAttributes.c)
 *     ndisMSetReceiveFilterAttributes @ 0x1C00B2864 (ndisMSetReceiveFilterAttributes.c)
 *     ndisMSetNicSwitchAttributes @ 0x1C00B2A98 (ndisMSetNicSwitchAttributes.c)
 *     ndisMSetRssCapabilities @ 0x1C00B2EC0 (ndisMSetRssCapabilities.c)
 *     ndisOidPreReceiveFilterCaps @ 0x1C00C3610 (ndisOidPreReceiveFilterCaps.c)
 *     ?ndisNsiGetIfRcvAddressRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00C418C (-ndisNsiGetIfRcvAddressRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NM_.c)
 *     ndisIfCreateInterfaceForiScsi @ 0x1C00C44B8 (ndisIfCreateInterfaceForiScsi.c)
 *     ndisOidPreFriendlyName @ 0x1C00C4FF0 (ndisOidPreFriendlyName.c)
 *     ndisOidPreMacAddress @ 0x1C00C52E0 (ndisOidPreMacAddress.c)
 *     ndisOidPreQueryTcpConnectionParameters @ 0x1C00C5AC4 (ndisOidPreQueryTcpConnectionParameters.c)
 *     ndisSetOpenEthAddDeleteMulticast @ 0x1C00C678C (ndisSetOpenEthAddDeleteMulticast.c)
 *     ndisSetRestoreMulticastList @ 0x1C00C6C08 (ndisSetRestoreMulticastList.c)
 *     ndisCreatePMPacketPattern @ 0x1C00C809C (ndisCreatePMPacketPattern.c)
 *     ndisCreatePMProtocolOffloadEntry @ 0x1C00C8170 (ndisCreatePMProtocolOffloadEntry.c)
 *     ndisCreateWakeUpPatternEntry @ 0x1C00C8204 (ndisCreateWakeUpPatternEntry.c)
 *     ndisQueryWolPatternList @ 0x1C00C9DDC (ndisQueryWolPatternList.c)
 *     ndisXlateAddPacketPatternToWolPatternOid @ 0x1C00CB324 (ndisXlateAddPacketPatternToWolPatternOid.c)
 *     ndisXlateAddWolPatternToPacketPatternOid @ 0x1C00CB4CC (ndisXlateAddWolPatternToPacketPatternOid.c)
 *     ndisXlateRemoveWolPatternToPacketPatternOid @ 0x1C00CB750 (ndisXlateRemoveWolPatternToPacketPatternOid.c)
 *     ndisXlateWakeUpPatternListToWolPatternList @ 0x1C00CB9D8 (ndisXlateWakeUpPatternListToWolPatternList.c)
 *     ndisXlateWolPatternListToWakeUpPatternList @ 0x1C00CBC40 (ndisXlateWolPatternListToWakeUpPatternList.c)
 *     WppTraceCallback @ 0x1C00CC250 (WppTraceCallback.c)
 *     ndisGetOrCreateFilterInstanceKey @ 0x1C00CE108 (ndisGetOrCreateFilterInstanceKey.c)
 *     ndisGetAdapterRssInfo @ 0x1C00CFA18 (ndisGetAdapterRssInfo.c)
 *     ndisGetHardwareInfo @ 0x1C00CFC8C (ndisGetHardwareInfo.c)
 *     ndisMSetQosAttributes @ 0x1C00D16A4 (ndisMSetQosAttributes.c)
 *     ndisMSetSriovAttributes @ 0x1C00D1860 (ndisMSetSriovAttributes.c)
 *     NdisInitializeWrapper @ 0x1C00D1B20 (NdisInitializeWrapper.c)
 *     NdisMQueryAdapterResources @ 0x1C00D2540 (NdisMQueryAdapterResources.c)
 *     ethAddOneOpenMulticastAddress @ 0x1C00D38CC (ethAddOneOpenMulticastAddress.c)
 *     ethDeleteOneOpenMulticastAddress @ 0x1C00D3AB4 (ethDeleteOneOpenMulticastAddress.c)
 *     ndisWmiExecuteMethod @ 0x1C00D5370 (ndisWmiExecuteMethod.c)
 *     ndisWmiQueryAllData @ 0x1C00D5C4C (ndisWmiQueryAllData.c)
 *     ndisWmiXlateEnumNdisRecvQueuesToWmiRecvQueues @ 0x1C00D6234 (ndisWmiXlateEnumNdisRecvQueuesToWmiRecvQueues.c)
 *     ?ndisPcwAddCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z @ 0x1C00D7B68 (-ndisPcwAddCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z.c)
 *     ndisIovCreateVPort @ 0x1C00D8DB8 (ndisIovCreateVPort.c)
 *     ndisIovReadSwitchConfiguration @ 0x1C00D9420 (ndisIovReadSwitchConfiguration.c)
 *     ndisOidPreIovNicSwitchParameters @ 0x1C00DA190 (ndisOidPreIovNicSwitchParameters.c)
 *     ndisSriovInterfaceReadVFConfig @ 0x1C00DB990 (ndisSriovInterfaceReadVFConfig.c)
 *     ndisSriovInterfaceReadVfConfigBlock @ 0x1C00DBB30 (ndisSriovInterfaceReadVfConfigBlock.c)
 *     ndisSriovInterfaceWriteVFConfig @ 0x1C00DBF20 (ndisSriovInterfaceWriteVFConfig.c)
 *     ndisSriovInterfaceWriteVfConfigBlock @ 0x1C00DC0B0 (ndisSriovInterfaceWriteVfConfigBlock.c)
 *     ndisSSGetCachedOidValue @ 0x1C00DC3B4 (ndisSSGetCachedOidValue.c)
 *     ?NdisPDPISetReceiveFilter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_FILTER_PARAMETERS@@PEAPEAUNDIS_PD_FILTER_HANDLE__@@@Z @ 0x1C00DF770 (-NdisPDPISetReceiveFilter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_FILTER_PARAMETERS@@PEA.c)
 *     NdisMRegisterWdiMiniportDriver @ 0x1C00E3B60 (NdisMRegisterWdiMiniportDriver.c)
 *     CmRegUtilUcValueSetUcString @ 0x1C00E48B0 (CmRegUtilUcValueSetUcString.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00E6AE0 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ndisPnPRemoveDevice @ 0x1C00E6FA8 (ndisPnPRemoveDevice.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00E93B4 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ndisMInitializeAdapter @ 0x1C00EA374 (ndisMInitializeAdapter.c)
 *     ndisHandlePnPRequest @ 0x1C00EBC18 (ndisHandlePnPRequest.c)
 *     ndisEnumerateInterfaces @ 0x1C00EBFE0 (ndisEnumerateInterfaces.c)
 *     ndisEnumerateInterfaces32 @ 0x1C00F2580 (ndisEnumerateInterfaces32.c)
 *     NdisMRegisterDevice @ 0x1C00F4D50 (NdisMRegisterDevice.c)
 *     ndisRegisterMiniportDriver @ 0x1C00F5618 (ndisRegisterMiniportDriver.c)
 *     NdisCoAssignInstanceName @ 0x1C00F72C0 (NdisCoAssignInstanceName.c)
 *     ndisIfInitialize @ 0x1C0102000 (ndisIfInitialize.c)
 *     ndisAddMediaTypeToArray @ 0x1C0106410 (ndisAddMediaTypeToArray.c)
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
