/*
 * XREFs of ?GetVisualProperty@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJIPEAPEAG@Z @ 0x180021E30
 * Callers:
 *     ?_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180012CB0 (-_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008AA0 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 */

__int64 __fastcall TileDataLayerItemWrappers::TDLTileInfoHelper::GetVisualProperty(
        TileDataLayerItemWrappers::TDLTileInfoHelper *this,
        __int64 a2,
        unsigned __int16 **a3)
{
  __int64 v4; // rdi
  int v5; // edi
  int v6; // eax
  __int64 v7; // rsi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v4 = *((_QWORD *)this + 9);
  v10 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v4 + 120LL))(v4, 6553693LL, &v10);
  if ( v5 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, unsigned __int16 **))(*(_QWORD *)v10 + 32LL))(v10, a3);
    v5 = v6;
    if ( v6 >= 0 )
      v5 = 0;
    else
      wil::details::in1diag3::Return_HrPreRelease(
        retaddr,
        336LL,
        (__int64)"shell\\lib\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
        (const char *)(unsigned int)v6);
  }
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return (unsigned int)v5;
}
