/*
 * XREFs of _std::basic_string_char_std::char_traits_char__std::allocator_char___::_Copy_::_1_::catch$1 @ 0x180067262
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Allocate@D@std@@YAPEAD_KPEAD@Z @ 0x1800670F4 (--$_Allocate@D@std@@YAPEAD_KPEAD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall std::basic_string_char_std::char_traits_char__std::allocator_char___::_Copy_::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a2 + 104);
  *(_QWORD *)(a2 + 104) = v2;
  *(_QWORD *)(a2 + 120) = std::_Allocate<char>(v2 + 1);
  return &loc_1800671FB;
}
