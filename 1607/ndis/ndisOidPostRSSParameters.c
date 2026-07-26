/*
 * XREFs of ndisOidPostRSSParameters @ 0x1C0024270
 * Callers:
 *     <none>
 * Callees:
 *     ndisPostSetOpenRSSParameters @ 0x1C0024300 (ndisPostSetOpenRSSParameters.c)
 *     ndisPostSetMiniportRSSParameters @ 0x1C00247F4 (ndisPostSetMiniportRSSParameters.c)
 *     ?ndisShouldCacheRSSParameters@@YAEPEBU_NDIS_OID_REQUEST@@@Z @ 0x1C0024960 (-ndisShouldCacheRSSParameters@@YAEPEBU_NDIS_OID_REQUEST@@@Z.c)
 *     WPP_SF_qqq @ 0x1C003C434 (WPP_SF_qqq.c)
 *     WPP_SF_qqd @ 0x1C0050E4C (WPP_SF_qqd.c)
 */

void __fastcall ndisOidPostRSSParameters(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rdi
  __int64 v4; // rsi

  v1 = *a1;
  v3 = a1[4];
  v4 = a1[3];
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qqq(162LL, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, v1, v4, v3);
  if ( *(_DWORD *)(v3 + 4) == 1 )
  {
    if ( v1 )
      ndisPostSetMiniportRSSParameters(v1, v3, *((unsigned int *)a1 + 10));
    if ( v4 && ndisShouldCacheRSSParameters((const struct _NDIS_OID_REQUEST *)v3) )
      ndisPostSetOpenRSSParameters(v4, v3, *((unsigned int *)a1 + 10));
  }
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qqd(163LL, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, v1, v4, *((_DWORD *)a1 + 10));
}
