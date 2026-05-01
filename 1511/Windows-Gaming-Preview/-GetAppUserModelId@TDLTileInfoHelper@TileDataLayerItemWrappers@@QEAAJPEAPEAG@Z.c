/*
 * XREFs of ?GetAppUserModelId@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAPEAG@Z @ 0x180022A1C
 * Callers:
 *     ?_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180012CB0 (-_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z @ 0x18001DCC8 (-GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007A78 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008AA0 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ?GetShellProperty@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJW4TileStringProperty@2@PEAPEAG@Z @ 0x180021ABC (-GetShellProperty@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJW4TileStringProperty@2@PEAPE.c)
 *     ?GetShellProperty@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJW4TileBoolProperty@2@PEA_N@Z @ 0x180021C7C (-GetShellProperty@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJW4TileBoolProperty@2@PEA_N@Z.c)
 *     ?GetAppIdentifierFromTile@OneCoreDataHelpers@@YAJPEAUITileInfo@@PEAPEAUIApplicationIdentifier@@@Z @ 0x180024CD8 (-GetAppIdentifierFromTile@OneCoreDataHelpers@@YAJPEAUITileInfo@@PEAPEAUIApplicationIdentifier@@@.c)
 */

__int64 __fastcall TileDataLayerItemWrappers::TDLTileInfoHelper::GetAppUserModelId(
        TileDataLayerItemWrappers::TDLTileInfoHelper *this,
        unsigned __int16 **a2)
{
  struct IApplicationIdentifier **v4; // r8
  int ShellProperty; // eax
  unsigned int v6; // ebx
  OneCoreDataHelpers *v8; // rcx
  int AppIdentifierFromTile; // eax
  int v10; // eax
  unsigned int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v16; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  LOBYTE(v16) = 0;
  TileDataLayerItemWrappers::TDLTileInfoHelper::GetShellProperty((__int64)this, (__int64)a2, &v16);
  if ( (_BYTE)v16 )
  {
    ShellProperty = TileDataLayerItemWrappers::TDLTileInfoHelper::GetShellProperty((__int64)this, 6u, a2);
    v6 = ShellProperty;
    if ( ShellProperty < 0 )
    {
      wil::details::in1diag3::Return_HrPreRelease(
        retaddr,
        894LL,
        (__int64)"shell\\lib\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
        (const char *)(unsigned int)ShellProperty);
      return v6;
    }
    return 0LL;
  }
  v8 = (OneCoreDataHelpers *)*((_QWORD *)this + 9);
  v16 = 0LL;
  AppIdentifierFromTile = OneCoreDataHelpers::GetAppIdentifierFromTile(v8, (struct ITileInfo *)&v16, v4);
  if ( AppIdentifierFromTile >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, unsigned __int16 **))(*(_QWORD *)v16 + 80LL))(v16, a2);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 901LL;
      goto LABEL_9;
    }
LABEL_12:
    v14 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    return 0LL;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0x383,
    (__int64)"shell\\lib\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
    (const char *)(unsigned int)AppIdentifierFromTile);
  v10 = TileDataLayerItemWrappers::TDLTileInfoHelper::GetShellProperty((__int64)this, 2u, a2);
  v11 = v10;
  if ( v10 >= 0 )
    goto LABEL_12;
  v12 = 908LL;
LABEL_9:
  wil::details::in1diag3::Return_HrPreRelease(
    retaddr,
    v12,
    (__int64)"shell\\lib\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
    (const char *)(unsigned int)v10);
  v13 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return v11;
}
