/*
 * XREFs of __scrt_dllmain_uninitialize_critical @ 0x1800361D8
 * Callers:
 *     dllmain_crt_process_detach @ 0x180035D34 (dllmain_crt_process_detach.c)
 * Callees:
 *     ?_Do_call@?$_Func_impl@V_lambda_e798b809e8d9f69eca3e844d88789cba_@@V?$allocator@H@std@@_NPEAUISaDeviceProxy@@@std@@EEAA_N$$QEAPEAUISaDeviceProxy@@@Z @ 0x180038BD0 (-_Do_call@-$_Func_impl@V_lambda_e798b809e8d9f69eca3e844d88789cba_@@V-$allocator@H@std@@_NPEAUISa.c)
 */

__int64 _scrt_dllmain_uninitialize_critical()
{
  __int64 v0; // rcx

  std::_Func_impl<_lambda_e798b809e8d9f69eca3e844d88789cba_,std::allocator<int>,bool,ISaDeviceProxy *>::_Do_call(0LL);
  return std::_Func_impl<_lambda_e798b809e8d9f69eca3e844d88789cba_,std::allocator<int>,bool,ISaDeviceProxy *>::_Do_call(v0);
}
