/*
 * XREFs of ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K@Z @ 0x180021C60
 * Callers:
 *     ?Initialize@DWMHardwareCursor@@IEAAJXZ @ 0x180020194 (-Initialize@DWMHardwareCursor@@IEAAJXZ.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD@Z @ 0x18002178C (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD@Z.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z @ 0x180021890 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z @ 0x180021994 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@AEBV10@QEBD@Z @ 0x180021E38 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-.c)
 *     ??$_Floating_to_string@M@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@PEBDM@Z @ 0x180046630 (--$_Floating_to_string@M@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@0@PEB.c)
 *     ?insert@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KAEBV12@@Z @ 0x180046CB0 (-insert@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KAEBV12@@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@SAXXZ @ 0x180021980 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@SAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18009DFE0 (--2@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x18009EAF8 (memcpy_0.c)
 */

void __fastcall std::string::_Copy(const void **Src, unsigned __int64 a2)
{
  const void **v2; // rsi
  unsigned __int64 v3; // r14
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rcx
  size_t v6; // rcx
  _QWORD *v7; // rdi
  size_t v8; // rax
  void *v9; // rax
  size_t v10; // r8
  _QWORD *v11; // rcx
  void *v12; // rax

  v2 = Src;
  if ( a2 == -1LL )
    std::wstring::_Xlen();
  v3 = (unsigned __int64)Src[3];
  v4 = a2 | 0xF;
  if ( (a2 | 0xF) == 0xFFFFFFFFFFFFFFFFuLL )
  {
    v4 = a2;
  }
  else
  {
    v5 = v3 >> 1;
    if ( v3 >> 1 > v4 / 3 )
    {
      v4 = v5 + v3;
      if ( v3 > -2LL - v5 )
        v4 = -2LL;
    }
  }
  try
  {
    v6 = v4 + 1;
    v7 = 0LL;
    if ( v4 != -1LL )
    {
      if ( v6 < 0x1000 )
      {
        v7 = operator new(v6);
      }
      else
      {
        v8 = v4 + 40;
        if ( v4 + 40 < v4 + 1 )
          std::_Xbad_alloc();
        v9 = operator new(v8);
        v7 = (_QWORD *)(((unsigned __int64)v9 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *(v7 - 1) = v9;
      }
    }
  }
  catch ( ... )
  {
    v11 = (_QWORD *)(a2 + 1);
    if ( a2 != -1LL )
    {
      if ( (unsigned __int64)v11 < 0x1000 )
      {
        v11 = operator new((size_t)v11);
      }
      else
      {
        if ( a2 + 40 < a2 + 1 )
        {
          std::_Xbad_alloc();
          __debugbreak();
        }
        v12 = operator new(a2 + 40);
        v11 = (_QWORD *)(((unsigned __int64)v12 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *(v11 - 1) = v12;
      }
    }
    v2 = Src;
    v4 = a2;
    v7 = v11;
  }
  v10 = (size_t)v2[2] + 1;
  if ( (unsigned __int64)v2[3] < 0x10 )
  {
    memcpy_0(v7, v2, v10);
  }
  else
  {
    memcpy_0(v7, *v2, v10);
    std::_Deallocate((char *)*v2, v3 + 1, 1uLL);
  }
  *v2 = v7;
  v2[3] = (const void *)v4;
}
