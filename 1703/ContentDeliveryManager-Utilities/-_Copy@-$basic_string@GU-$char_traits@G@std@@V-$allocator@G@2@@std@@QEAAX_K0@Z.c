/*
 * XREFs of ?_Copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K0@Z @ 0x1800309B0
 * Callers:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18002E944 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?_Grow@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA_N_K_N@Z @ 0x18002FC1C (-_Grow@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA_N_K_N@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x18002FD9C (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x180030ACC (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x1800312E4 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18006A518 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x18006A6D0 (-_Xbad_alloc@std@@YAXXZ.c)
 *     memcpy_0 @ 0x18006F914 (memcpy_0.c)
 */

void __fastcall std::wstring::_Copy(const void **Src, unsigned __int64 a2, const void *a3)
{
  const void *v3; // r14
  const void **v4; // rbx
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  void *v9; // r15
  const void *v10; // rdx
  void *v11; // rax
  unsigned __int64 v12; // rcx
  void *v20; // [rsp+78h] [rbp+20h]

  v3 = a3;
  v4 = Src;
  v5 = a2 | 7;
  if ( (a2 | 7) <= 0x7FFFFFFFFFFFFFFELL )
  {
    v6 = (unsigned __int64)Src[3];
    v7 = v6 >> 1;
    if ( v6 >> 1 > v5 / 3 )
    {
      v5 = v7 + v6;
      if ( v6 > 0x7FFFFFFFFFFFFFFELL - v7 )
        v5 = 0x7FFFFFFFFFFFFFFELL;
    }
  }
  else
  {
    v5 = a2;
  }
  try
  {
    v8 = v5 + 1;
    v9 = 0LL;
    if ( v5 != -1LL && (v8 > 0x7FFFFFFFFFFFFFFFLL || (v9 = operator new(2 * v8)) == 0LL) )
      std::_Xbad_alloc();
  }
  catch ( ... )
  {
    try
    {
      v11 = 0LL;
      v12 = a2 + 1;
      if ( a2 != -1LL && (v12 > 0x7FFFFFFFFFFFFFFFLL || (v11 = operator new(2 * v12)) == 0LL) )
        std::_Xbad_alloc();
      v20 = v11;
    }
    catch ( ... )
    {
      std::wstring::_Tidy((void **)Src, 1, 0LL);
      throw;
    }
    v4 = Src;
    v3 = a3;
    v5 = a2;
    v9 = v20;
  }
  if ( v3 )
  {
    if ( (unsigned __int64)v4[3] < 8 )
      v10 = v4;
    else
      v10 = *v4;
    memcpy_0(v9, v10, 2LL * (_QWORD)v3);
  }
  if ( (unsigned __int64)v4[3] >= 8 )
    operator delete((void *)*v4);
  *v4 = v9;
  v4[3] = (const void *)v5;
  v4[2] = v3;
  if ( v5 >= 8 )
    v4 = (const void **)v9;
  *((_WORD *)v4 + (_QWORD)v3) = 0;
}
