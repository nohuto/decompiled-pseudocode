/*
 * XREFs of ?_Delete_this@?$_Func_impl@U?$_Callable_obj@V_lambda_9bc5f19087c1f7c89894944441072aea_@@$0A@@wistd@@V?$function_allocator@V?$_Func_class@JAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_Nil@wistd@@U56@U56@U56@U56@@wistd@@@details@2@JAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_Nil@2@U92@U92@U92@U92@@wistd@@EEAAX_N@Z @ 0x180023630
 * Callers:
 *     <none>
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall wistd::_Func_impl<wistd::_Callable_obj<_lambda_9bc5f19087c1f7c89894944441072aea_,0>,wistd::details::function_allocator<wistd::_Func_class<long,Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>>,long,Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Delete_this(
        __int64 a1,
        char a2)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 32LL))(a1, 0LL);
  if ( a2 )
    __fastfail(7u);
  return result;
}
