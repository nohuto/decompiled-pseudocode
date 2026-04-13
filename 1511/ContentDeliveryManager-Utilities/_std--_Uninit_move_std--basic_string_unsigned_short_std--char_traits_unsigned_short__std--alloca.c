/*
 * XREFs of _std::_Uninit_move_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short________ptr64_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short________ptr64_std::allocator_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______::_1_::catch$0 @ 0x180029488
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180028090 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_Uninit_move_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short________ptr64_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short________ptr64_std::allocator_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  __int64 i; // rbx

  for ( i = *(_QWORD *)(a2 + 104); i != *(_QWORD *)(a2 + 96); i += 32LL )
  {
    if ( *(_QWORD *)(i + 24) >= 8uLL )
      operator delete(*(void **)i);
    *(_QWORD *)(i + 24) = 7LL;
    *(_QWORD *)(i + 16) = 0LL;
    *(_WORD *)i = 0;
  }
  throw;
}
