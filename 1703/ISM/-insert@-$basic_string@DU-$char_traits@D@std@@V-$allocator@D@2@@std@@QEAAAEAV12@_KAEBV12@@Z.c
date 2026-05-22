/*
 * XREFs of ?insert@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KAEBV12@@Z @ 0x180046CB0
 * Callers:
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@0@Z @ 0x1800468A0 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_1800468A0.c)
 * Callees:
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@SAXXZ @ 0x180021980 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@SAXXZ.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K@Z @ 0x180021C60 (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K@Z.c)
 *     memcpy_0 @ 0x18009EAF8 (memcpy_0.c)
 */

const void **__fastcall std::string::insert(const void **Src, __int64 a2, const void **a3)
{
  size_t v3; // rsi
  const void **v5; // r14
  unsigned __int64 v6; // rcx
  char *v7; // rdi
  _BYTE *v8; // rax
  _QWORD *v9; // rdx
  _QWORD *v10; // rax
  _QWORD *v11; // rdx
  void *v12; // rcx
  void *v13; // rcx
  bool v14; // cf
  void *v15; // rax

  v3 = -1LL;
  v5 = a3;
  v6 = (unsigned __int64)Src[2];
  if ( a3[2] != (const void *)-1LL )
    v3 = (size_t)a3[2];
  if ( ~v6 <= v3 )
    std::wstring::_Xlen();
  v7 = (char *)(v6 + v3);
  if ( v3 )
  {
    if ( v7 )
    {
      if ( Src[3] < v7 )
        std::string::_Copy(Src, v6 + v3);
      if ( (unsigned __int64)Src[3] < 0x10 )
        v9 = Src;
      else
        v9 = *Src;
      if ( (unsigned __int64)Src[3] < 0x10 )
        v10 = Src;
      else
        v10 = *Src;
      memmove((char *)v10 + v3, v9, (size_t)Src[2]);
      if ( Src == v5 )
      {
        if ( (unsigned __int64)Src[3] < 0x10 )
          v11 = Src;
        else
          v11 = *Src;
        if ( (unsigned __int64)Src[3] < 0x10 )
          v12 = Src;
        else
          v12 = (void *)*Src;
        memmove(v12, v11, v3);
      }
      else
      {
        if ( (unsigned __int64)v5[3] >= 0x10 )
          v5 = (const void **)*v5;
        if ( (unsigned __int64)Src[3] < 0x10 )
          v13 = Src;
        else
          v13 = (void *)*Src;
        memcpy_0(v13, v5, v3);
      }
      v14 = (unsigned __int64)Src[3] < 0x10;
      Src[2] = v7;
      if ( v14 )
        v15 = Src;
      else
        v15 = (void *)*Src;
      v7[(_QWORD)v15] = 0;
    }
    else
    {
      Src[2] = 0LL;
      if ( (unsigned __int64)Src[3] < 0x10 )
        v8 = Src;
      else
        v8 = *Src;
      *v8 = 0;
    }
  }
  return Src;
}
