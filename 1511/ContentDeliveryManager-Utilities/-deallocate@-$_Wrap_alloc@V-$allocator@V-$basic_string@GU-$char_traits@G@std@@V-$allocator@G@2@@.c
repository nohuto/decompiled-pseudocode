/*
 * XREFs of ?deallocate@?$_Wrap_alloc@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@QEAAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@_K@Z @ 0x180016648
 * Callers:
 *     _std::vector_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::allocator_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_______::_Reallocate_::_1_::catch$0 @ 0x1800291AA (_std--vector_std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_un.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Wrap_alloc<std::allocator<std::wstring>>::deallocate(__int64 a1, void *a2)
{
  operator delete(a2);
}
