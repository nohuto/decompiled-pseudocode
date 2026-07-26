/*
 * XREFs of WPP_SF_qqqq @ 0x1C003F5B4
 * Callers:
 *     ndisQueueOidRequest @ 0x1C0005360 (ndisQueueOidRequest.c)
 *     ndisDoDirectOidRequest @ 0x1C003FF54 (ndisDoDirectOidRequest.c)
 *     ndisOidPreEthMulticastOid @ 0x1C009E0B0 (ndisOidPreEthMulticastOid.c)
 *     ndisOidPreEthMulticastList @ 0x1C00AD8E0 (ndisOidPreEthMulticastList.c)
 *     ndisOidPreIovCreateNicSwitch @ 0x1C00DA2B0 (ndisOidPreIovCreateNicSwitch.c)
 *     ndisOidPreIovDeleteNicSwitch @ 0x1C00DA460 (ndisOidPreIovDeleteNicSwitch.c)
 *     ndisOidPreIovInvalidateConfigBlock @ 0x1C00DA890 (ndisOidPreIovInvalidateConfigBlock.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049420 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqqq(unsigned __int16 a1, const struct _GUID *a2, ...)
{
  va_list va; // [rsp+80h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(a2, a1, va);
}
