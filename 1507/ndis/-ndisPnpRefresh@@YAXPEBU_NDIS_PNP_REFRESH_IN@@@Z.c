/*
 * XREFs of ?ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z @ 0x1C009BFC4
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C00E5000 (ndisHandlePnPRequest.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0003280 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniportByGuid @ 0x1C000FE64 (ndisReferenceMiniportByGuid.c)
 *     ndisIfCreateOrUpdateInterface @ 0x1C000FF3C (ndisIfCreateOrUpdateInterface.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00A08E8 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 */

void __fastcall ndisPnpRefresh(struct _GUID *a1)
{
  Ndis::BindRegistry *v2; // rax
  enum Ndis::ReadBindingsOptions::Flags v3; // r8d
  __int64 v4; // rbx

  ndisIfCreateOrUpdateInterface(a1);
  v2 = (Ndis::BindRegistry *)ndisReferenceMiniportByGuid(a1, 32);
  v4 = (__int64)v2;
  if ( v2 )
  {
    Ndis::BindRegistry::Reload(v2, 0LL, v3);
    ndisDereferenceMiniport(v4, 0x20u);
  }
}
