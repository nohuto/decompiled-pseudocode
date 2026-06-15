/*
 * XREFs of ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x180051454
 * Callers:
 *     ?str@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x180016DD0 (-str@-$basic_stringbuf@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBA-AV-$basic_string@DU-$c.c)
 *     ?RecalculateVolume@CAudioStream@@UEAAJXZ @ 0x180018680 (-RecalculateVolume@CAudioStream@@UEAAJXZ.c)
 *     ?_Grow@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA_N_K_N@Z @ 0x18004FB4C (-_Grow@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA_N_K_N@Z.c)
 * Callees:
 *     ?_Tidy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_N_K@Z @ 0x180027AD0 (-_Tidy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_N_K@Z.c)
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180028674 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     memcpy_0 @ 0x180038F10 (memcpy_0.c)
 */

void __fastcall std::string::_Copy(const void **Src, unsigned __int64 a2, size_t a3)
{
  size_t v3; // rsi
  const void **v4; // rbx
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rcx
  _QWORD *v8; // r14
  const void **v9; // rdx
  _QWORD *v17; // [rsp+78h] [rbp+20h]

  v3 = a3;
  v4 = Src;
  v5 = a2 | 0xF;
  if ( (a2 | 0xF) == 0xFFFFFFFFFFFFFFFFuLL )
  {
    v5 = a2;
  }
  else
  {
    v6 = (unsigned __int64)Src[3];
    v7 = v6 >> 1;
    if ( v6 >> 1 > v5 / 3 )
    {
      v5 = v7 + v6;
      if ( v6 > -2LL - v7 )
        v5 = -2LL;
    }
  }
  try
  {
    v8 = std::_Allocate(v5 + 1, 1uLL);
  }
  catch ( ... )
  {
    try
    {
      v17 = std::_Allocate(a2 + 1, 1uLL);
    }
    catch ( ... )
    {
      std::string::_Tidy((void **)Src, 1, 0LL);
      throw;
    }
    v4 = Src;
    v3 = a3;
    v5 = a2;
    v8 = v17;
  }
  if ( v3 )
  {
    if ( (unsigned __int64)v4[3] < 0x10 )
      v9 = v4;
    else
      v9 = (const void **)*v4;
    memcpy_0(v8, v9, v3);
  }
  std::string::_Tidy((void **)v4, 1, 0LL);
  if ( v4 )
    *v4 = v8;
  v4[3] = (const void *)v5;
  v4[2] = (const void *)v3;
  if ( (unsigned __int64)v4[3] >= 0x10 )
    v4 = (const void **)*v4;
  *((_BYTE *)v4 + v3) = 0;
}
