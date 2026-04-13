/*
 * XREFs of ??_E?$_Func_impl@U?$_Callable_obj@V_lambda_093e5cd604f7ab5de7acc075fbba0f63_@@$0A@@wistd@@V?$function_allocator@V?$_Func_class@XJPEAUIStorageFolder@Storage@Windows@@U_Nil@wistd@@U45@U45@U45@U45@@wistd@@@details@2@XJPEAUIStorageFolder@Storage@Windows@@U_Nil@2@U82@U82@U82@U82@@wistd@@UEAAPEAXI@Z @ 0x180054D50
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_54b1615c74727b96cfd9244fd3177ed2_::__lambda_54b1615c74727b96cfd9244fd3177ed2_ @ 0x180053048 (_lambda_54b1615c74727b96cfd9244fd3177ed2_--__lambda_54b1615c74727b96cfd9244fd3177ed2_.c)
 */

_QWORD *__fastcall wistd::_Func_impl<wistd::_Callable_obj<_lambda_093e5cd604f7ab5de7acc075fbba0f63_,0>,wistd::details::function_allocator<wistd::_Func_class<void,long,Windows::Storage::IStorageFolder *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>>,void,long,Windows::Storage::IStorageFolder *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = off_180080B30;
  lambda_54b1615c74727b96cfd9244fd3177ed2_::__lambda_54b1615c74727b96cfd9244fd3177ed2_((__int64)(a1 + 1));
  *a1 = &wistd::_Func_base<bool,void *,unsigned __int64,void *,unsigned __int64,unsigned int,wistd::_Nil,wistd::_Nil>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
