/*
 * XREFs of _std::vector_unsigned_int_std::allocator_unsigned_int___::emplace_back_unsigned_int_const_&___ptr64__::_1_::catch$101 @ 0x1800A299D
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$_Wrap_alloc@V?$allocator@I@std@@@std@@QEAAXPEAI_K@Z @ 0x18006B4B0 (-deallocate@-$_Wrap_alloc@V-$allocator@I@std@@@std@@QEAAXPEAI_K@Z.c)
 *     _CxxThrowException_0 @ 0x18009E220 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_unsigned_int_std::allocator_unsigned_int___::emplace_back_unsigned_int_const_____ptr64__::_1_::catch_101(
        __int64 a1,
        __int64 a2)
{
  std::_Wrap_alloc<std::allocator<unsigned int>>::deallocate(a1, *(char **)(a2 + 112), *(_QWORD *)(a2 + 96));
  throw;
}
