/*
 * XREFs of ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD@Z @ 0x18002178C
 * Callers:
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@AEBV10@QEBD@Z @ 0x180021E38 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@QEBD@Z @ 0x180046814 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_180046814.c)
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z @ 0x180021890 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@SAXXZ @ 0x180021980 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@SAXXZ.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K@Z @ 0x180021C60 (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K@Z.c)
 *     memcpy_0 @ 0x18009EAF8 (memcpy_0.c)
 */

_QWORD *__fastcall std::string::append(_QWORD *Src, _BYTE *a2)
{
  _QWORD *v3; // rbx
  size_t v4; // rdi
  size_t v5; // rsi
  _BYTE *v6; // rax
  _BYTE *v7; // rcx
  bool v8; // cf
  _QWORD *v9; // rax

  v3 = Src;
  v4 = -1LL;
  do
    ++v4;
  while ( a2[v4] );
  if ( Src[3] >= 0x10uLL )
    Src = (_QWORD *)*Src;
  if ( Src <= (_QWORD *)a2 && a2 < (_BYTE *)Src + v3[2] )
    return (_QWORD *)std::string::append(v3);
  if ( ~v3[2] <= v4 )
    std::wstring::_Xlen();
  v5 = v3[2] + v4;
  if ( v4 )
  {
    if ( v5 )
    {
      if ( v3[3] < v5 )
        std::string::_Copy(v3);
      if ( v3[3] < 0x10uLL )
        v7 = v3;
      else
        v7 = (_BYTE *)*v3;
      memcpy_0(&v7[v3[2]], a2, v4);
      v8 = v3[3] < 0x10uLL;
      v3[2] = v5;
      if ( v8 )
        v9 = v3;
      else
        v9 = (_QWORD *)*v3;
      *((_BYTE *)v9 + v5) = 0;
    }
    else
    {
      v3[2] = 0LL;
      if ( v3[3] < 0x10uLL )
        v6 = v3;
      else
        v6 = (_BYTE *)*v3;
      *v6 = 0;
    }
  }
  return v3;
}
