/*
 * XREFs of ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180051C8C
 * Callers:
 *     ?RecalculateVolume@CAudioStream@@UEAAJXZ @ 0x180018680 (-RecalculateVolume@CAudioStream@@UEAAJXZ.c)
 * Callees:
 *     ?_Grow@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA_N_K_N@Z @ 0x18004FE84 (-_Grow@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA_N_K_N@Z.c)
 *     ?copy@?$char_traits@G@std@@SAPEAGPEAGPEBG_K@Z @ 0x180051D7C (-copy@-$char_traits@G@std@@SAPEAGPEAGPEBG_K@Z.c)
 *     ?erase@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_K0@Z @ 0x180051DA4 (-erase@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_K0@Z.c)
 */

_QWORD *__fastcall std::wstring::assign(_QWORD *a1, _QWORD *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rdi
  _QWORD *v6; // rsi
  _QWORD *v7; // rbx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rax
  _QWORD *v10; // rcx
  _QWORD *v11; // rax

  v4 = a2[2];
  v6 = a2;
  v7 = a1;
  if ( v4 < a3 )
  {
    std::_Xout_of_range("invalid string position");
    __debugbreak();
  }
  v8 = v4 - a3;
  if ( a4 < v8 )
    v8 = a4;
  if ( a1 == a2 )
  {
    v9 = v8 + a3;
    if ( a1[2] < v8 + a3 )
    {
      std::_Xout_of_range("invalid string position");
      __debugbreak();
    }
    a1[2] = v9;
    if ( a1[3] >= 8uLL )
      a1 = (_QWORD *)*a1;
    *((_WORD *)a1 + v9) = 0;
    std::wstring::erase(v7);
  }
  else if ( std::wstring::_Grow((__int64)a1, v8) )
  {
    if ( v6[3] >= 8uLL )
      v6 = (_QWORD *)*v6;
    if ( v7[3] < 8uLL )
      v10 = v7;
    else
      v10 = (_QWORD *)*v7;
    std::char_traits<unsigned short>::copy(v10, (char *)v6 + 2 * a3);
    v7[2] = v8;
    if ( v7[3] < 8uLL )
      v11 = v7;
    else
      v11 = (_QWORD *)*v7;
    *((_WORD *)v11 + v8) = 0;
  }
  return v7;
}
