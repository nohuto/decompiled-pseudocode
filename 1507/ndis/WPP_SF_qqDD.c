/*
 * XREFs of WPP_SF_qqDD @ 0x1C0037774
 * Callers:
 *     ndisFDoOidRequestInternal @ 0x1C0006A40 (ndisFDoOidRequestInternal.c)
 *     ndisMDoOidRequest @ 0x1C00078B0 (ndisMDoOidRequest.c)
 *     ndisSetMiniportRSSParameters @ 0x1C001EF98 (ndisSetMiniportRSSParameters.c)
 *     ndisSetOpenRSSParameters @ 0x1C001F0A8 (ndisSetOpenRSSParameters.c)
 *     ndisOidPreOffloadCaps @ 0x1C0042380 (ndisOidPreOffloadCaps.c)
 *     ndisPreTaskOffloadQuery @ 0x1C0042E14 (ndisPreTaskOffloadQuery.c)
 *     ndisDeliverNetPnPEventSynchronously @ 0x1C00A1940 (ndisDeliverNetPnPEventSynchronously.c)
 *     ndisSetMiniportEthMulticastList @ 0x1C00AD820 (ndisSetMiniportEthMulticastList.c)
 *     ndisOidPreEthMulticastList @ 0x1C00AD8E0 (ndisOidPreEthMulticastList.c)
 *     ndisOidPreOffloadEncapsulation @ 0x1C00AFCD0 (ndisOidPreOffloadEncapsulation.c)
 *     ndisOidPreRSSParameters @ 0x1C00B0AC0 (ndisOidPreRSSParameters.c)
 *     ndisOidPreRSSCaps @ 0x1C00B1140 (ndisOidPreRSSCaps.c)
 *     ndisOidPreNicSwitchCaps @ 0x1C00C55B0 (ndisOidPreNicSwitchCaps.c)
 *     ndisOidPreRcvFilterGlobalParameters @ 0x1C00C57E0 (ndisOidPreRcvFilterGlobalParameters.c)
 *     ndisOidPreReceiveFilterCaps @ 0x1C00C59F0 (ndisOidPreReceiveFilterCaps.c)
 *     ndisOidPreTaskOffload @ 0x1C00C7BA0 (ndisOidPreTaskOffload.c)
 *     ndisOidPreIovAllocateVF @ 0x1C00D9F70 (ndisOidPreIovAllocateVF.c)
 *     ndisOidPreIovCreateVPort @ 0x1C00DA370 (ndisOidPreIovCreateVPort.c)
 *     ndisOidPreIovNicSwitchParameters @ 0x1C00DA950 (ndisOidPreIovNicSwitchParameters.c)
 *     ndisOidPreIovVPortParameters @ 0x1C00DB3E0 (ndisOidPreIovVPortParameters.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00E88AC (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049420 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqDD(unsigned __int16 a1, const struct _GUID *a2, ...)
{
  va_list va; // [rsp+80h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(a2, a1, va);
}
