/*
 * XREFs of ?_Delete_this@?$_Func_impl@V?$_Binder@U_Unforced@std@@P8MPCRawInputProvider@@EAAX_N@ZQEAV3@AEBU?$_Ph@$00@2@@std@@V?$allocator@H@2@X_N@std@@EEAAX_N@Z @ 0x180054B90
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::_Func_impl<std::_Binder<std::_Unforced,void (MPCRawInputProvider::*)(bool),MPCRawInputProvider * const,std::_Ph<1> const &>,std::allocator<int>,void,bool>::_Delete_this(
        char *a1,
        char a2)
{
  *(_QWORD *)a1 = &std::_Func_base<void,IMPCInputProviderBase *>::`vftable';
  if ( a2 )
    std::_Deallocate(a1, 1uLL, 0x28uLL);
}
