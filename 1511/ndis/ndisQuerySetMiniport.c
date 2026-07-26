/*
 * XREFs of ndisQuerySetMiniport @ 0x1C00059C8
 * Callers:
 *     ndisQueueOidRequest @ 0x1C0007420 (ndisQueueOidRequest.c)
 *     ndisOidTranslateBetweenOids @ 0x1C00092E8 (ndisOidTranslateBetweenOids.c)
 *     ndisQueryDeviceOid @ 0x1C009383C (ndisQueryDeviceOid.c)
 *     ndisDeviceControlHandler @ 0x1C0093CE0 (ndisDeviceControlHandler.c)
 *     ?ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0094F08 (-ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ndisQuerySetMiniportDeviceState @ 0x1C0097A4C (ndisQuerySetMiniportDeviceState.c)
 *     ndisQueryGuidDataSize @ 0x1C009F3C4 (ndisQueryGuidDataSize.c)
 *     ndisQueryGuidData @ 0x1C009F550 (ndisQueryGuidData.c)
 *     ndisQueryCustomGuids @ 0x1C00A8CA4 (ndisQueryCustomGuids.c)
 *     ndisIovCreateDefaultNicSwitch @ 0x1C00AB088 (ndisIovCreateDefaultNicSwitch.c)
 *     ndisMDoMiniportOp @ 0x1C00ABE78 (ndisMDoMiniportOp.c)
 *     ?ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00BEF0C (-ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BL.c)
 *     ndisQueuedUpdatePMCapabilities @ 0x1C00C4500 (ndisQueuedUpdatePMCapabilities.c)
 *     ndisRejectUnsupportedPMOffloads @ 0x1C00C467C (ndisRejectUnsupportedPMOffloads.c)
 *     ndisRejectUnsupportedWoLPatterns @ 0x1C00C487C (ndisRejectUnsupportedWoLPatterns.c)
 *     ndisMDoProtocolRequest @ 0x1C00C9B1C (ndisMDoProtocolRequest.c)
 *     ndisMethodDeviceOid @ 0x1C00CA8C0 (ndisMethodDeviceOid.c)
 *     ndisMediaDisconnectWorker @ 0x1C00CE7D0 (ndisMediaDisconnectWorker.c)
 *     ndisQueryMediaStatus @ 0x1C00CEA1C (ndisQueryMediaStatus.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00CEB60 (ndisWmiChangeSingleInstance.c)
 *     ndisWmiExecuteMethod @ 0x1C00CF320 (ndisWmiExecuteMethod.c)
 *     ndisDisableRsc @ 0x1C00D0544 (ndisDisableRsc.c)
 *     ndisGetMiniportOffloadCapability @ 0x1C00D06A4 (ndisGetMiniportOffloadCapability.c)
 *     ndisNDKHandleWmiChangeRequest @ 0x1C00D1140 (ndisNDKHandleWmiChangeRequest.c)
 *     ndisNdkPcwCollectMiniportStats @ 0x1C00D147C (ndisNdkPcwCollectMiniportStats.c)
 *     ?ndisPcwQueryPcfMatchCount@@YA_KPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00D2410 (-ndisPcwQueryPcfMatchCount@@YA_KPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisIovInvalidateBlockCompletion @ 0x1C00D3330 (ndisIovInvalidateBlockCompletion.c)
 *     ndisSriovGetResourceForBar @ 0x1C00D5580 (ndisSriovGetResourceForBar.c)
 *     ndisSriovInterfaceGetVendorAndDeviceIds @ 0x1C00D57A0 (ndisSriovInterfaceGetVendorAndDeviceIds.c)
 *     ndisSriovInterfaceQueryProbedBars @ 0x1C00D58E0 (ndisSriovInterfaceQueryProbedBars.c)
 *     ndisSriovInterfaceReadVFConfig @ 0x1C00D5A60 (ndisSriovInterfaceReadVFConfig.c)
 *     ndisSriovInterfaceReadVfConfigBlock @ 0x1C00D5C00 (ndisSriovInterfaceReadVfConfigBlock.c)
 *     ndisSriovInterfaceResetVF @ 0x1C00D5DA0 (ndisSriovInterfaceResetVF.c)
 *     ndisSriovInterfaceSetVfPowerState @ 0x1C00D5ED0 (ndisSriovInterfaceSetVfPowerState.c)
 *     ndisSriovInterfaceWriteVFConfig @ 0x1C00D6000 (ndisSriovInterfaceWriteVFConfig.c)
 *     ndisSriovInterfaceWriteVfConfigBlock @ 0x1C00D6190 (ndisSriovInterfaceWriteVfConfigBlock.c)
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00D6F28 (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisMPowerPolicy @ 0x1C00DFB64 (ndisMPowerPolicy.c)
 * Callees:
 *     ndisQuerySetMiniportEx @ 0x1C00059E8 (ndisQuerySetMiniportEx.c)
 */

__int64 __fastcall ndisQuerySetMiniport(void *a1, void *a2, struct _NDIS_OID_REQUEST *a3, __int64 a4, __int64 a5)
{
  return ndisQuerySetMiniportEx(a1, a2, a3, a5, 0LL);
}
