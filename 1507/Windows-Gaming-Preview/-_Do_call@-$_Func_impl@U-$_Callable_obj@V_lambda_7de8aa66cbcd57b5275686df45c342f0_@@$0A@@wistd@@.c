/*
 * XREFs of ?_Do_call@?$_Func_impl@U?$_Callable_obj@V_lambda_7de8aa66cbcd57b5275686df45c342f0_@@$0A@@wistd@@V?$function_allocator@V?$_Func_class@JU_Nil@wistd@@U12@U12@U12@U12@U12@U12@@wistd@@@details@2@JU_Nil@2@U52@U52@U52@U52@U52@U52@@wistd@@UEAAJXZ @ 0x1800249F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B98 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ??$As@UITileInfoCache@@@?$ComPtr@UITileInfo@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UITileInfoCache@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800244FC (--$As@UITileInfoCache@@@-$ComPtr@UITileInfo@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UITileI.c)
 */

__int64 __fastcall wistd::_Func_impl<wistd::_Callable_obj<_lambda_7de8aa66cbcd57b5275686df45c342f0_,0>,wistd::details::function_allocator<wistd::_Func_class<long,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>>,long,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Do_call(
        __int64 a1)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  v2 = Microsoft::WRL::ComPtr<ITileInfo>::As<ITileInfoCache>(*(_QWORD **)(a1 + 8), &v9);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 436LL;
    goto LABEL_3;
  }
  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v9 + 24LL))(
         v9,
         **(unsigned int **)(a1 + 16),
         **(_QWORD **)(a1 + 24));
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 438LL;
    goto LABEL_3;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(***(_QWORD ***)(a1 + 32) + 72LL))(
         **(_QWORD **)(a1 + 32),
         **(_QWORD **)(a1 + 8));
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 439LL;
LABEL_3:
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      v4,
      (__int64)"shell\\lib\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
      (const char *)(unsigned int)v2);
    v5 = v9;
    if ( v9 )
    {
      v9 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    return v3;
  }
  v6 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return 0;
}
