/*
 * XREFs of ndisFDirectOidRequestCompleteInternal @ 0x1C00535B0
 * Callers:
 *     ndisStackExpansionFallbackWorker @ 0x1C00549F0 (ndisStackExpansionFallbackWorker.c)
 * Callees:
 *     ndisOidRequestComplete @ 0x1C0006CB0 (ndisOidRequestComplete.c)
 *     ndisDereferenceRef @ 0x1C00172CC (ndisDereferenceRef.c)
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_qqd @ 0x1C004BBA8 (WPP_SF_qqd.c)
 *     ndisReferenceRefNoCheck @ 0x1C0066F58 (ndisReferenceRefNoCheck.c)
 */

void __fastcall ndisFDirectOidRequestCompleteInternal(_QWORD *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // [rsp+20h] [rbp-48h]
  __int64 v9[7]; // [rsp+30h] [rbp-38h] BYREF

  v1 = a1[3];
  v2 = a1[1];
  v3 = *(_DWORD *)(v1 + 80);
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
  {
    v8 = *(_DWORD *)(v1 + 80);
    WPP_SF_qqd(0x39u, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, v2, v1, v8);
  }
  memset(v9, 0, 0x30uLL);
  LODWORD(v9[5]) = v3;
  LOBYTE(v4) = 20;
  v9[2] = v2;
  v9[4] = v1;
  ndisReferenceRefNoCheck(v2 + 312, v4);
  ndisOidRequestComplete(v9, v5, v6, v7);
  ndisDereferenceRef((PKSPIN_LOCK)(v2 + 312), 0x14u);
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qq(0x3Au, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, v2, v1);
}
