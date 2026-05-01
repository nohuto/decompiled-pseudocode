/*
 * XREFs of ?CommitInternal@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEAUITileManager@@PEAUIVisualElementEnumerator@@_N@Z @ 0x180022E4C
 * Callers:
 *     ?RuntimeClassInitialize@SetCategoryOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJW4GameListCategory@2345@0PEAUITileManager@@PEAUITileInfo@@@Z @ 0x18001D4D0 (-RuntimeClassInitialize@SetCategoryOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJW4Gam.c)
 * Callees:
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008AA0 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ?EnsureTDLObjects@@YAJPEAUITileManager@@PEAUIVisualElementEnumerator@@PEAPEAU1@PEAPEAU2@@Z @ 0x180021698 (-EnsureTDLObjects@@YAJPEAUITileManager@@PEAUIVisualElementEnumerator@@PEAPEAU1@PEAPEAU2@@Z.c)
 *     ?CommitTDLItemWithRetry@@YAJV?$function@$$A6AJXZ@wistd@@0@Z @ 0x180021958 (-CommitTDLItemWithRetry@@YAJV-$function@$$A6AJXZ@wistd@@0@Z.c)
 *     ?ClearRetryPropertyTables@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAXXZ @ 0x18002376C (-ClearRetryPropertyTables@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAXXZ.c)
 */

__int64 __fastcall TileDataLayerItemWrappers::TDLTileInfoHelper::CommitInternal(
        TileDataLayerItemWrappers::TDLTileInfoHelper *this,
        struct ITileManager *a2,
        struct IVisualElementEnumerator *a3)
{
  int v4; // eax
  int v5; // esi
  struct ITileManager *v6; // rdi
  int v8[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v9; // [rsp+30h] [rbp-D8h] BYREF
  __int128 v10; // [rsp+38h] [rbp-D0h]
  TileDataLayerItemWrappers::TDLTileInfoHelper *v11; // [rsp+48h] [rbp-C0h]
  __int128 v12; // [rsp+50h] [rbp-B8h]
  _QWORD v13[13]; // [rsp+60h] [rbp-A8h] BYREF
  void **v14; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v15; // [rsp+D0h] [rbp-38h]
  void ***v16; // [rsp+128h] [rbp+20h]
  wil::details::in1diag3 *retaddr; // [rsp+140h] [rbp+38h]
  struct ITileManager *v18; // [rsp+158h] [rbp+50h] BYREF

  v9 = 0LL;
  v18 = 0LL;
  LOBYTE(v8[0]) = 0;
  v4 = EnsureTDLObjects(a2, 0LL, &v18, 0LL);
  v5 = v4;
  if ( v4 >= 0 )
  {
    *((_QWORD *)&v12 + 1) = this;
    *(_QWORD *)&v10 = v8;
    v11 = this;
    *((_QWORD *)&v10 + 1) = &v18;
    *(_QWORD *)&v12 = &v9;
    v14 = &wistd::_Func_impl<wistd::_Callable_obj<_lambda_9e7d2ca8e92d49cfddf0abd925277e19_,0>,wistd::details::function_allocator<wistd::_Func_class<long,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>>,long,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::`vftable';
    v16 = &v14;
    v15 = v12;
    v13[0] = &wistd::_Func_impl<wistd::_Callable_obj<_lambda_4b113ca380de658e4b053f81fda3c9b1_,0>,wistd::details::function_allocator<wistd::_Func_class<long,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>>,long,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::`vftable';
    v13[12] = v13;
    v13[3] = this;
    *(_OWORD *)&v13[1] = v10;
    v5 = CommitTDLItemWithRetry((wistd *)v13, (__int64)&v14);
    if ( v5 >= 0 )
      TileDataLayerItemWrappers::TDLTileInfoHelper::ClearRetryPropertyTables(this);
  }
  else
  {
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      966LL,
      (__int64)"shell\\lib\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
      (const char *)(unsigned int)v4);
  }
  v6 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(struct ITileManager *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return (unsigned int)v5;
}
