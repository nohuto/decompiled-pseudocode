/*
 * XREFs of ?_Delete_this@?$_Func_impl@V_lambda_c9062d0cc6b58ce068de574295fd0aa7_@@V?$allocator@H@std@@_NPEAUISaDeviceProxy@@@std@@EEAAX_N@Z @ 0x1800291B0
 * Callers:
 *     ?FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV?$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800219A0 (-FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV-$function@$$A6A_NPEAUISaDeviceProxy@.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Func_impl<_lambda_c9062d0cc6b58ce068de574295fd0aa7_,std::allocator<int>,bool,ISaDeviceProxy *>::_Delete_this(
        _QWORD *a1,
        char a2)
{
  *a1 = &std::_Func_base<bool,ISaDeviceProxy *>::`vftable';
  if ( a2 )
    std::_Deallocate(a1, 1uLL, 0x10uLL);
}
