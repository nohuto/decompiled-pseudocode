/*
 * XREFs of _std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Construct_char_____ptr64__::_1_::catch$10 @ 0x1800A04AC
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x180021AD8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     _CxxThrowException_0 @ 0x18009E220 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Construct_char_____ptr64__::_1_::catch_10(
        __int64 a1,
        __int64 a2)
{
  std::wstring::_Tidy_deallocate(*(_QWORD *)(a2 + 80));
  throw;
}
