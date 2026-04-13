/*
 * XREFs of _std::vector_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::allocator_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_______::_Reallocate_::_1_::catch$0 @ 0x1800291AA
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$_Wrap_alloc@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@QEAAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@_K@Z @ 0x180016648 (-deallocate@-$_Wrap_alloc@V-$allocator@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@.c)
 *     _CxxThrowException_0 @ 0x180028090 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::allocator_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_______::_Reallocate_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Wrap_alloc<std::allocator<std::wstring>>::deallocate(a1, *(void **)(a2 + 120));
  throw;
}
