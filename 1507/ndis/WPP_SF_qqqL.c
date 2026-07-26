/*
 * XREFs of WPP_SF_qqqL @ 0x1C003F558
 * Callers:
 *     ndisPMAddProtocolOffload @ 0x1C0002C38 (ndisPMAddProtocolOffload.c)
 *     ndisPMAddWOLPattern @ 0x1C0002D6C (ndisPMAddWOLPattern.c)
 *     ndisQuerySetMiniportEx @ 0x1C00036D0 (ndisQuerySetMiniportEx.c)
 *     ndisOidPMAddRemove @ 0x1C0008CC4 (ndisOidPMAddRemove.c)
 *     ?ndisIfCreateNetworkBlock@@YAJPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEAU_GUID@@PEAU_NDIS_NSI_NETWORK_RW@@PEAPEAU_NDIS_IF_NETWORK_BLOCK@@@Z @ 0x1C001287C (-ndisIfCreateNetworkBlock@@YAJPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEAU_GUID@@PEAU_NDIS_NSI_NETWORK_R.c)
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C001AED4 (ndisIfUpdateInterfaceOnInitialize.c)
 *     ndisPostOpenSetMulticastList @ 0x1C001B3D8 (ndisPostOpenSetMulticastList.c)
 *     ndisPostSetOpenRSSParameters @ 0x1C001FBE4 (ndisPostSetOpenRSSParameters.c)
 *     ndisCancelOidRequestInternal @ 0x1C003F6F0 (ndisCancelOidRequestInternal.c)
 *     ndisCompleteLegacyRequest @ 0x1C003FB50 (ndisCompleteLegacyRequest.c)
 *     ndisOidPostTaskOffload @ 0x1C0041FB0 (ndisOidPostTaskOffload.c)
 *     ndisQueryWakeUpPatternList @ 0x1C0045580 (ndisQueryWakeUpPatternList.c)
 *     NdisCmRegisterAddressFamilyEx @ 0x1C004C300 (NdisCmRegisterAddressFamilyEx.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C0056A24 (ndisOpenAdapterLegacyProtocol.c)
 *     ?ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C009756C (-ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisNsiGetInterfaceRwInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00977B0 (-ndisNsiGetInterfaceRwInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0097EB0 (-ndisNsiGetInterfaceRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ndisOidPrePacketFilter @ 0x1C00A0CF0 (ndisOidPrePacketFilter.c)
 *     ?ndisNsiClientParameterChangeHandler@@YAXPEAXPEAU_NSI_KEYSTRUCT_DESC@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NSI_NOTIFICATION@@@Z @ 0x1C00B0170 (-ndisNsiClientParameterChangeHandler@@YAXPEAXPEAU_NSI_KEYSTRUCT_DESC@@PEAU_NSI_SINGLE_PARAM_DESC.c)
 *     ?ndisNsiGetIfRcvAddressRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00C610C (-ndisNsiGetIfRcvAddressRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NM_.c)
 *     ndisOidPrePMProtocolOffloadList @ 0x1C00CA120 (ndisOidPrePMProtocolOffloadList.c)
 *     ndisOidPrePMWOLPatternList @ 0x1C00CA530 (ndisOidPrePMWOLPatternList.c)
 *     NdisIMInitializeDeviceInstanceEx @ 0x1C00CDEB0 (NdisIMInitializeDeviceInstanceEx.c)
 *     ndisIMQueueDeviceInstance @ 0x1C00CE588 (ndisIMQueueDeviceInstance.c)
 *     ndisCreateFilterInstanceRegistry @ 0x1C00CF19C (ndisCreateFilterInstanceRegistry.c)
 *     ndisGetOrCreateFilterInstanceKey @ 0x1C00CF3E0 (ndisGetOrCreateFilterInstanceKey.c)
 *     ndisSetAllFilterDefaultParameters @ 0x1C00CFB74 (ndisSetAllFilterDefaultParameters.c)
 *     ndisSetFilterDefaultParameter @ 0x1C00CFDE8 (ndisSetFilterDefaultParameter.c)
 *     ?NdisPDAllocateBufferSet@@YAJPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@KGPEAKKPEAPEAUPD_BUFFER_SET_HANDLE__@@@Z @ 0x1C00DE1D0 (-NdisPDAllocateBufferSet@@YAJPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@KGPEAKKPEAPEAUPD_BUFFER_SE.c)
 *     ?NdisPDStartEC@@YAJPEAUPD_CLIENT_HANDLE__@@PEAPEAUPD_EC_HANDLE__@@@Z @ 0x1C00E0290 (-NdisPDStartEC@@YAJPEAUPD_CLIENT_HANDLE__@@PEAPEAUPD_EC_HANDLE__@@@Z.c)
 *     ndisMOpenAdapter @ 0x1C00E8200 (ndisMOpenAdapter.c)
 *     NdisOpenAdapterEx @ 0x1C00E9A60 (NdisOpenAdapterEx.c)
 *     NdisCmRegisterAddressFamily @ 0x1C00F2CB0 (NdisCmRegisterAddressFamily.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049420 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqqL(unsigned __int16 a1, const struct _GUID *a2, ...)
{
  va_list va; // [rsp+80h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(a2, a1, va);
}
