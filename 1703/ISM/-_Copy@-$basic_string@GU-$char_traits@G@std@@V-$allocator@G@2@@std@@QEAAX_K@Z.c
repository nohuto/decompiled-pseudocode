/*
 * XREFs of ?_Copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K@Z @ 0x180021B14
 * Callers:
 *     ?UpdateBitmapSource@DWMHardwareCursor@@AEAAJXZ @ 0x180020CE4 (-UpdateBitmapSource@DWMHardwareCursor@@AEAAJXZ.c)
 *     ??$_Construct@PEAD@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXPEADQEADUinput_iterator_tag@1@@Z @ 0x18002201C (--$_Construct@PEAD@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXPEADQEADUin.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z @ 0x18002A36C (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z @ 0x18002A464 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z @ 0x18002A588 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z @ 0x18002A6E8 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@SAXXZ @ 0x180021980 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@SAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18009DFE0 (--2@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x18009EAF8 (memcpy_0.c)
 */

void __fastcall std::wstring::_Copy(const void **Src, unsigned __int64 a2)
{
  const void **v2; // rsi
  unsigned __int64 v3; // r14
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  _QWORD *v7; // rdi
  size_t v8; // rcx
  size_t v9; // rax
  void *v10; // rax
  size_t v12; // r8
  unsigned __int64 v13; // rcx
  size_t v14; // rcx
  void *v15; // rax

  v2 = Src;
  if ( a2 > 0x7FFFFFFFFFFFFFFELL )
    std::wstring::_Xlen();
  v3 = (unsigned __int64)Src[3];
  v4 = a2 | 7;
  if ( (a2 | 7) <= 0x7FFFFFFFFFFFFFFELL )
  {
    v5 = v3 >> 1;
    if ( v3 >> 1 > v4 / 3 )
    {
      v4 = v5 + v3;
      if ( v3 > 0x7FFFFFFFFFFFFFFELL - v5 )
        v4 = 0x7FFFFFFFFFFFFFFELL;
    }
  }
  else
  {
    v4 = a2;
  }
  try
  {
    v6 = v4 + 1;
    v7 = 0LL;
    if ( v4 != -1LL )
    {
      if ( v6 > 0x7FFFFFFFFFFFFFFFLL )
        std::_Xbad_alloc();
      v8 = 2 * v6;
      if ( v8 < 0x1000 )
      {
        v7 = operator new(v8);
      }
      else
      {
        v9 = v8 + 39;
        if ( v8 + 39 < v8 )
          std::_Xbad_alloc();
        v10 = operator new(v9);
        v7 = (_QWORD *)(((unsigned __int64)v10 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *(v7 - 1) = v10;
      }
    }
  }
  catch ( ... )
  {
    v13 = a2 + 1;
    if ( a2 != -1LL )
    {
      if ( v13 > 0x7FFFFFFFFFFFFFFFLL )
      {
        std::_Xbad_alloc();
        __debugbreak();
      }
      v14 = 2 * v13;
      if ( v14 < 0x1000 )
      {
        v13 = (unsigned __int64)operator new(v14);
      }
      else
      {
        if ( v14 + 39 < v14 )
        {
          std::_Xbad_alloc();
          __debugbreak();
        }
        v15 = operator new(v14 + 39);
        v13 = ((unsigned __int64)v15 + 39) & 0xFFFFFFFFFFFFFFE0uLL;
        *(_QWORD *)(v13 - 8) = v15;
      }
    }
    v2 = Src;
    v4 = a2;
    v7 = (_QWORD *)v13;
  }
  v12 = 2LL * (_QWORD)v2[2] + 2;
  if ( (unsigned __int64)v2[3] < 8 )
  {
    memcpy_0(v7, v2, v12);
  }
  else
  {
    memcpy_0(v7, *v2, v12);
    std::_Deallocate((char *)*v2, v3 + 1, 2uLL);
  }
  *v2 = v7;
  v2[3] = (const void *)v4;
}
