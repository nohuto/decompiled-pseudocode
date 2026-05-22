/*
 * XREFs of ?deallocate@?$_Wrap_alloc@V?$allocator@V?$function@$$A6AX_N@Z@std@@@std@@@std@@QEAAXPEAV?$function@$$A6AX_N@Z@2@_K@Z @ 0x180007F98
 * Callers:
 *     _std::vector_std::function_void___cdecl(bool)__std::allocator_std::function_void___cdecl(bool)_____::emplace_back_std::function_void___cdecl(bool)__&___ptr64__::_1_::catch$131 @ 0x18009F10D (_std--vector_std--function_void___cdecl(bool)__std--allocator_std--function_void____ea_18009F10D.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Wrap_alloc<std::allocator<std::function<void (bool)>>>::deallocate(
        __int64 a1,
        char *a2,
        unsigned __int64 a3)
{
  std::_Deallocate(a2, a3, 0x40uLL);
}
