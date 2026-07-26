/*
 * XREFs of ndisPMAddRemoveAsync @ 0x1C00CA900
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0003280 (ndisDereferenceMiniport.c)
 *     ndisOidRequestComplete @ 0x1C0006CB0 (ndisOidRequestComplete.c)
 *     ndisOidPMAddRemove @ 0x1C0008CC4 (ndisOidPMAddRemove.c)
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_qqd @ 0x1C004BBA8 (WPP_SF_qqd.c)
 */

void __fastcall ndisPMAddRemoveAsync(_QWORD *P)
{
  char *v1; // rsi
  __int64 v2; // rbp
  __int64 v4; // rbx
  int v5; // ebp
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9[6]; // [rsp+30h] [rbp-38h] BYREF

  v1 = (char *)P[4];
  v2 = P[5];
  v4 = P[6];
  memset(v9, 0, sizeof(v9));
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qq(0x45u, &WPP_fbb1998797815902974a7c4233493709_Traceguids, v1, v4);
  LODWORD(v9[5]) = ndisOidPMAddRemove(v1, v2, (PNDIS_OID_REQUEST)v4);
  v5 = v9[5];
  v9[4] = v4;
  *(_DWORD *)(v4 + 88) = *(_DWORD *)(v4 + 88) & 0xF8FFFFF6 | 0x5000000;
  ndisOidRequestComplete(v9, v6, v7, v8);
  ExFreePoolWithTag(P, 0);
  ndisDereferenceMiniport((__int64)v1, 0xEu);
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qqd(0x46u, &WPP_fbb1998797815902974a7c4233493709_Traceguids, v1, v4, v5);
}
