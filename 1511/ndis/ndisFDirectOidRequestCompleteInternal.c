/*
 * XREFs of ndisFDirectOidRequestCompleteInternal @ 0x1C00539A0
 * Callers:
 *     ndisStackExpansionFallbackWorker @ 0x1C0054AD0 (ndisStackExpansionFallbackWorker.c)
 * Callees:
 *     ndisOidRequestComplete @ 0x1C0008250 (ndisOidRequestComplete.c)
 *     ndisReferenceRefNoCheck @ 0x1C000B3FC (ndisReferenceRefNoCheck.c)
 *     ndisDereferenceRef @ 0x1C001C6C4 (ndisDereferenceRef.c)
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_qqd @ 0x1C004C3E8 (WPP_SF_qqd.c)
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
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
  {
    v7 = *(_DWORD *)(v1 + 80);
    WPP_SF_qqd(0x39u, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, v2, v1, v7);
  }
  memset(v8, 0, 0x30uLL);
  LODWORD(v8[5]) = v3;
  v8[2] = v2;
  v8[4] = v1;
  ndisReferenceRefNoCheck(v2 + 312, 0x14u);
  ndisOidRequestComplete((__int64)v8, v4, v5, v6);
  ndisDereferenceRef((PKSPIN_LOCK)(v2 + 312), 0x14u);
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qq(0x3Au, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, v2, v1);
}
