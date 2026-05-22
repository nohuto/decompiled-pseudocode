/*
 * XREFs of ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z @ 0x18002A464
 * Callers:
 *     ?Describe@PropertyInfo@Input@@QEBAKPEAGKK@Z @ 0x18002A030 (-Describe@PropertyInfo@Input@@QEBAKPEAGKK@Z.c)
 * Callees:
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@SAXXZ @ 0x180021980 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@SAXXZ.c)
 *     ?_Copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K@Z @ 0x180021B14 (-_Copy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_K@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z @ 0x18002A6E8 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z.c)
 *     memcpy_0 @ 0x18009EAF8 (memcpy_0.c)
 */

_QWORD *__fastcall std::wstring::append(_QWORD *Src, _WORD *a2)
{
  unsigned __int64 v2; // rdi
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  unsigned __int64 v6; // rbp
  _WORD *v7; // rax
  _WORD *v8; // rcx
  bool v9; // cf
  _QWORD *v10; // rax

  v2 = -1LL;
  v4 = Src;
  do
    ++v2;
  while ( a2[v2] );
  if ( Src[3] >= 8uLL )
    Src = (_QWORD *)*Src;
  if ( Src <= (_QWORD *)a2 && a2 < (_WORD *)Src + v4[2] )
    return (_QWORD *)std::wstring::append(v4);
  v5 = v4[2];
  if ( ~v5 <= v2 )
    std::wstring::_Xlen();
  v6 = v5 + v2;
  if ( v2 )
  {
    if ( v6 )
    {
      if ( v4[3] < v6 )
        std::wstring::_Copy((const void **)v4, v5 + v2);
      if ( v4[3] < 8uLL )
        v8 = v4;
      else
        v8 = (_WORD *)*v4;
      memcpy_0(&v8[v4[2]], a2, 2 * v2);
      v9 = v4[3] < 8uLL;
      v4[2] = v6;
      if ( v9 )
        v10 = v4;
      else
        v10 = (_QWORD *)*v4;
      *((_WORD *)v10 + v6) = 0;
    }
    else
    {
      v4[2] = 0LL;
      if ( v4[3] < 8uLL )
        v7 = v4;
      else
        v7 = (_WORD *)*v4;
      *v7 = 0;
    }
  }
  return v4;
}
