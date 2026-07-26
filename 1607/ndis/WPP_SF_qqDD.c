/*
 * XREFs of WPP_SF_qqDD @ 0x1C003C3D8
 * Callers:
 *     ndisMDoOidRequest @ 0x1C000B230 (ndisMDoOidRequest.c)
 *     ndisFDoOidRequestInternal @ 0x1C000B8D0 (ndisFDoOidRequestInternal.c)
 *     ndisSetMiniportRSSParameters @ 0x1C002447C (ndisSetMiniportRSSParameters.c)
 *     ndisSetOpenRSSParameters @ 0x1C0024598 (ndisSetOpenRSSParameters.c)
 *     ndisOidPreOffloadCaps @ 0x1C0046E50 (ndisOidPreOffloadCaps.c)
 *     ndisPreTaskOffloadQuery @ 0x1C00478E4 (ndisPreTaskOffloadQuery.c)
 *     ndisInvokeNetPnPEvent @ 0x1C00A8528 (ndisInvokeNetPnPEvent.c)
 *     ndisSetMiniportEthMulticastList @ 0x1C00AE4F0 (ndisSetMiniportEthMulticastList.c)
 *     ndisOidPreEthMulticastList @ 0x1C00AE5B0 (ndisOidPreEthMulticastList.c)
 *     ndisOidPreRSSCaps @ 0x1C00AF8B0 (ndisOidPreRSSCaps.c)
 *     ndisOidPreOffloadEncapsulation @ 0x1C00B1B00 (ndisOidPreOffloadEncapsulation.c)
 *     ndisOidPreRSSParameters @ 0x1C00B1C30 (ndisOidPreRSSParameters.c)
 *     ndisOidPreNicSwitchCaps @ 0x1C00C3190 (ndisOidPreNicSwitchCaps.c)
 *     ndisOidPreRcvFilterGlobalParameters @ 0x1C00C3400 (ndisOidPreRcvFilterGlobalParameters.c)
 *     ndisOidPreReceiveFilterCaps @ 0x1C00C3610 (ndisOidPreReceiveFilterCaps.c)
 *     ndisOidPreTaskOffload @ 0x1C00C5C90 (ndisOidPreTaskOffload.c)
 *     ndisOidPreIovAllocateVF @ 0x1C00D95F0 (ndisOidPreIovAllocateVF.c)
 *     ndisOidPreIovCreateVPort @ 0x1C00D9AF0 (ndisOidPreIovCreateVPort.c)
 *     ndisOidPreIovNicSwitchParameters @ 0x1C00DA190 (ndisOidPreIovNicSwitchParameters.c)
 *     ndisOidPreIovVPortParameters @ 0x1C00DAC60 (ndisOidPreIovVPortParameters.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00E93B4 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqDD(unsigned __int16 a1, const struct _GUID *a2, ...)
{
  va_list va; // [rsp+80h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(a2, a1, va);
}
