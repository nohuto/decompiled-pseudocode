/*
 * XREFs of WPP_SF_qqqDD @ 0x1C0040BEC
 * Callers:
 *     ndisMOidRequest @ 0x1C000A1C0 (ndisMOidRequest.c)
 *     ndisSetupNdis6OpenHandlers @ 0x1C001AB18 (ndisSetupNdis6OpenHandlers.c)
 *     ndisSetOpenEthMulticastList @ 0x1C0096B84 (ndisSetOpenEthMulticastList.c)
 *     ndisSetOpenEthAddDeleteMulticast @ 0x1C00AD9B4 (ndisSetOpenEthAddDeleteMulticast.c)
 *     ndisOidPreIovCreateNicSwitch @ 0x1C00D39F0 (ndisOidPreIovCreateNicSwitch.c)
 *     ndisOidPreIovDeleteNicSwitch @ 0x1C00D3CB0 (ndisOidPreIovDeleteNicSwitch.c)
 *     ndisOidPreIovInvalidateConfigBlock @ 0x1C00D4190 (ndisOidPreIovInvalidateConfigBlock.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049CC0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqqDD(unsigned __int16 a1, const struct _GUID *a2, ...)
{
  va_list va; // [rsp+90h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(a2, a1, va);
}
