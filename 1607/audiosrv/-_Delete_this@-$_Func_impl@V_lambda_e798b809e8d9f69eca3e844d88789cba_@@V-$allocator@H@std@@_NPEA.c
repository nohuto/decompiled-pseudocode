/*
 * XREFs of ?_Delete_this@?$_Func_impl@V_lambda_e798b809e8d9f69eca3e844d88789cba_@@V?$allocator@H@std@@_NPEAUISaDeviceProxy@@@std@@EEAAX_N@Z @ 0x180076E20
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800291CC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::_Func_impl<_lambda_e798b809e8d9f69eca3e844d88789cba_,std::allocator<int>,bool,ISaDeviceProxy *>::_Delete_this(
        _QWORD *a1,
        char a2)
{
  *a1 = &std::_Func_base<bool,ISaDeviceProxy *>::`vftable';
  if ( a2 )
    std::_Deallocate(a1, 1uLL, 0x10uLL);
}
