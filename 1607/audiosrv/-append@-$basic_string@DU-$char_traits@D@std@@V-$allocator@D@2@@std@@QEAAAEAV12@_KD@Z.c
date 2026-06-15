/*
 * XREFs of ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180051664
 * Callers:
 *     ?message@_System_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x1800518D0 (-message@_System_error_category@std@@UEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 * Callees:
 *     ?_Grow@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA_N_K_N@Z @ 0x18004FB4C (-_Grow@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA_N_K_N@Z.c)
 *     ?_Chassign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0D@Z @ 0x180051424 (-_Chassign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0D@Z.c)
 */

_QWORD *__fastcall std::string::append(_QWORD *a1, size_t a2)
{
  __int64 v3; // rcx
  size_t v5; // rsi
  _QWORD *v6; // rax

  v3 = a1[2];
  if ( -1 - v3 <= a2 )
    std::_Xlength_error("string too long");
  if ( a2 )
  {
    v5 = v3 + a2;
    if ( std::string::_Grow(a1, v3 + a2) )
    {
      std::string::_Chassign(a1, a1[2], a2);
      a1[2] = v5;
      if ( a1[3] < 0x10uLL )
        v6 = a1;
      else
        v6 = (_QWORD *)*a1;
      *((_BYTE *)v6 + v5) = 0;
    }
  }
  return a1;
}
