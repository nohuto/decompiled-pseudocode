/*
 * XREFs of ?erase@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K0@Z @ 0x1800517C8
 * Callers:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18004FBAC (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::string::erase(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  _QWORD *v4; // rbx
  _BYTE *v5; // rax
  size_t v6; // rdi
  _QWORD *v7; // rax

  v3 = a1[2];
  v4 = a1;
  if ( v3 > a3 )
  {
    if ( a3 )
    {
      if ( a1[3] >= 0x10uLL )
        a1 = (_QWORD *)*a1;
      v6 = v3 - a3;
      if ( v6 )
        memmove(a1, (char *)a1 + a3, v6);
      v4[2] = v6;
      if ( v4[3] < 0x10uLL )
        v7 = v4;
      else
        v7 = (_QWORD *)*v4;
      *((_BYTE *)v7 + v6) = 0;
    }
  }
  else
  {
    a1[2] = 0LL;
    if ( a1[3] < 0x10uLL )
      v5 = a1;
    else
      v5 = (_BYTE *)*a1;
    *v5 = 0;
  }
  return v4;
}
