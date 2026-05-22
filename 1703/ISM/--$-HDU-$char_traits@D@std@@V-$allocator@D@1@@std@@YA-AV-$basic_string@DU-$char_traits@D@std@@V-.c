/*
 * XREFs of ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@AEBV10@QEBD@Z @ 0x180021E38
 * Callers:
 *     ?Initialize@DWMHardwareCursor@@IEAAJXZ @ 0x180020194 (-Initialize@DWMHardwareCursor@@IEAAJXZ.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD@Z @ 0x18002178C (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD@Z.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z @ 0x180021890 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K@Z @ 0x180021C60 (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K@Z.c)
 *     memcpy_0 @ 0x18009EAF8 (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=1
char **__fastcall std::operator+<char>(char **Src, _QWORD *a2, _BYTE *a3)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  char *v8; // rbx

  Src[2] = 0LL;
  Src[3] = (char *)15;
  *(_BYTE *)Src = 0;
  v6 = -1LL;
  do
    ++v6;
  while ( a3[v6] );
  v7 = a2[2] + v6;
  if ( Src[3] != (char *)v7 )
  {
    if ( (unsigned __int64)Src[3] >= v7 )
    {
      if ( v7 < 0x10 && (unsigned __int64)Src[3] >= 0x10 )
      {
        v8 = *Src;
        memcpy_0(Src, *Src, 1uLL);
        std::_Deallocate(v8, (unsigned __int64)(Src[3] + 1), 1uLL);
        Src[3] = (char *)15;
      }
    }
    else
    {
      std::string::_Copy((const void **)Src, v7);
    }
  }
  std::string::append(Src, a2, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  std::string::append(Src, a3);
  return Src;
}
