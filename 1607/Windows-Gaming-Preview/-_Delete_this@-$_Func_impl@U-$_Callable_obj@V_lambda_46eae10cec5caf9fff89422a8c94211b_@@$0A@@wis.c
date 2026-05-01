/*
 * XREFs of ?_Delete_this@?$_Func_impl@U?$_Callable_obj@V_lambda_46eae10cec5caf9fff89422a8c94211b_@@$0A@@wistd@@V?$function_allocator@V?$_Func_class@JU_Nil@wistd@@U12@U12@U12@U12@U12@U12@@wistd@@@details@2@JU_Nil@2@U52@U52@U52@U52@U52@U52@@wistd@@EEAAX_N@Z @ 0x180024F80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::_Func_impl<wistd::_Callable_obj<_lambda_46eae10cec5caf9fff89422a8c94211b_,0>,wistd::details::function_allocator<wistd::_Func_class<long,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>>,long,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Delete_this(
        __int64 a1,
        char a2)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 32LL))(a1, 0LL);
  if ( a2 )
    __fastfail(7u);
  return result;
}
