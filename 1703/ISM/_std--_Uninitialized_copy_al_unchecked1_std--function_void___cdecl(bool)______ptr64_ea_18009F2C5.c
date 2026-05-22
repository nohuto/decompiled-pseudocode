/*
 * XREFs of _std::_Uninitialized_copy_al_unchecked1_std::function_void___cdecl(bool)______ptr64_std::function_void___cdecl(bool)______ptr64_std::allocator_std::function_void___cdecl(bool)______::_1_::catch$12 @ 0x18009F2C5
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$function@$$A6AX_N@Z@std@@@std@@PEAV?$function@$$A6AX_N@Z@2@@std@@YAXPEAV?$function@$$A6AX_N@Z@0@0AEAU?$_Wrap_alloc@V?$allocator@V?$function@$$A6AX_N@Z@std@@@std@@@0@@Z @ 0x180008940 (--$_Destroy_range@V-$allocator@V-$function@$$A6AX_N@Z@std@@@std@@PEAV-$function@$$A6AX_N@Z@2@@st.c)
 *     _CxxThrowException_0 @ 0x18009E220 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_Uninitialized_copy_al_unchecked1_std::function_void___cdecl_bool_______ptr64_std::function_void___cdecl_bool_______ptr64_std::allocator_std::function_void___cdecl_bool_______::_1_::catch_12(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<std::function<void (bool)>>,std::function<void (bool)> *>(
    *(_QWORD **)(a2 + 104),
    *(_QWORD **)(a2 + 96));
  throw;
}
