/*
 * XREFs of _std::vector_InputProvider_std::allocator_InputProvider___::emplace_back_InputProvider__::_1_::catch$103 @ 0x1800A0C73
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$_Wrap_alloc@V?$allocator@UInputProvider@@@std@@@std@@QEAAXPEAUInputProvider@@_K@Z @ 0x1800052BC (-deallocate@-$_Wrap_alloc@V-$allocator@UInputProvider@@@std@@@std@@QEAAXPEAUInputProvider@@_K@Z.c)
 *     ??$_Unfancy@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@YAPEAV?$ComPtr@VWGIController@@@WRL@Microsoft@@PEAV123@@Z @ 0x18000546C (--$_Unfancy@V-$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@YAPEAV-$ComPtr@VWGIController@@@WRL@.c)
 *     ??$destroy@UInputProvider@@@?$_Wrap_alloc@V?$allocator@UInputProvider@@@std@@@std@@QEAAXPEAUInputProvider@@@Z @ 0x180005470 (--$destroy@UInputProvider@@@-$_Wrap_alloc@V-$allocator@UInputProvider@@@std@@@std@@QEAAXPEAUInpu.c)
 *     _CxxThrowException_0 @ 0x18009E220 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_InputProvider_std::allocator_InputProvider___::emplace_back_InputProvider__::_1_::catch_103(
        __int64 a1,
        _QWORD *a2)
{
  char *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx

  v3 = (char *)a2[16];
  v4 = std::_Unfancy<Microsoft::WRL::ComPtr<WGIController>>((__int64)&v3[24 * a2[19]]);
  std::_Wrap_alloc<std::allocator<InputProvider>>::destroy<InputProvider>(v5, v4);
  std::_Wrap_alloc<std::allocator<InputProvider>>::deallocate(v6, v3, a2[18]);
  throw;
}
