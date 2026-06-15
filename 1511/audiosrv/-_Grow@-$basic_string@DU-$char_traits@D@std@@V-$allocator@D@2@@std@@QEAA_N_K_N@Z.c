/*
 * XREFs of ?_Grow@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA_N_K_N@Z @ 0x1800672C0
 * Callers:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x1800673E4 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z @ 0x1800674E0 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z.c)
 * Callees:
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180046E08 (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x18006717C (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0@Z.c)
 *     ?_Tidy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_N_K@Z @ 0x180067384 (-_Tidy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_N_K@Z.c)
 */

bool __fastcall std::string::_Grow(_QWORD *a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // r8
  bool v5; // cf

  v3 = a2;
  if ( a2 == -1LL )
    std::_Xlength_error("string too long");
  if ( a1[3] >= a2 )
  {
    if ( a3 && a2 < 0x10 )
    {
      v4 = a1[2];
      if ( a2 < v4 )
        v4 = a2;
      LOBYTE(a2) = 1;
      std::string::_Tidy(a1, a2, v4);
    }
    else if ( !a2 )
    {
      v5 = a1[3] < 0x10uLL;
      a1[2] = 0LL;
      if ( !v5 )
        a1 = (_QWORD *)*a1;
      *(_BYTE *)a1 = 0;
    }
  }
  else
  {
    std::string::_Copy(a1, a2, a1[2]);
  }
  return v3 != 0;
}
