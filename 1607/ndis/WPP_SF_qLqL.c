/*
 * XREFs of WPP_SF_qLqL @ 0x1C0058224
 * Callers:
 *     ndisFDoOidRequestInternal @ 0x1C000B8D0 (ndisFDoOidRequestInternal.c)
 *     ndisOidRequestComplete @ 0x1C000BB40 (ndisOidRequestComplete.c)
 *     ndisPreProcessOid @ 0x1C000C130 (ndisPreProcessOid.c)
 *     ndisInvokeOidRequestComplete @ 0x1C000CC00 (ndisInvokeOidRequestComplete.c)
 *     ndisFInvokeDirectOidRequest @ 0x1C0058804 (ndisFInvokeDirectOidRequest.c)
 *     ndisFInvokeDirectOidRequestComplete @ 0x1C005891C (ndisFInvokeDirectOidRequestComplete.c)
 *     ndisInvokeDirectOidRequestComplete @ 0x1C005AEE4 (ndisInvokeDirectOidRequestComplete.c)
 *     ?ndisNsiPostGetInterfaceRodInformation@@YAXPEAU_NDIS_IF_BLOCK@@IKPEAX@Z @ 0x1C00C43AC (-ndisNsiPostGetInterfaceRodInformation@@YAXPEAU_NDIS_IF_BLOCK@@IKPEAX@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qLqL(unsigned __int16 a1, const struct _GUID *a2, __int64 a3, int a4)
{
  __int64 v4; // [rsp+80h] [rbp+18h] BYREF
  int v5; // [rsp+88h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(a2, a1, &v4);
}
