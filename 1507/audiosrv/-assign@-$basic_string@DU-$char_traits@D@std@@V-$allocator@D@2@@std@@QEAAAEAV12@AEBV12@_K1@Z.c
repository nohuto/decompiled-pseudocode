/*
 * XREFs of ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180068A14
 * Callers:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z @ 0x180068B10 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z.c)
 * Callees:
 *     ?_Xout_of_range@std@@YAXPEBD@Z @ 0x180042EF4 (-_Xout_of_range@std@@YAXPEBD@Z.c)
 *     ?_Grow@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA_N_K_N@Z @ 0x1800688F0 (-_Grow@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA_N_K_N@Z.c)
 *     ?copy@?$char_traits@D@std@@SAPEADPEADPEBD_K@Z @ 0x180068BB4 (-copy@-$char_traits@D@std@@SAPEADPEADPEBD_K@Z.c)
 *     ?erase@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K0@Z @ 0x180068CE0 (-erase@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_K0@Z.c)
 *     ?erase@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K@Z @ 0x180068D84 (-erase@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_K@Z.c)
 */

_QWORD *__fastcall std::string::assign(_QWORD *a1, _QWORD *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rdi
  _QWORD *v6; // rsi
  unsigned __int64 v8; // rdi
  _QWORD *v9; // rcx
  bool v10; // cf
  _QWORD *v11; // rax

  v4 = a2[2];
  v6 = a2;
  if ( v4 < a3 )
    std::_Xout_of_range("invalid string position");
  v8 = v4 - a3;
  if ( a4 < v8 )
    v8 = a4;
  if ( a1 == a2 )
  {
    std::string::erase(a1, v8 + a3);
    std::string::erase(a1, 0LL, a3);
  }
  else if ( std::string::_Grow(a1, v8, 0) )
  {
    if ( v6[3] >= 0x10uLL )
      v6 = (_QWORD *)*v6;
    if ( a1[3] < 0x10uLL )
      v9 = a1;
    else
      v9 = (_QWORD *)*a1;
    std::char_traits<char>::copy(v9, (char *)v6 + a3, v8);
    v10 = a1[3] < 0x10uLL;
    a1[2] = v8;
    if ( v10 )
      v11 = a1;
    else
      v11 = (_QWORD *)*a1;
    *((_BYTE *)v11 + v8) = 0;
  }
  return a1;
}
