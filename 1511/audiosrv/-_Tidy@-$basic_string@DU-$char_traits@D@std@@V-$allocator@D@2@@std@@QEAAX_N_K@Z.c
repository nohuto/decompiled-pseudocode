/*
 * XREFs of ?_Tidy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_N_K@Z @ 0x180067384
 * Callers:
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x18006717C (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0@Z.c)
 *     _std::basic_string_char_std::char_traits_char__std::allocator_char___::_Copy_::_1_::catch$0 @ 0x180067293 (_std--basic_string_char_std--char_traits_char__std--allocator_char___--_Copy_--_1_--catch$0.c)
 *     ?_Grow@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA_N_K_N@Z @ 0x1800672C0 (-_Grow@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA_N_K_N@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ?copy@?$char_traits@D@std@@SAPEADPEADPEBD_K@Z @ 0x180067584 (-copy@-$char_traits@D@std@@SAPEADPEADPEBD_K@Z.c)
 */

void __fastcall std::string::_Tidy(_QWORD *a1, char a2, __int64 a3)
{
  void *v5; // rsi

  if ( a2 && a1[3] >= 0x10uLL )
  {
    v5 = (void *)*a1;
    if ( a3 )
      std::char_traits<char>::copy(a1, *a1, a3);
    operator delete(v5);
  }
  a1[3] = 15LL;
  a1[2] = a3;
  *((_BYTE *)a1 + a3) = 0;
}
