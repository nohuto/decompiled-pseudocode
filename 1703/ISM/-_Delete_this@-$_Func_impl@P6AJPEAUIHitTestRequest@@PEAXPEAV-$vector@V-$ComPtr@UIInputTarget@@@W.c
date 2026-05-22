/*
 * XREFs of ?_Delete_this@?$_Func_impl@P6AJPEAUIHitTestRequest@@PEAXPEAV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@ZV?$allocator@H@3@JPEAU1@PEAXPEAV23@@std@@EEAAX_N@Z @ 0x1800054A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::_Func_impl<long (*)(IHitTestRequest *,void *,std::vector<Microsoft::WRL::ComPtr<IInputTarget>> *),std::allocator<int>,long,IHitTestRequest *,void *,std::vector<Microsoft::WRL::ComPtr<IInputTarget>> *>::_Delete_this(
        char *a1,
        char a2)
{
  *(_QWORD *)a1 = &std::_Func_base<void,IMPCInputProviderBase *>::`vftable';
  if ( a2 )
    std::_Deallocate(a1, 1uLL, 0x10uLL);
}
