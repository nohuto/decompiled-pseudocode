/*
 * XREFs of WPP_SF_qqqDD @ 0x1C0044730
 * Callers:
 *     ndisMOidRequest @ 0x1C000C910 (ndisMOidRequest.c)
 *     ndisSetupNdis6OpenHandlers @ 0x1C0018BF4 (ndisSetupNdis6OpenHandlers.c)
 *     ndisSetOpenEthMulticastList @ 0x1C00AE674 (ndisSetOpenEthMulticastList.c)
 *     ndisSetOpenEthAddDeleteMulticast @ 0x1C00C678C (ndisSetOpenEthAddDeleteMulticast.c)
 *     ndisOidPreIovCreateNicSwitch @ 0x1C00D9930 (ndisOidPreIovCreateNicSwitch.c)
 *     ndisOidPreIovDeleteNicSwitch @ 0x1C00D9BF0 (ndisOidPreIovDeleteNicSwitch.c)
 *     ndisOidPreIovInvalidateConfigBlock @ 0x1C00DA0D0 (ndisOidPreIovInvalidateConfigBlock.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqqDD(unsigned __int16 a1, const struct _GUID *a2, ...)
{
  va_list va; // [rsp+90h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(a2, a1, va);
}
