/*
 * XREFs of _std::vector_std::pair_unsigned_short_const_____ptr64_unsigned_short_const_____ptr64__std::allocator_std::pair_unsigned_short_const_____ptr64_unsigned_short_const_____ptr64_____::_Reallocate_::_1_::catch$0 @ 0x18003097A
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$_Wrap_alloc@V?$allocator@U?$pair@PEBGPEBG@std@@@std@@@std@@QEAAXPEAU?$pair@PEBGPEBG@2@_K@Z @ 0x1800085C0 (-deallocate@-$_Wrap_alloc@V-$allocator@U-$pair@PEBGPEBG@std@@@std@@@std@@QEAAXPEAU-$pair@PEBGPEB.c)
 *     _CxxThrowException_0 @ 0x18002F35C (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_std::pair_unsigned_short_const_____ptr64_unsigned_short_const_____ptr64__std::allocator_std::pair_unsigned_short_const_____ptr64_unsigned_short_const_____ptr64_____::_Reallocate_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Wrap_alloc<std::allocator<std::pair<unsigned short const *,unsigned short const *>>>::deallocate(
    a1,
    *(char **)(a2 + 96),
    *(_QWORD *)(a2 + 104));
  throw;
}
