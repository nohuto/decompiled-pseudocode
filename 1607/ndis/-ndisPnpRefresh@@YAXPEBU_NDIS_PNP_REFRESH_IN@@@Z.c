/*
 * XREFs of ?ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z @ 0x1C009CF00
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C00EBC18 (ndisHandlePnPRequest.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000CD90 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniportByGuid @ 0x1C0011BA8 (ndisReferenceMiniportByGuid.c)
 *     ndisIfCreateOrUpdateInterface @ 0x1C0011C80 (ndisIfCreateOrUpdateInterface.c)
 *     ndisPowerSaveClearStop @ 0x1C009C320 (ndisPowerSaveClearStop.c)
 *     ndisPowerSaveStop @ 0x1C009E190 (ndisPowerSaveStop.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00AAD08 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 */

void __fastcall ndisPnpRefresh(struct _GUID *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v2; // rax
  Ndis::BindRegistry *v3; // rbx
  enum Ndis::ReadBindingsOptions::Flags v4; // r8d

  ndisIfCreateOrUpdateInterface(a1);
  v2 = (struct _NDIS_MINIPORT_BLOCK *)ndisReferenceMiniportByGuid(a1, 0x22u);
  v3 = (Ndis::BindRegistry *)v2;
  if ( v2 )
  {
    ndisPowerSaveStop(v2, NdisSSPnPOp);
    Ndis::BindRegistry::Reload(v3, 0LL, v4);
    ndisPowerSaveClearStop((struct _NDIS_MINIPORT_BLOCK *)v3, 8);
    ndisDereferenceMiniport((__int64)v3);
  }
}
