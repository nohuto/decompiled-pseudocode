/*
 * XREFs of ?ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z @ 0x1C00992D4
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C00DF000 (ndisHandlePnPRequest.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000B190 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniportByGuid @ 0x1C0013D88 (ndisReferenceMiniportByGuid.c)
 *     ndisIfCreateOrUpdateInterface @ 0x1C0013E60 (ndisIfCreateOrUpdateInterface.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00A8460 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 */

void __fastcall ndisPnpRefresh(struct _GUID *a1)
{
  Ndis::BindRegistry *v2; // rax
  enum Ndis::ReadBindingsOptions::Flags v3; // r8d
  __int64 v4; // rbx

  ndisIfCreateOrUpdateInterface(a1);
  v2 = (Ndis::BindRegistry *)ndisReferenceMiniportByGuid(a1);
  v4 = (__int64)v2;
  if ( v2 )
  {
    Ndis::BindRegistry::Reload(v2, 0LL, v3);
    ndisDereferenceMiniport(v4, 0x20u);
  }
}
