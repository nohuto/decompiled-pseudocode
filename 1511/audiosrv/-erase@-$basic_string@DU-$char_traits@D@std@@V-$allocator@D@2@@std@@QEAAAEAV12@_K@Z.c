/*
 * XREFs of ?erase@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K@Z @ 0x180067754
 * Callers:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x1800673E4 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 * Callees:
 *     ?_Xout_of_range@std@@YAXPEBD@Z @ 0x180046E34 (-_Xout_of_range@std@@YAXPEBD@Z.c)
 */

_QWORD *__fastcall std::string::erase(_QWORD *a1, unsigned __int64 a2)
{
  bool v2; // cf
  _QWORD *v3; // rax

  if ( a1[2] < a2 )
    std::_Xout_of_range("invalid string position");
  v2 = a1[3] < 0x10uLL;
  a1[2] = a2;
  if ( v2 )
    v3 = a1;
  else
    v3 = (_QWORD *)*a1;
  *((_BYTE *)v3 + a2) = 0;
  return a1;
}
