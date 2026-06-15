/*
 * XREFs of _std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Copy_::_1_::catch$1 @ 0x18003B0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180028674 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Copy_::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a2 + 104);
  *(_QWORD *)(a2 + 104) = v2;
  *(_QWORD *)(a2 + 120) = std::_Allocate(v2 + 1, 2uLL);
  return &loc_18004766F;
}
