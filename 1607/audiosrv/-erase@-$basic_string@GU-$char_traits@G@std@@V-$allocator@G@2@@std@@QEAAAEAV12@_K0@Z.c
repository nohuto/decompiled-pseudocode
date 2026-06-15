/*
 * XREFs of ?erase@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_K0@Z @ 0x180051DA4
 * Callers:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180051C8C (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::wstring::erase(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rsi
  _QWORD *v4; // rbx
  _WORD *v5; // rax
  unsigned __int64 v6; // rsi
  _QWORD *v7; // rax

  v3 = a1[2];
  v4 = a1;
  if ( v3 > a3 )
  {
    if ( a3 )
    {
      if ( a1[3] >= 8uLL )
        a1 = (_QWORD *)*a1;
      v6 = v3 - a3;
      if ( v6 )
        memmove(a1, (char *)a1 + 2 * a3, 2 * v6);
      v4[2] = v6;
      if ( v4[3] < 8uLL )
        v7 = v4;
      else
        v7 = (_QWORD *)*v4;
      *((_WORD *)v7 + v6) = 0;
    }
  }
  else
  {
    a1[2] = 0LL;
    if ( a1[3] < 8uLL )
      v5 = a1;
    else
      v5 = (_WORD *)*a1;
    *v5 = 0;
  }
  return v4;
}
