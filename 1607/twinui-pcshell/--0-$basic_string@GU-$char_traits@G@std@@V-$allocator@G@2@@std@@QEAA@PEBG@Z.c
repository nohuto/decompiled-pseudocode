/*
 * XREFs of ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEBG@Z @ 0x18001A070
 * Callers:
 *     ??$make_shared@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEAG@std@@YA?AV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEAPEAG@Z @ 0x180019CE0 (--$make_shared@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAPEAG@std@@YA-AV-.c)
 * Callees:
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x180009ABC (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180019DF4 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?_Copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K0@Z @ 0x180019F6C (-_Copy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_K0@Z.c)
 *     memcpy_0 @ 0x180030408 (memcpy_0.c)
 */

const void **__fastcall std::wstring::wstring(const void **a1, char *Src)
{
  const void **v3; // rbx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rdx
  char *v6; // rax
  const void **v7; // rax
  _WORD *v8; // rax
  void *v9; // rcx
  const void **v10; // rax

  a1[3] = (const void *)7;
  a1[2] = 0LL;
  *(_WORD *)a1 = 0;
  v3 = a1;
  if ( *(_WORD *)Src )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( *(_WORD *)&Src[2 * v4] );
  }
  else
  {
    v4 = 0LL;
  }
  v5 = (unsigned __int64)a1[3];
  if ( v5 < 8 )
    v6 = (char *)a1;
  else
    v6 = (char *)*a1;
  if ( Src >= v6 )
  {
    if ( v5 >= 8 )
      a1 = (const void **)*a1;
    if ( a1 > (const void **)Src )
    {
      if ( v5 < 8 )
        v7 = v3;
      else
        v7 = (const void **)*v3;
      std::wstring::assign(v3, v3, (Src - (char *)v7) >> 1, v4);
      return v3;
    }
  }
  if ( v4 > 0x7FFFFFFFFFFFFFFELL )
    std::wstring::_Xlen();
  if ( v5 < v4 )
  {
    std::wstring::_Copy(v3, v4, 0LL);
    goto LABEL_24;
  }
  if ( !v4 )
  {
    v3[2] = 0LL;
    if ( v5 < 8 )
      v8 = v3;
    else
      v8 = *v3;
    *v8 = 0;
LABEL_24:
    if ( !v4 )
      return v3;
  }
  if ( (unsigned __int64)v3[3] < 8 )
    v9 = v3;
  else
    v9 = (void *)*v3;
  memcpy_0(v9, Src, 2 * v4);
  v3[2] = (const void *)v4;
  if ( (unsigned __int64)v3[3] < 8 )
    v10 = v3;
  else
    v10 = (const void **)*v3;
  *((_WORD *)v10 + v4) = 0;
  return v3;
}
