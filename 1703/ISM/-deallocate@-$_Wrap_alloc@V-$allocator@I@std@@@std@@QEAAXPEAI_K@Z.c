/*
 * XREFs of ?deallocate@?$_Wrap_alloc@V?$allocator@I@std@@@std@@QEAAXPEAI_K@Z @ 0x18006B4B0
 * Callers:
 *     _std::vector_unsigned_int_std::allocator_unsigned_int___::emplace_back_unsigned_int_const_&___ptr64__::_1_::catch$101 @ 0x1800A299D (_std--vector_unsigned_int_std--allocator_unsigned_int___--emplace_back_unsigned_int_const_-___pt.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Wrap_alloc<std::allocator<unsigned int>>::deallocate(__int64 a1, char *a2, unsigned __int64 a3)
{
  std::_Deallocate(a2, a3, 4uLL);
}
