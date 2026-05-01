/*
 * XREFs of ?ClearShellPropertyStream@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBG@Z @ 0x18002386C
 * Callers:
 *     ?RuntimeClassInitialize@SetCategoryOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJW4GameListCategory@2345@0PEAUITileManager@@PEAUITileInfo@@@Z @ 0x18001EA34 (-RuntimeClassInitialize@SetCategoryOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJW4Gam.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetAndRecordShellProperty@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBGAEAV?$ComPtr@UIStream@@@WRL@Microsoft@@@Z @ 0x180023620 (-SetAndRecordShellProperty@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBGAEAV-$ComPtr@UI.c)
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TileDataLayerItemWrappers::TDLTileInfoHelper::ClearShellPropertyStream(
        TileDataLayerItemWrappers::TDLTileInfoHelper *this,
        const unsigned __int16 *a2)
{
  IStream *v4; // rbx
  unsigned int v5; // edi
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
    v7 = 1068LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
      (const char *)v6);
    goto LABEL_7;
  }
  v8 = TileDataLayerItemWrappers::TDLTileInfoHelper::SetAndRecordShellProperty((__int64)this, a2, &v11);
  v5 = v8;
  if ( v8 < 0 )
  {
    v6 = (unsigned int)v8;
    v7 = 1069LL;
    goto LABEL_5;
  }
  v5 = 0;
LABEL_7:
  if ( v4 )
    (*(void (__fastcall **)(IStream *))(*(_QWORD *)v4 + 16LL))(v4);
  return v5;
}
