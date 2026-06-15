/*
 * XREFs of ?_Copy@?$_Func_impl@V_lambda_c7c1c81e1b12c5b6da40af71127e61d7_@@V?$allocator@H@std@@_NPEAUISaDeviceProxy@@@std@@EEBAPEAV?$_Func_base@_NPEAUISaDeviceProxy@@@2@PEAX@Z @ 0x180076DE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl<_lambda_c7c1c81e1b12c5b6da40af71127e61d7_,std::allocator<int>,bool,ISaDeviceProxy *>::_Copy(
        __int64 a1,
        __int64 a2)
{
  if ( a2 )
  {
    *(_QWORD *)a2 = &std::_Func_impl<_lambda_c7c1c81e1b12c5b6da40af71127e61d7_,std::allocator<int>,bool,ISaDeviceProxy *>::`vftable';
    *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 8);
  }
  return a2;
}
