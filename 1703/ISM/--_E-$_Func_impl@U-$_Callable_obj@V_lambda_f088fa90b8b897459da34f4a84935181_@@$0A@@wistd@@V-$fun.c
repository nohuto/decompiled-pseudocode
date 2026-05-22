/*
 * XREFs of ??_E?$_Func_impl@U?$_Callable_obj@V_lambda_f088fa90b8b897459da34f4a84935181_@@$0A@@wistd@@V?$function_allocator@V?$_Func_class@XAEBKU_Nil@wistd@@U12@U12@U12@U12@U12@@wistd@@@details@2@XAEBKU_Nil@2@U52@U52@U52@U52@U52@@wistd@@UEAAPEAXI@Z @ 0x18002FD10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall wistd::_Func_impl<wistd::_Callable_obj<_lambda_f088fa90b8b897459da34f4a84935181_,0>,wistd::details::function_allocator<wistd::_Func_class<void,unsigned long const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>>,void,unsigned long const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &wistd::_Func_base<void,unsigned long const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
