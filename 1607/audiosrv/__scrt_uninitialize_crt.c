/*
 * XREFs of __scrt_uninitialize_crt @ 0x1800363E4
 * Callers:
 *     dllmain_crt_process_detach @ 0x180035D34 (dllmain_crt_process_detach.c)
 * Callees:
 *     ?_Do_call@?$_Func_impl@V_lambda_e798b809e8d9f69eca3e844d88789cba_@@V?$allocator@H@std@@_NPEAUISaDeviceProxy@@@std@@EEAA_N$$QEAPEAUISaDeviceProxy@@@Z @ 0x180038BD0 (-_Do_call@-$_Func_impl@V_lambda_e798b809e8d9f69eca3e844d88789cba_@@V-$allocator@H@std@@_NPEAUISa.c)
 */

char __fastcall _scrt_uninitialize_crt(__int64 a1, char a2)
{
  char v2; // bl
  __int64 v3; // rcx

  v2 = a1;
  if ( !byte_1800CA700 || !a2 )
  {
    std::_Func_impl<_lambda_e798b809e8d9f69eca3e844d88789cba_,std::allocator<int>,bool,ISaDeviceProxy *>::_Do_call(a1);
    LOBYTE(v3) = v2;
    std::_Func_impl<_lambda_e798b809e8d9f69eca3e844d88789cba_,std::allocator<int>,bool,ISaDeviceProxy *>::_Do_call(v3);
  }
  return 1;
}
