/*
 * XREFs of ndisOidPostRSSParameters @ 0x1C00235D0
 * Callers:
 *     <none>
 * Callees:
 *     ndisPostSetOpenRSSParameters @ 0x1C0023660 (ndisPostSetOpenRSSParameters.c)
 *     ?ndisShouldCacheRSSParameters@@YAEPEBU_NDIS_OID_REQUEST@@@Z @ 0x1C00237E0 (-ndisShouldCacheRSSParameters@@YAEPEBU_NDIS_OID_REQUEST@@@Z.c)
 *     ndisPostSetMiniportRSSParameters @ 0x1C0023808 (ndisPostSetMiniportRSSParameters.c)
 *     WPP_SF_qqq @ 0x1C00384C4 (WPP_SF_qqq.c)
 *     WPP_SF_qqd @ 0x1C004C3E8 (WPP_SF_qqd.c)
 */

void __fastcall ndisOidPostRSSParameters(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rdi
  __int64 v4; // rsi

  v1 = *a1;
  v3 = a1[4];
  v4 = a1[3];
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qqq(162LL, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, v1, v4, v3);
  if ( *(_DWORD *)(v3 + 4) == 1 )
  {
    if ( v1 )
      ndisPostSetMiniportRSSParameters(v1, v3, *((unsigned int *)a1 + 10));
    if ( v4 && ndisShouldCacheRSSParameters((const struct _NDIS_OID_REQUEST *)v3) )
      ndisPostSetOpenRSSParameters(v4, v3, *((unsigned int *)a1 + 10));
  }
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qqd(163LL, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, v1, v4, *((_DWORD *)a1 + 10));
}
