/*
 * XREFs of WPP_SF_qqqDD @ 0x1C003F4F0
 * Callers:
 *     ndisMOidRequest @ 0x1C0007ED0 (ndisMOidRequest.c)
 *     ndisSetupNdis6OpenHandlers @ 0x1C0018E70 (ndisSetupNdis6OpenHandlers.c)
 *     ndisSetOpenEthAddDeleteMulticast @ 0x1C009E144 (ndisSetOpenEthAddDeleteMulticast.c)
 *     ndisSetOpenEthMulticastList @ 0x1C00AD9A4 (ndisSetOpenEthMulticastList.c)
 *     ndisOidPreIovCreateNicSwitch @ 0x1C00DA2B0 (ndisOidPreIovCreateNicSwitch.c)
 *     ndisOidPreIovDeleteNicSwitch @ 0x1C00DA460 (ndisOidPreIovDeleteNicSwitch.c)
 *     ndisOidPreIovInvalidateConfigBlock @ 0x1C00DA890 (ndisOidPreIovInvalidateConfigBlock.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049420 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqqDD(unsigned __int16 a1, const struct _GUID *a2, ...)
{
  va_list va; // [rsp+90h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(a2, a1, va);
}
