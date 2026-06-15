/*
 * XREFs of __scrt_initialize_crt @ 0x1800361F4
 * Callers:
 *     dllmain_crt_process_attach @ 0x180035C18 (dllmain_crt_process_attach.c)
 * Callees:
 *     __isa_available_init @ 0x180036A3C (__isa_available_init.c)
 *     ?_Do_call@?$_Func_impl@V_lambda_e798b809e8d9f69eca3e844d88789cba_@@V?$allocator@H@std@@_NPEAUISaDeviceProxy@@@std@@EEAA_N$$QEAPEAUISaDeviceProxy@@@Z @ 0x180038BD0 (-_Do_call@-$_Func_impl@V_lambda_e798b809e8d9f69eca3e844d88789cba_@@V-$allocator@H@std@@_NPEAUISa.c)
 */

char __fastcall _scrt_initialize_crt(int a1)
{
  char v1; // al
  __int64 v2; // rcx
  __int64 v3; // rcx

  v1 = byte_1800CA700;
  if ( !a1 )
    v1 = 1;
  byte_1800CA700 = v1;
  _isa_available_init();
  if ( !(unsigned __int8)std::_Func_impl<_lambda_e798b809e8d9f69eca3e844d88789cba_,std::allocator<int>,bool,ISaDeviceProxy *>::_Do_call(v2) )
    return 0;
  if ( !(unsigned __int8)std::_Func_impl<_lambda_e798b809e8d9f69eca3e844d88789cba_,std::allocator<int>,bool,ISaDeviceProxy *>::_Do_call(v3) )
  {
    std::_Func_impl<_lambda_e798b809e8d9f69eca3e844d88789cba_,std::allocator<int>,bool,ISaDeviceProxy *>::_Do_call(0LL);
    return 0;
  }
  return 1;
}
