/*
 * XREFs of ?erase@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0@Z @ 0x18002FCF0
 * Callers:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18002E944 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180049A60 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 * Callees:
 *     ?_Xran@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBAXXZ @ 0x180012D14 (-_Xran@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBAXXZ.c)
 */

_QWORD *__fastcall std::wstring::erase(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  bool v5; // cf
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  unsigned __int64 v8; // rdi
  _QWORD *v9; // rax

  v3 = a1[2];
  if ( v3 < a2 )
    std::wstring::_Xran();
  if ( v3 - a2 > a3 )
  {
    if ( a3 )
    {
      if ( a1[3] < 8uLL )
        v7 = a1;
      else
        v7 = (_QWORD *)*a1;
      v8 = v3 - a3;
      if ( v8 != a2 )
        memmove((char *)v7 + 2 * a2, (char *)v7 + 2 * a2 + 2 * a3, 2 * (v8 - a2));
      v5 = a1[3] < 8uLL;
      a1[2] = v8;
      if ( v5 )
        v9 = a1;
      else
        v9 = (_QWORD *)*a1;
      *((_WORD *)v9 + v8) = 0;
    }
  }
  else
  {
    v5 = a1[3] < 8uLL;
    a1[2] = a2;
    if ( v5 )
      v6 = a1;
    else
      v6 = (_QWORD *)*a1;
    *((_WORD *)v6 + a2) = 0;
  }
  return a1;
}
