/*
 * XREFs of ?_Copy@?$_Func_impl@V_lambda_c9062d0cc6b58ce068de574295fd0aa7_@@V?$allocator@H@std@@_NPEAUISaDeviceProxy@@@std@@EEBAPEAV?$_Func_base@_NPEAUISaDeviceProxy@@@2@PEAX@Z @ 0x180076F80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Func_impl<_lambda_c9062d0cc6b58ce068de574295fd0aa7_,std::allocator<int>,bool,ISaDeviceProxy *>::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  if ( a2 )
  {
    *a2 = &std::_Func_impl<_lambda_c9062d0cc6b58ce068de574295fd0aa7_,std::allocator<int>,bool,ISaDeviceProxy *>::`vftable';
    a2[1] = *(_QWORD *)(a1 + 8);
  }
  return a2;
}
