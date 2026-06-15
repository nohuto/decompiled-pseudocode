/*
 * XREFs of ?_Move@?$_Func_impl@U?$_Callable_obj@V_lambda_0ee856f0c5181214458183efaff16ed8_@@$0A@@std@@V?$allocator@V?$_Func_class@_NPEAUISaDeviceProxy@@U_Nil@std@@U23@U23@U23@U23@U23@@std@@@2@_NPEAUISaDeviceProxy@@U_Nil@2@U52@U52@U52@U52@U52@@std@@UEAAPEAV?$_Func_base@_NPEAUISaDeviceProxy@@U_Nil@std@@U23@U23@U23@U23@U23@@2@PEAX@Z @ 0x180090F90
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x180042E78 (-_Xbad_alloc@std@@YAXXZ.c)
 */

_QWORD *__fastcall std::_Func_impl<std::_Callable_obj<_lambda_0ee856f0c5181214458183efaff16ed8_,0>,std::allocator<std::_Func_class<bool,ISaDeviceProxy *,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,bool,ISaDeviceProxy *,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::_Move(
        __int64 a1,
        _QWORD *a2)
{
  void **v2; // rax

  if ( !a2 )
  {
    a2 = operator new(0x10uLL);
    if ( !a2 )
      std::_Xbad_alloc();
  }
  v2 = &std::_Func_impl<std::_Callable_obj<_lambda_0ee856f0c5181214458183efaff16ed8_,0>,std::allocator<std::_Func_class<bool,ISaDeviceProxy *,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,bool,ISaDeviceProxy *,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::`vftable';
  if ( !a2 )
    v2 = (void **)MEMORY[0];
  *a2 = v2;
  return a2;
}
