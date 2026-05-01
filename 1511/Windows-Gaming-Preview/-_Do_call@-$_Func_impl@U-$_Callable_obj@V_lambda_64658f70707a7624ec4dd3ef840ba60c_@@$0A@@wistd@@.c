/*
 * XREFs of ?_Do_call@?$_Func_impl@U?$_Callable_obj@V_lambda_64658f70707a7624ec4dd3ef840ba60c_@@$0A@@wistd@@V?$function_allocator@V?$_Func_class@JU_Nil@wistd@@U12@U12@U12@U12@U12@U12@@wistd@@@details@2@JU_Nil@2@U52@U52@U52@U52@U52@U52@@wistd@@UEAAJXZ @ 0x180024AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008AA0 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     __security_check_cookie @ 0x180025A00 (__security_check_cookie.c)
 */

__int64 __fastcall wistd::_Func_impl<wistd::_Callable_obj<_lambda_64658f70707a7624ec4dd3ef840ba60c_,0>,wistd::details::function_allocator<wistd::_Func_class<long,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>>,long,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Do_call(
        __int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 *v5; // rax
  __int64 v6; // rdi
  __int64 *v7; // rax
  __int64 *v8; // rsi
  __int64 v9; // r14
  __int64 v10; // rdi
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(***(_QWORD ***)(a1 + 8) + 32LL))(**(_QWORD **)(a1 + 8), &v13);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v5 = *(__int64 **)(a1 + 8);
    v6 = *v5;
    if ( *v5 )
    {
      *v5 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    v7 = *(__int64 **)(a1 + 16);
    v8 = *(__int64 **)(a1 + 8);
    v12 = v13;
    v9 = *v7;
    v10 = *v8;
    if ( *v8 )
    {
      *v8 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    v2 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64 *))(*(_QWORD *)v9 + 48LL))(v9, &v12, v8);
    v3 = v2;
    if ( v2 >= 0 )
      return 0;
    v4 = 566LL;
  }
  else
  {
    v4 = 563LL;
  }
  wil::details::in1diag3::Return_HrPreRelease(
    retaddr,
    v4,
    (__int64)"shell\\lib\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
