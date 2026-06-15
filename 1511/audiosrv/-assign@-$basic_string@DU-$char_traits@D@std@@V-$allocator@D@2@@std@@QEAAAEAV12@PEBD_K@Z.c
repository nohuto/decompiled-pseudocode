/*
 * XREFs of ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z @ 0x1800674E0
 * Callers:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD@Z @ 0x1800674A8 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@PEBD@Z.c)
 * Callees:
 *     ?_Grow@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA_N_K_N@Z @ 0x1800672C0 (-_Grow@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA_N_K_N@Z.c)
 *     ?_Inside@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA_NPEBD@Z @ 0x180067340 (-_Inside@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA_NPEBD@Z.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x1800673E4 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?copy@?$char_traits@D@std@@SAPEADPEADPEBD_K@Z @ 0x180067584 (-copy@-$char_traits@D@std@@SAPEADPEADPEBD_K@Z.c)
 */

_QWORD *__fastcall std::string::assign(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _QWORD *v6; // rax
  _QWORD *v8; // rcx
  bool v9; // cf
  _QWORD *v10; // rax

  if ( std::string::_Inside(a1, a2) )
  {
    if ( a1[3] < 0x10uLL )
      v6 = a1;
    else
      v6 = (_QWORD *)*a1;
    return std::string::assign(a1, a1, a2 - (_QWORD)v6, a3);
  }
  else
  {
    if ( std::string::_Grow(a1, a3, 0) )
    {
      if ( a1[3] < 0x10uLL )
        v8 = a1;
      else
        v8 = (_QWORD *)*a1;
      std::char_traits<char>::copy(v8, a2, a3);
      v9 = a1[3] < 0x10uLL;
      a1[2] = a3;
      if ( v9 )
        v10 = a1;
      else
        v10 = (_QWORD *)*a1;
      *((_BYTE *)v10 + a3) = 0;
    }
    return a1;
  }
}
