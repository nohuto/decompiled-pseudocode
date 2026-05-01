/*
 * XREFs of ?ClearShellPropertyStream@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBG@Z @ 0x18002390C
 * Callers:
 *     ?RuntimeClassInitialize@SetCategoryOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJW4GameListCategory@2345@0PEAUITileManager@@PEAUITileInfo@@@Z @ 0x18001D8A8 (-RuntimeClassInitialize@SetCategoryOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJW4Gam.c)
 * Callees:
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B98 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ?SetAndRecordShellProperty@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBGAEAV?$ComPtr@UIStream@@@WRL@Microsoft@@@Z @ 0x180023730 (-SetAndRecordShellProperty@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBGAEAV-$ComPtr@UI.c)
 */

__int64 __fastcall TileDataLayerItemWrappers::TDLTileInfoHelper::ClearShellPropertyStream(
        TileDataLayerItemWrappers::TDLTileInfoHelper *this,
        const unsigned __int16 *a2)
{
  IStream *v4; // rbx
  unsigned int v5; // esi
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  IStream *v11; // [rsp+40h] [rbp+18h] BYREF

  v4 = SHCreateMemStream(0LL, 0);
  v11 = v4;
  v5 = v4 == 0LL ? 0x8007000E : 0;
  if ( !v4 )
  {
    v6 = v5;
    v7 = 928LL;
LABEL_5:
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      v7,
      (__int64)"shell\\lib\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
      (const char *)v6);
    goto LABEL_7;
  }
  v8 = TileDataLayerItemWrappers::TDLTileInfoHelper::SetAndRecordShellProperty((__int64)this, a2, &v11);
  v5 = v8;
  if ( v8 < 0 )
  {
    v6 = (unsigned int)v8;
    v7 = 929LL;
    goto LABEL_5;
  }
  v5 = 0;
LABEL_7:
  if ( v4 )
    (*(void (__fastcall **)(IStream *))(*(_QWORD *)v4 + 16LL))(v4);
  return v5;
}
