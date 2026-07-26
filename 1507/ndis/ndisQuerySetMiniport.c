/*
 * XREFs of ndisQuerySetMiniport @ 0x1C00036AC
 * Callers:
 *     ndisQueueOidRequest @ 0x1C0005360 (ndisQueueOidRequest.c)
 *     ndisOidTranslateBetweenOids @ 0x1C0007CFC (ndisOidTranslateBetweenOids.c)
 *     ndisQueryDeviceOid @ 0x1C0096104 (ndisQueryDeviceOid.c)
 *     ndisDeviceControlHandler @ 0x1C009652C (ndisDeviceControlHandler.c)
 *     ?ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C009756C (-ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ndisQuerySetMiniportDeviceState @ 0x1C009B1E4 (ndisQuerySetMiniportDeviceState.c)
 *     ndisQueryGuidDataSize @ 0x1C00A835C (ndisQueryGuidDataSize.c)
 *     ndisQueryGuidData @ 0x1C00A84E8 (ndisQueryGuidData.c)
 *     ndisQueryCustomGuids @ 0x1C00AB38C (ndisQueryCustomGuids.c)
 *     ndisIovCreateDefaultNicSwitch @ 0x1C00ABC88 (ndisIovCreateDefaultNicSwitch.c)
 *     ndisMDoMiniportOp @ 0x1C00ACC10 (ndisMDoMiniportOp.c)
 *     ?ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00C5DDC (-ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BL.c)
 *     ndisQueuedUpdatePMCapabilities @ 0x1C00CB0E0 (ndisQueuedUpdatePMCapabilities.c)
 *     ndisRejectUnsupportedPMOffloads @ 0x1C00CB25C (ndisRejectUnsupportedPMOffloads.c)
 *     ndisRejectUnsupportedWoLPatterns @ 0x1C00CB45C (ndisRejectUnsupportedWoLPatterns.c)
 *     ndisMDoProtocolRequest @ 0x1C00D070C (ndisMDoProtocolRequest.c)
 *     ndisMethodDeviceOid @ 0x1C00D155C (ndisMethodDeviceOid.c)
 *     ndisMediaDisconnectWorker @ 0x1C00D5010 (ndisMediaDisconnectWorker.c)
 *     ndisQueryMediaStatus @ 0x1C00D525C (ndisQueryMediaStatus.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00D53A0 (ndisWmiChangeSingleInstance.c)
 *     ndisWmiExecuteMethod @ 0x1C00D5B60 (ndisWmiExecuteMethod.c)
 *     ndisDisableRsc @ 0x1C00D6ED4 (ndisDisableRsc.c)
 *     ndisGetMiniportOffloadCapability @ 0x1C00D7034 (ndisGetMiniportOffloadCapability.c)
 *     ndisNDKHandleWmiChangeRequest @ 0x1C00D7AD0 (ndisNDKHandleWmiChangeRequest.c)
 *     ndisNdkPcwCollectMiniportStats @ 0x1C00D7E0C (ndisNdkPcwCollectMiniportStats.c)
 *     ?ndisPcwQueryPcfMatchCount@@YA_KPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00D8D10 (-ndisPcwQueryPcfMatchCount@@YA_KPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisIovInvalidateBlockCompletion @ 0x1C00D9BF0 (ndisIovInvalidateBlockCompletion.c)
 *     ndisSriovGetResourceForBar @ 0x1C00DBC30 (ndisSriovGetResourceForBar.c)
 *     ndisSriovInterfaceGetVendorAndDeviceIds @ 0x1C00DBE50 (ndisSriovInterfaceGetVendorAndDeviceIds.c)
 *     ndisSriovInterfaceQueryProbedBars @ 0x1C00DBF90 (ndisSriovInterfaceQueryProbedBars.c)
 *     ndisSriovInterfaceReadVFConfig @ 0x1C00DC110 (ndisSriovInterfaceReadVFConfig.c)
 *     ndisSriovInterfaceReadVfConfigBlock @ 0x1C00DC2B0 (ndisSriovInterfaceReadVfConfigBlock.c)
 *     ndisSriovInterfaceResetVF @ 0x1C00DC450 (ndisSriovInterfaceResetVF.c)
 *     ndisSriovInterfaceSetVfPowerState @ 0x1C00DC580 (ndisSriovInterfaceSetVfPowerState.c)
 *     ndisSriovInterfaceWriteVFConfig @ 0x1C00DC6B0 (ndisSriovInterfaceWriteVFConfig.c)
 *     ndisSriovInterfaceWriteVfConfigBlock @ 0x1C00DC840 (ndisSriovInterfaceWriteVfConfigBlock.c)
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00DD5D8 (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisMPowerPolicy @ 0x1C00E6244 (ndisMPowerPolicy.c)
 * Callees:
 *     ndisQuerySetMiniportEx @ 0x1C00036D0 (ndisQuerySetMiniportEx.c)
 */

__int64 __fastcall ndisQuerySetMiniport(void *a1, void *a2, struct _NDIS_OID_REQUEST *a3, __int64 a4, __int64 a5)
{
  return ndisQuerySetMiniportEx(a1, a2, a3, a5, 0LL);
}
