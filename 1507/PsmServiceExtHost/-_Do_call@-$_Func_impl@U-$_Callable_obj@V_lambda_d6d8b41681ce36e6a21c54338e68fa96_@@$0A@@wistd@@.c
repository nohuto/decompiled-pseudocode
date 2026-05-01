/*
 * XREFs of ?_Do_call@?$_Func_impl@U?$_Callable_obj@V_lambda_d6d8b41681ce36e6a21c54338e68fa96_@@$0A@@wistd@@V?$function_allocator@V?$_Func_class@JAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_Nil@wistd@@U56@U56@U56@U56@@wistd@@@details@2@JAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_Nil@2@U92@U92@U92@U92@@wistd@@UEAAJAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@Z @ 0x180023790
 * Callers:
 *     ExecutionModel::ReadPolicies @ 0x18001BE60 (ExecutionModel--ReadPolicies.c)
 *     ??R?$_Func_class@JAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_Nil@wistd@@U56@U56@U56@U56@@wistd@@QEBAJAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@Z @ 0x180023724 (--R-$_Func_class@JAEAVRegistryKey@Common@@AEBV-$basic_string@GU-$char_traits@G@utl@@V-$allocator.c)
 * Callees:
 *     <none>
 */

int __fastcall wistd::_Func_impl<wistd::_Callable_obj<_lambda_d6d8b41681ce36e6a21c54338e68fa96_,0>,wistd::details::function_allocator<wistd::_Func_class<long,Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>>,long,Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Do_call(
        __int64 a1,
        HKEY *a2,
        __int64 a3)
{
  return ExecutionModel::ResourcePolicyStore::AddMemoryPolicy(a1, a2, a3, *(_QWORD *)(a1 + 16));
}
