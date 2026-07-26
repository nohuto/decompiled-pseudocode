/*
 * XREFs of WPP_SF_qLqL @ 0x1C0053664
 * Callers:
 *     ndisFDoOidRequestInternal @ 0x1C0007FE0 (ndisFDoOidRequestInternal.c)
 *     ndisOidRequestComplete @ 0x1C0008250 (ndisOidRequestComplete.c)
 *     ndisPreProcessOid @ 0x1C0008850 (ndisPreProcessOid.c)
 *     ndisInvokeOidRequestComplete @ 0x1C000FEC0 (ndisInvokeOidRequestComplete.c)
 *     ndisFInvokeDirectOidRequest @ 0x1C0053DD4 (ndisFInvokeDirectOidRequest.c)
 *     ndisFInvokeDirectOidRequestComplete @ 0x1C0053EEC (ndisFInvokeDirectOidRequestComplete.c)
 *     ndisInvokeDirectOidRequestComplete @ 0x1C0056710 (ndisInvokeDirectOidRequestComplete.c)
 *     ?ndisNsiPostGetInterfaceRodInformation@@YAXPEAU_NDIS_IF_BLOCK@@IKPEAX@Z @ 0x1C00BF69C (-ndisNsiPostGetInterfaceRodInformation@@YAXPEAU_NDIS_IF_BLOCK@@IKPEAX@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049CC0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qLqL(unsigned __int16 a1, const struct _GUID *a2, __int64 a3, int a4)
{
  __int64 v4; // [rsp+80h] [rbp+18h] BYREF
  int v5; // [rsp+88h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(a2, a1, &v4);
}
