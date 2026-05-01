/*
 * XREFs of ?_Do_call@?$_Func_impl@U?$_Callable_obj@V_lambda_e1b339e4d47a023791f0fa855a6997d9_@@$0A@@wistd@@V?$function_allocator@V?$_Func_class@JU_Nil@wistd@@U12@U12@U12@U12@U12@U12@@wistd@@@details@2@JU_Nil@2@U52@U52@U52@U52@U52@U52@@wistd@@UEAAJXZ @ 0x180024FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC44 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::_Func_impl<wistd::_Callable_obj<_lambda_e1b339e4d47a023791f0fa855a6997d9_,0>,wistd::details::function_allocator<wistd::_Func_class<long,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>>,long,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Do_call(
        __int64 a1)
{
  unsigned int v2; // ebx
  bool v3; // zf
  __int64 *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rax
  int v7; // edi
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0;
  v3 = **(_BYTE **)(a1 + 8) == 0;
  v4 = **(__int64 ***)(a1 + 16);
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 72LL);
  v6 = *v4;
  if ( v3 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v6 + 48))(v4, v5);
    v7 = v8;
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x37B,
        (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
        (const char *)(unsigned int)v8);
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v6 + 72))(v4, v5);
  }
  if ( v7 < 0 )
    return (unsigned int)v7;
  return v2;
}
