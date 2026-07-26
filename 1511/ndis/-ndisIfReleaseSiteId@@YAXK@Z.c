/*
 * XREFs of ?ndisIfReleaseSiteId@@YAXK@Z @ 0x1C003C804
 * Callers:
 *     ?ndisNsiChangeNetworkInfo@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@PEAU_NDIS_NSI_NETWORK_RW@@KKPEAK@Z @ 0x1C003CB4C (-ndisNsiChangeNetworkInfo@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@PEAU_NDIS_NSI_NETWORK_RW@@KKPEAK@Z.c)
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C003DED0 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C003E2D0 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisIfReleaseSiteId(unsigned int a1)
{
  if ( ndisIfSiteIdWrapped )
  {
    if ( a1 > 0x7FFFFFF )
      ndisIfSiteScopeId.0 = ($013671E5920392F7B68C675C97F9F7D8)((ndisIfSiteScopeId.Value ^ (a1 - 1)) & 0xFFFFFFF ^ ndisIfSiteScopeId.Value);
  }
}
