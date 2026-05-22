/*
 * XREFs of _std::vector_std::function_void___cdecl(bool)__std::allocator_std::function_void___cdecl(bool)_____::emplace_back_std::function_void___cdecl(bool)__&___ptr64__::_1_::catch$131 @ 0x18009F10D
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Unfancy@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@YAPEAV?$ComPtr@VWGIController@@@WRL@Microsoft@@PEAV123@@Z @ 0x18000546C (--$_Unfancy@V-$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@YAPEAV-$ComPtr@VWGIController@@@WRL@.c)
 *     ?deallocate@?$_Wrap_alloc@V?$allocator@V?$function@$$A6AX_N@Z@std@@@std@@@std@@QEAAXPEAV?$function@$$A6AX_N@Z@2@_K@Z @ 0x180007F98 (-deallocate@-$_Wrap_alloc@V-$allocator@V-$function@$$A6AX_N@Z@std@@@std@@@std@@QEAAXPEAV-$functi.c)
 *     ??$destroy@V?$function@$$A6AX_N@Z@std@@@?$_Wrap_alloc@V?$allocator@V?$function@$$A6AX_N@Z@std@@@std@@@std@@QEAAXPEAV?$function@$$A6AX_N@Z@1@@Z @ 0x180008B6C (--$destroy@V-$function@$$A6AX_N@Z@std@@@-$_Wrap_alloc@V-$allocator@V-$function@$$A6AX_N@Z@std@@@.c)
 *     _CxxThrowException_0 @ 0x18009E220 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_std::function_void___cdecl_bool___std::allocator_std::function_void___cdecl_bool______::emplace_back_std::function_void___cdecl_bool_______ptr64__::_1_::catch_131(
        __int64 a1,
        __int64 a2)
{
  char *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx

  v3 = *(char **)(a2 + 160);
  if ( *(_BYTE *)(a2 + 144) )
  {
    v4 = std::_Unfancy<Microsoft::WRL::ComPtr<WGIController>>((__int64)&v3[64 * *(_QWORD *)(a2 + 48)]);
    std::_Wrap_alloc<std::allocator<std::function<void (bool)>>>::destroy<std::function<void (bool)>>(v5, v4);
  }
  std::_Wrap_alloc<std::allocator<std::function<void (bool)>>>::deallocate(a1, v3, *(_QWORD *)(a2 + 168));
  throw;
}
