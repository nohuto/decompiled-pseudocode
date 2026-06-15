/*
 * XREFs of _std::vector_CVADServer_____ptr64_std::allocator_CVADServer_____ptr64___::_Reallocate_::_1_::catch$0 @ 0x180039A60
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800291CC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _CxxThrowException_0 @ 0x180038EF8 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_CVADServer_____ptr64_std::allocator_CVADServer_____ptr64___::_Reallocate_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate(*(_QWORD **)(a2 + 80), *(_QWORD *)(a2 + 88), 8uLL);
  throw;
}
