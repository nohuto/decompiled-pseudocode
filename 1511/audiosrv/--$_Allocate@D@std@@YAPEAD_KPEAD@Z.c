/*
 * XREFs of ??$_Allocate@D@std@@YAPEAD_KPEAD@Z @ 0x1800670F4
 * Callers:
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x18006717C (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0@Z.c)
 *     _std::basic_string_char_std::char_traits_char__std::allocator_char___::_Copy_::_1_::catch$1 @ 0x180067262 (_std--basic_string_char_std--char_traits_char__std--allocator_char___--_Copy_--_1_--catch$1.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x180046DB8 (-_Xbad_alloc@std@@YAXXZ.c)
 */

LPVOID __fastcall std::_Allocate<char>(SIZE_T a1)
{
  LPVOID result; // rax

  result = 0LL;
  if ( a1 )
  {
    result = operator new(a1);
    if ( !result )
      std::_Xbad_alloc();
  }
  return result;
}
