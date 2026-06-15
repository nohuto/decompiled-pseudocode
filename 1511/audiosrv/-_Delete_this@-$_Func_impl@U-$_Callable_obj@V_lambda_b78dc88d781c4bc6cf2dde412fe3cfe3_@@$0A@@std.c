/*
 * XREFs of ?_Delete_this@?$_Func_impl@U?$_Callable_obj@V_lambda_b78dc88d781c4bc6cf2dde412fe3cfe3_@@$0A@@std@@V?$allocator@V?$_Func_class@_NPEAUISaDeviceProxy@@U_Nil@std@@U23@U23@U23@U23@U23@@std@@@2@_NPEAUISaDeviceProxy@@U_Nil@2@U52@U52@U52@U52@U52@@std@@EEAAX_N@Z @ 0x18008E8F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

void __fastcall std::_Func_impl<std::_Callable_obj<_lambda_b78dc88d781c4bc6cf2dde412fe3cfe3_,0>,std::allocator<std::_Func_class<bool,ISaDeviceProxy *,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,bool,ISaDeviceProxy *,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::_Delete_this(
        void *a1,
        char a2)
{
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)a1 + 40LL))(a1, 0LL);
  if ( a2 )
    operator delete(a1);
}
