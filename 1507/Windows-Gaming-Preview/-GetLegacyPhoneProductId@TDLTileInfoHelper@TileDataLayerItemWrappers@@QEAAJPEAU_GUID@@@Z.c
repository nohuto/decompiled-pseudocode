/*
 * XREFs of ?GetLegacyPhoneProductId@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAU_GUID@@@Z @ 0x180022EA0
 * Callers:
 *     ?_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180013510 (-_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z @ 0x18001E0A0 (-GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z.c)
 *     ?GetPackageFamilyName@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z @ 0x18001E380 (-GetPackageFamilyName@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z.c)
 * Callees:
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B98 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ?GetShellProperty@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJW4TileBoolProperty@2@PEA_N@Z @ 0x180021F8C (-GetShellProperty@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJW4TileBoolProperty@2@PEA_N@Z.c)
 *     ?GetAppIdentifierFromTile@OneCoreDataHelpers@@YAJPEAUITileInfo@@PEAPEAUIApplicationIdentifier@@@Z @ 0x180024DE4 (-GetAppIdentifierFromTile@OneCoreDataHelpers@@YAJPEAUITileInfo@@PEAPEAUIApplicationIdentifier@@@.c)
 */

__int64 __fastcall TileDataLayerItemWrappers::TDLTileInfoHelper::GetLegacyPhoneProductId(
        TileDataLayerItemWrappers::TDLTileInfoHelper *this,
        struct _GUID *a2)
{
  struct IApplicationIdentifier **v4; // r8
  OneCoreDataHelpers *v6; // rcx
  int AppIdentifierFromTile; // eax
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rsi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v12; // [rsp+40h] [rbp+18h] BYREF
  __int64 v13; // [rsp+48h] [rbp+20h] BYREF

  *(_QWORD *)&a2->Data1 = 0LL;
  *(_QWORD *)a2->Data4 = 0LL;
  v12 = 0;
  TileDataLayerItemWrappers::TDLTileInfoHelper::GetShellProperty((__int64)this, (__int64)a2, &v12);
  if ( v12 )
    return 2147943568LL;
  v6 = (OneCoreDataHelpers *)*((_QWORD *)this + 9);
  v13 = 0LL;
  AppIdentifierFromTile = OneCoreDataHelpers::GetAppIdentifierFromTile(v6, (struct ITileInfo *)&v13, v4);
  v8 = AppIdentifierFromTile;
  if ( AppIdentifierFromTile >= 0 )
  {
    AppIdentifierFromTile = (*(__int64 (__fastcall **)(__int64, struct _GUID *))(*(_QWORD *)v13 + 72LL))(v13, a2);
    v8 = AppIdentifierFromTile;
    if ( AppIdentifierFromTile >= 0 )
    {
      v8 = 0;
      goto LABEL_9;
    }
    v9 = 724LL;
  }
  else
  {
    v9 = 723LL;
  }
  wil::details::in1diag3::Return_HrPreRelease(
    retaddr,
    v9,
    (__int64)"shell\\lib\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
    (const char *)(unsigned int)AppIdentifierFromTile);
LABEL_9:
  v10 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return v8;
}
