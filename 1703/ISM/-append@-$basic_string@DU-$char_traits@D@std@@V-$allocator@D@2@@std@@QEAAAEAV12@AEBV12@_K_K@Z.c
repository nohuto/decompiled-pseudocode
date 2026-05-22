/*
 * XREFs of ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z @ 0x180021890
 * Callers:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD@Z @ 0x18002178C (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD@Z.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@AEBV10@QEBD@Z @ 0x180021E38 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@0@Z @ 0x1800468A0 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_1800468A0.c)
 * Callees:
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@SAXXZ @ 0x180021980 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@SAXXZ.c)
 *     ?_Xran@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@SAXXZ @ 0x180021C4C (-_Xran@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@SAXXZ.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K@Z @ 0x180021C60 (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K@Z.c)
 *     memcpy_0 @ 0x18009EAF8 (memcpy_0.c)
 */

_QWORD *__fastcall std::string::append(_QWORD *Src, _QWORD *a2, unsigned __int64 a3, size_t a4)
{
  unsigned __int64 v4; // rax
  size_t v5; // rsi
  _QWORD *v7; // r14
  __int64 v9; // rcx
  size_t v10; // rax
  size_t v11; // rdi
  _BYTE *v12; // rax
  _QWORD *v13; // rcx
  bool v14; // cf
  _QWORD *v15; // rax

  v4 = a2[2];
  v5 = a4;
  v7 = a2;
  if ( v4 < a3 )
    std::wstring::_Xran();
  v9 = Src[2];
  v10 = v4 - a3;
  if ( v10 < a4 )
    v5 = v10;
  if ( ~v9 <= v5 )
    std::wstring::_Xlen();
  v11 = v9 + v5;
  if ( v5 )
  {
    if ( v11 )
    {
      if ( Src[3] < v11 )
        std::string::_Copy(Src);
      if ( v7[3] >= 0x10uLL )
        v7 = (_QWORD *)*v7;
      if ( Src[3] < 0x10uLL )
        v13 = Src;
      else
        v13 = (_QWORD *)*Src;
      memcpy_0((char *)v13 + Src[2], (char *)v7 + a3, v5);
      v14 = Src[3] < 0x10uLL;
      Src[2] = v11;
      if ( v14 )
        v15 = Src;
      else
        v15 = (_QWORD *)*Src;
      *((_BYTE *)v15 + v11) = 0;
    }
    else
    {
      Src[2] = 0LL;
      if ( Src[3] < 0x10uLL )
        v12 = Src;
      else
        v12 = (_BYTE *)*Src;
      *v12 = 0;
    }
  }
  return Src;
}
