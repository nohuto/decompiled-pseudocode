/*
 * XREFs of WPP_SF_qLqL @ 0x1C0053274
 * Callers:
 *     ndisFDoOidRequestInternal @ 0x1C0006A40 (ndisFDoOidRequestInternal.c)
 *     ndisOidRequestComplete @ 0x1C0006CB0 (ndisOidRequestComplete.c)
 *     ndisPreProcessOid @ 0x1C0007250 (ndisPreProcessOid.c)
 *     ndisInvokeOidRequestComplete @ 0x1C000DCA0 (ndisInvokeOidRequestComplete.c)
 *     ndisFInvokeDirectOidRequest @ 0x1C00539E4 (ndisFInvokeDirectOidRequest.c)
 *     ndisFInvokeDirectOidRequestComplete @ 0x1C0053AFC (ndisFInvokeDirectOidRequestComplete.c)
 *     ndisInvokeDirectOidRequestComplete @ 0x1C0056880 (ndisInvokeDirectOidRequestComplete.c)
 *     ?ndisNsiPostGetInterfaceRodInformation@@YAXPEAU_NDIS_IF_BLOCK@@IKPEAX@Z @ 0x1C00C631C (-ndisNsiPostGetInterfaceRodInformation@@YAXPEAU_NDIS_IF_BLOCK@@IKPEAX@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049420 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qLqL(unsigned __int16 a1, const struct _GUID *a2, __int64 a3, int a4)
{
  __int64 v4; // [rsp+80h] [rbp+18h] BYREF
  int v5; // [rsp+88h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(a2, a1, &v4);
}
