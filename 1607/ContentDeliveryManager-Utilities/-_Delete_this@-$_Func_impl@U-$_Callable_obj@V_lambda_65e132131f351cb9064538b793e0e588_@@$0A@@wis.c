/*
 * XREFs of ?_Delete_this@?$_Func_impl@U?$_Callable_obj@V_lambda_65e132131f351cb9064538b793e0e588_@@$0A@@wistd@@V?$function_allocator@V?$_Func_class@XU_Nil@wistd@@U12@U12@U12@U12@U12@U12@@wistd@@@details@2@XU_Nil@2@U52@U52@U52@U52@U52@U52@@wistd@@EEAAX_N@Z @ 0x180017510
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::_Func_impl<wistd::_Callable_obj<_lambda_65e132131f351cb9064538b793e0e588_,0>,wistd::details::function_allocator<wistd::_Func_class<void,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>>,void,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Delete_this(
        __int64 a1,
        char a2)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 32LL))(a1, 0LL);
  if ( a2 )
    __fastfail(7u);
  return result;
}
