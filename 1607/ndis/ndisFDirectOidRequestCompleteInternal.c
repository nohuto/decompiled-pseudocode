/*
 * XREFs of ndisFDirectOidRequestCompleteInternal @ 0x1C00583D0
 * Callers:
 *     ndisStackExpansionFallbackWorker @ 0x1C0059150 (ndisStackExpansionFallbackWorker.c)
 * Callees:
 *     ndisOidRequestComplete @ 0x1C000BB40 (ndisOidRequestComplete.c)
 *     ndisDereferenceRef @ 0x1C001612C (ndisDereferenceRef.c)
 *     ndisReferenceRefNoCheck @ 0x1C00167B8 (ndisReferenceRefNoCheck.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C0050E4C (WPP_SF_qqd.c)
 */

void __fastcall ndisFDirectOidRequestCompleteInternal(_QWORD *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // [rsp+20h] [rbp-48h]
  _QWORD v8[7]; // [rsp+30h] [rbp-38h] BYREF

  v1 = a1[3];
  v2 = a1[1];
  v3 = *(_DWORD *)(v1 + 80);
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
  {
    v7 = *(_DWORD *)(v1 + 80);
    WPP_SF_qqd(0x39u, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, v2, v1, v7);
  }
  memset(v8, 0, 0x30uLL);
  LODWORD(v8[5]) = v3;
  v8[2] = v2;
  v8[4] = v1;
  ndisReferenceRefNoCheck(v2 + 312);
  ndisOidRequestComplete((__int64)v8, v4, v5, v6);
  ndisDereferenceRef((PKSPIN_LOCK)(v2 + 312), 0x14u);
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qq(0x3Au, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, v2, v1);
}
