/*
 * XREFs of ?ndisShouldCacheRSSParameters@@YAEPEBU_NDIS_OID_REQUEST@@@Z @ 0x1C00237E0
 * Callers:
 *     ndisOidPostRSSParameters @ 0x1C00235D0 (ndisOidPostRSSParameters.c)
 *     ndisPostSetMiniportRSSParameters @ 0x1C0023808 (ndisPostSetMiniportRSSParameters.c)
 *     ndisOidPreRSSParameters @ 0x1C00AAB00 (ndisOidPreRSSParameters.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisShouldCacheRSSParameters(const struct _NDIS_OID_REQUEST *a1)
{
  char v1; // dl

  v1 = 1;
  if ( ((*(_DWORD *)&a1->NdisReserved[16] & 0x4000) != 0 || a1->Header.Revision >= 2u)
    && (a1[1].RequestType & 1) != 0
    && (unsigned int)(*(_DWORD *)&a1[1].Header - 1) <= 0xFFFFFFFD )
  {
    return 0;
  }
  return v1;
}
