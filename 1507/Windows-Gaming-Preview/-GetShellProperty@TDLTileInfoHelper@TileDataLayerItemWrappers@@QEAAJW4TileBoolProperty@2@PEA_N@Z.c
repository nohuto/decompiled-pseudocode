/*
 * XREFs of ?GetShellProperty@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJW4TileBoolProperty@2@PEA_N@Z @ 0x180021F8C
 * Callers:
 *     ?_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180011D40 (-_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180012AC8 (-_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180013510 (-_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z @ 0x18001E0A0 (-GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z.c)
 *     ?GetPackageFamilyName@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z @ 0x18001E380 (-GetPackageFamilyName@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z.c)
 *     ?GetLegacyPhoneProductId@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAU_GUID@@@Z @ 0x180022EA0 (-GetLegacyPhoneProductId@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAU_GUID@@@Z.c)
 * Callees:
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 */

__int64 __fastcall TileDataLayerItemWrappers::TDLTileInfoHelper::GetShellProperty(__int64 a1, __int64 a2, void *a3)
{
  __int64 v3; // rdi
  HRESULT v5; // edi
  IStream *v6; // rsi
  IStream *v7; // rdi
  IStream *pstm; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 72);
  pstm = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, IStream **))(*(_QWORD *)v3 + 96LL))(
         v3,
         L"AppResolver_IsDesktopAppTile",
         &pstm);
  if ( v5 < 0 )
    goto LABEL_2;
  if ( !pstm )
    return (unsigned int)-2147023728;
  v5 = IStream_Read(pstm, a3, 1u);
  if ( v5 < 0 )
  {
LABEL_2:
    v6 = pstm;
    if ( pstm )
    {
      pstm = 0LL;
      (*(void (__fastcall **)(IStream *))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  else
  {
    v7 = pstm;
    if ( pstm )
    {
      pstm = 0LL;
      (*(void (__fastcall **)(IStream *))(*(_QWORD *)v7 + 16LL))(v7);
    }
    return 0;
  }
  return (unsigned int)v5;
}
