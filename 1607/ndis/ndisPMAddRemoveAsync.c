/*
 * XREFs of ndisPMAddRemoveAsync @ 0x1C00C9640
 * Callers:
 *     <none>
 * Callees:
 *     ndisOidRequestComplete @ 0x1C000BB40 (ndisOidRequestComplete.c)
 *     ndisDereferenceMiniport @ 0x1C000CD90 (ndisDereferenceMiniport.c)
 *     ndisOidPMAddRemove @ 0x1C0025300 (ndisOidPMAddRemove.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C0050E4C (WPP_SF_qqd.c)
 */

void __fastcall ndisPMAddRemoveAsync(_QWORD *P)
{
  void *v1; // rsi
  __int64 v2; // rbp
  __int64 v4; // rbx
  int v5; // ebp
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // [rsp+20h] [rbp-48h]
  _QWORD v10[6]; // [rsp+30h] [rbp-38h] BYREF

  v1 = (void *)P[4];
  v2 = P[5];
  v4 = P[6];
  memset(v10, 0, sizeof(v10));
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qq(0x45u, &WPP_cb02054c676b38280cb5aae44c86a7fe_Traceguids, v1, v4);
  LODWORD(v10[5]) = ndisOidPMAddRemove(v1, v2, (PNDIS_OID_REQUEST)v4);
  v5 = v10[5];
  v10[4] = v4;
  *(_DWORD *)(v4 + 88) = *(_DWORD *)(v4 + 88) & 0xF8FFFFF6 | 0x5000000;
  ndisOidRequestComplete((__int64)v10, v6, v7, v8);
  ExFreePoolWithTag(P, 0);
  ndisDereferenceMiniport((__int64)v1);
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
  {
    v9 = v5;
    WPP_SF_qqd(0x46u, &WPP_cb02054c676b38280cb5aae44c86a7fe_Traceguids, v1, v4, v9);
  }
}
