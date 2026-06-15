/*
 * XREFs of ?_Delete_this@?$_Func_impl@U?$_Callable_obj@V_lambda_0ee856f0c5181214458183efaff16ed8_@@$0A@@std@@V?$allocator@V?$_Func_class@_NPEAUISaDeviceProxy@@U_Nil@std@@U23@U23@U23@U23@U23@@std@@@2@_NPEAUISaDeviceProxy@@U_Nil@2@U52@U52@U52@U52@U52@@std@@EEAAX_N@Z @ 0x18000E340
 * Callers:
 *     ?FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV?$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x18000C4D0 (-FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV-$function@$$A6A_NPEAUISaDeviceProxy@.c)
 * Callees:
 *     ??_G?$_Func_impl@U?$_Callable_obj@V_lambda_f6263596e2cedf593a59fb7cc979efd5_@@$0A@@std@@V?$allocator@V?$_Func_class@_NPEAUISaDeviceProxy@@U_Nil@std@@U23@U23@U23@U23@U23@@std@@@2@_NPEAUISaDeviceProxy@@U_Nil@2@U52@U52@U52@U52@U52@@std@@UEAAPEAXI@Z @ 0x18000E310 (--_G-$_Func_impl@U-$_Callable_obj@V_lambda_f6263596e2cedf593a59fb7cc979efd5_@@$0A@@std@@V-$alloc.c)
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

void __fastcall std::_Func_impl<std::_Callable_obj<_lambda_0ee856f0c5181214458183efaff16ed8_,0>,std::allocator<std::_Func_class<bool,ISaDeviceProxy *,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,bool,ISaDeviceProxy *,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::_Delete_this(
        _QWORD *a1,
        char a2)
{
  _QWORD *(__fastcall *v4)(_QWORD *, char); // rdi

  v4 = *(_QWORD *(__fastcall **)(_QWORD *, char))(*a1 + 40LL);
  if ( v4 == std::_Func_impl<std::_Callable_obj<_lambda_f6263596e2cedf593a59fb7cc979efd5_,0>,std::allocator<std::_Func_class<bool,ISaDeviceProxy *,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,bool,ISaDeviceProxy *,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::`scalar deleting destructor' )
    std::_Func_impl<std::_Callable_obj<_lambda_f6263596e2cedf593a59fb7cc979efd5_,0>,std::allocator<std::_Func_class<bool,ISaDeviceProxy *,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,bool,ISaDeviceProxy *,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::`scalar deleting destructor'(
      a1,
      0);
  else
    v4(a1, 0);
  if ( a2 )
    operator delete(a1);
}
