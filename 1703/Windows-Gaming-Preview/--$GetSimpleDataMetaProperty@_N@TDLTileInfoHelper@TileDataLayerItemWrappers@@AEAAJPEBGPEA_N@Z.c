/*
 * XREFs of ??$GetSimpleDataMetaProperty@_N@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBGPEA_N@Z @ 0x180027544
 * Callers:
 *     ?_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180012F0C (-_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180013518 (-_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180013E68 (-_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@LaunchOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUITileInfo@@@Z @ 0x18001CDF4 (-RuntimeClassInitialize@LaunchOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUITileI.c)
 *     ?GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z @ 0x18001D948 (-GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z.c)
 *     ?GetPackageFamilyName@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z @ 0x18001DE1C (-GetPackageFamilyName@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z.c)
 *     ?GetLegacyPhoneProductId@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAU_GUID@@@Z @ 0x1800250E0 (-GetLegacyPhoneProductId@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAU_GUID@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TileDataLayerItemWrappers::TDLTileInfoHelper::GetSimpleDataMetaProperty<bool>(
        __int64 a1,
        __int64 a2,
        void *a3)
{
  __int64 v3; // rcx
  int v5; // eax
  IStream *v6; // rcx
  unsigned int v7; // ebx
  HRESULT v8; // eax
  IStream *pstm; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 72);
  pstm = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64, IStream **))(*(_QWORD *)v3 + 96LL))(v3, a2, &pstm);
  v6 = pstm;
  v7 = v5;
  if ( v5 >= 0 )
  {
    if ( pstm )
    {
      v8 = IStream_Read(pstm, a3, 1u);
      v6 = pstm;
      v7 = v8;
      if ( v8 >= 0 )
        v7 = 0;
    }
    else
    {
      v7 = -2147023728;
    }
  }
  if ( v6 )
  {
    pstm = 0LL;
    (*(void (__fastcall **)(IStream *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return v7;
}
