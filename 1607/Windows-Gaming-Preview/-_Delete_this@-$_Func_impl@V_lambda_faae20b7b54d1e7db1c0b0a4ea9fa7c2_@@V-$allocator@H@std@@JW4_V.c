/*
 * XREFs of ?_Delete_this@?$_Func_impl@V_lambda_faae20b7b54d1e7db1c0b0a4ea9fa7c2_@@V?$allocator@H@std@@JW4_VISUALELEMENT_EVENT_TYPE@@PEAUIApplicationLifecycleEvent@@@std@@EEAAX_N@Z @ 0x18000D540
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180026834 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::_Func_impl<_lambda_faae20b7b54d1e7db1c0b0a4ea9fa7c2_,std::allocator<int>,long,enum _VISUALELEMENT_EVENT_TYPE,IApplicationLifecycleEvent *>::_Delete_this(
        _QWORD *a1,
        char a2)
{
  *a1 = &std::_Func_base<long,enum _VISUALELEMENT_EVENT_TYPE,IApplicationLifecycleEvent *>::`vftable';
  if ( a2 )
    operator delete(a1);
}
