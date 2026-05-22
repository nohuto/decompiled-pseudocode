/*
 * XREFs of ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z @ 0x18002A6E8
 * Callers:
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z @ 0x18002A464 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z.c)
 * Callees:
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@SAXXZ @ 0x180021980 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@SAXXZ.c)
 *     ?_Copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K@Z @ 0x180021B14 (-_Copy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_K@Z.c)
 *     ?_Xran@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@SAXXZ @ 0x180021C4C (-_Xran@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@SAXXZ.c)
 *     memcpy_0 @ 0x18009EAF8 (memcpy_0.c)
 */

const void **__fastcall std::wstring::append(const void **Src, _QWORD *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rsi
  _QWORD *v7; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  char *v11; // rdi
  _WORD *v12; // rax
  _QWORD *v13; // rcx
  bool v14; // cf
  _QWORD *v15; // rax

  v4 = a2[2];
  v5 = a4;
  v7 = a2;
  if ( v4 < a3 )
    std::wstring::_Xran();
  v9 = (unsigned __int64)Src[2];
  v10 = v4 - a3;
  if ( v10 < a4 )
    v5 = v10;
  if ( ~v9 <= v5 )
    std::wstring::_Xlen();
  v11 = (char *)(v9 + v5);
  if ( v5 )
  {
    if ( v11 )
    {
      if ( Src[3] < v11 )
        std::wstring::_Copy(Src, v9 + v5);
      if ( v7[3] >= 8uLL )
        v7 = (_QWORD *)*v7;
      if ( (unsigned __int64)Src[3] < 8 )
        v13 = Src;
      else
        v13 = *Src;
      memcpy_0((char *)v13 + 2 * (_QWORD)Src[2], (char *)v7 + 2 * a3, 2 * v5);
      v14 = (unsigned __int64)Src[3] < 8;
      Src[2] = v11;
      if ( v14 )
        v15 = Src;
      else
        v15 = *Src;
      *((_WORD *)v15 + (_QWORD)v11) = 0;
    }
    else
    {
      Src[2] = 0LL;
      if ( (unsigned __int64)Src[3] < 8 )
        v12 = Src;
      else
        v12 = *Src;
      *v12 = 0;
    }
  }
  return Src;
}
