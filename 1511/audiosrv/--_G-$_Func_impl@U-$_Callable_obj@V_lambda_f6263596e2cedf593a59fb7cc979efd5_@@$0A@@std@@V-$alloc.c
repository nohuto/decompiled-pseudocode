/*
 * XREFs of ??_G?$_Func_impl@U?$_Callable_obj@V_lambda_f6263596e2cedf593a59fb7cc979efd5_@@$0A@@std@@V?$allocator@V?$_Func_class@_NPEAUISaDeviceProxy@@U_Nil@std@@U23@U23@U23@U23@U23@@std@@@2@_NPEAUISaDeviceProxy@@U_Nil@2@U52@U52@U52@U52@U52@@std@@UEAAPEAXI@Z @ 0x18000E310
 * Callers:
 *     ?_Delete_this@?$_Func_impl@U?$_Callable_obj@V_lambda_0ee856f0c5181214458183efaff16ed8_@@$0A@@std@@V?$allocator@V?$_Func_class@_NPEAUISaDeviceProxy@@U_Nil@std@@U23@U23@U23@U23@U23@@std@@@2@_NPEAUISaDeviceProxy@@U_Nil@2@U52@U52@U52@U52@U52@@std@@EEAAX_N@Z @ 0x18000E340 (-_Delete_this@-$_Func_impl@U-$_Callable_obj@V_lambda_0ee856f0c5181214458183efaff16ed8_@@$0A@@std.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall std::_Func_impl<std::_Callable_obj<_lambda_f6263596e2cedf593a59fb7cc979efd5_,0>,std::allocator<std::_Func_class<bool,ISaDeviceProxy *,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,bool,ISaDeviceProxy *,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &std::_Func_base<bool,ISaDeviceProxy *,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
