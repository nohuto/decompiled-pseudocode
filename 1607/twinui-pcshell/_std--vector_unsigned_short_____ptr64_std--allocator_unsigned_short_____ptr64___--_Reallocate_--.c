/*
 * XREFs of _std::vector_unsigned_short_____ptr64_std::allocator_unsigned_short_____ptr64___::_Reallocate_::_1_::catch$0 @ 0x180030DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$_Wrap_alloc@V?$allocator@PEAG@std@@@std@@QEAAXPEAPEAG_K@Z @ 0x18000C104 (-deallocate@-$_Wrap_alloc@V-$allocator@PEAG@std@@@std@@QEAAXPEAPEAG_K@Z.c)
 *     _CxxThrowException_0 @ 0x18002F35C (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_unsigned_short_____ptr64_std::allocator_unsigned_short_____ptr64___::_Reallocate_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Wrap_alloc<std::allocator<unsigned short *>>::deallocate(a1, *(char **)(a2 + 80), *(_QWORD *)(a2 + 88));
  throw;
}
