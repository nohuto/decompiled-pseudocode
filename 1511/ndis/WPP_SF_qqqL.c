/*
 * XREFs of WPP_SF_qqqL @ 0x1C0040C54
 * Callers:
 *     ndisPMAddProtocolOffload @ 0x1C00010F8 (ndisPMAddProtocolOffload.c)
 *     ndisPMAddWOLPattern @ 0x1C00048A8 (ndisPMAddWOLPattern.c)
 *     ndisQuerySetMiniportEx @ 0x1C00059E8 (ndisQuerySetMiniportEx.c)
 *     ndisOidPMAddRemove @ 0x1C000B4D0 (ndisOidPMAddRemove.c)
 *     ndisPostOpenSetMulticastList @ 0x1C0010618 (ndisPostOpenSetMulticastList.c)
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C001F5D8 (ndisIfUpdateInterfaceOnInitialize.c)
 *     ?ndisIfCreateNetworkBlock@@YAJPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEAU_GUID@@PEAU_NDIS_NSI_NETWORK_RW@@PEAPEAU_NDIS_IF_NETWORK_BLOCK@@@Z @ 0x1C0020810 (-ndisIfCreateNetworkBlock@@YAJPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEAU_GUID@@PEAU_NDIS_NSI_NETWORK_R.c)
 *     ndisPostSetOpenRSSParameters @ 0x1C0023660 (ndisPostSetOpenRSSParameters.c)
 *     ndisCancelOidRequestInternal @ 0x1C0040DEC (ndisCancelOidRequestInternal.c)
 *     ndisCompleteLegacyRequest @ 0x1C004124C (ndisCompleteLegacyRequest.c)
 *     ndisOidPostTaskOffload @ 0x1C0043570 (ndisOidPostTaskOffload.c)
 *     ndisQueryWakeUpPatternList @ 0x1C0046B10 (ndisQueryWakeUpPatternList.c)
 *     NdisCmRegisterAddressFamilyEx @ 0x1C004CB40 (NdisCmRegisterAddressFamilyEx.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C00568B4 (ndisOpenAdapterLegacyProtocol.c)
 *     ?ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0094F08 (-ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisNsiGetInterfaceRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00959C0 (-ndisNsiGetInterfaceRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRwInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0095F04 (-ndisNsiGetInterfaceRwInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ndisOidPrePacketFilter @ 0x1C009EC10 (ndisOidPrePacketFilter.c)
 *     ?ndisNsiClientParameterChangeHandler@@YAXPEAXPEAU_NSI_KEYSTRUCT_DESC@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NSI_NOTIFICATION@@@Z @ 0x1C00AA9B0 (-ndisNsiClientParameterChangeHandler@@YAXPEAXPEAU_NSI_KEYSTRUCT_DESC@@PEAU_NSI_SINGLE_PARAM_DESC.c)
 *     ?ndisNsiGetIfRcvAddressRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00BF47C (-ndisNsiGetIfRcvAddressRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NM_.c)
 *     ndisOidPrePMProtocolOffloadList @ 0x1C00C3540 (ndisOidPrePMProtocolOffloadList.c)
 *     ndisOidPrePMWOLPatternList @ 0x1C00C3950 (ndisOidPrePMWOLPatternList.c)
 *     NdisIMInitializeDeviceInstanceEx @ 0x1C00C72C0 (NdisIMInitializeDeviceInstanceEx.c)
 *     ndisIMQueueDeviceInstance @ 0x1C00C7998 (ndisIMQueueDeviceInstance.c)
 *     ndisCreateFilterInstanceRegistry @ 0x1C00C85AC (ndisCreateFilterInstanceRegistry.c)
 *     ndisGetOrCreateFilterInstanceKey @ 0x1C00C87F0 (ndisGetOrCreateFilterInstanceKey.c)
 *     ndisSetAllFilterDefaultParameters @ 0x1C00C8F84 (ndisSetAllFilterDefaultParameters.c)
 *     ndisSetFilterDefaultParameter @ 0x1C00C91F8 (ndisSetFilterDefaultParameter.c)
 *     ?NdisPDAllocateBufferSet@@YAJPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@KGPEAKKPEAPEAUPD_BUFFER_SET_HANDLE__@@@Z @ 0x1C00D7B10 (-NdisPDAllocateBufferSet@@YAJPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@KGPEAKKPEAPEAUPD_BUFFER_SE.c)
 *     ?NdisPDStartEC@@YAJPEAUPD_CLIENT_HANDLE__@@PEAPEAUPD_EC_HANDLE__@@@Z @ 0x1C00D9CF0 (-NdisPDStartEC@@YAJPEAUPD_CLIENT_HANDLE__@@PEAPEAUPD_EC_HANDLE__@@@Z.c)
 *     ndisMOpenAdapter @ 0x1C00E340C (ndisMOpenAdapter.c)
 *     NdisOpenAdapterEx @ 0x1C00E3930 (NdisOpenAdapterEx.c)
 *     NdisCmRegisterAddressFamily @ 0x1C00ECC90 (NdisCmRegisterAddressFamily.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049CC0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqqL(unsigned __int16 a1, const struct _GUID *a2, ...)
{
  va_list va; // [rsp+80h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(a2, a1, va);
}
