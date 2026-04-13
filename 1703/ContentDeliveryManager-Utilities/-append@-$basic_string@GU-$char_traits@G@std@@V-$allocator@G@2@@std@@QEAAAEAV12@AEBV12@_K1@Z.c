/*
 * XREFs of ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x1800312E4
 * Callers:
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEA_N@Z @ 0x18002E680 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_18002E680.c)
 * Callees:
 *     ?_Xran@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBAXXZ @ 0x180012D14 (-_Xran@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBAXXZ.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x180012F28 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K0@Z @ 0x1800309B0 (-_Copy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_K0@Z.c)
 *     memcpy_0 @ 0x18006F914 (memcpy_0.c)
 */

_WORD **__fastcall std::wstring::append(_WORD **a1, _QWORD *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rsi
  _QWORD *v7; // r14
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rdi
  bool v12; // cf
  _WORD *v13; // rax
  _WORD *v14; // rcx
  _WORD *v15; // rax

  v4 = a2[2];
  v5 = a4;
  v7 = a2;
  if ( v4 < a3 )
    std::wstring::_Xran();
  v9 = v4 - a3;
  v10 = (unsigned __int64)a1[2];
  if ( v9 < a4 )
    v5 = v9;
  if ( ~v10 <= v5 )
    std::wstring::_Xlen();
  if ( v5 )
  {
    v11 = v10 + v5;
    if ( v10 + v5 > 0x7FFFFFFFFFFFFFFELL )
      std::wstring::_Xlen();
    if ( (unsigned __int64)a1[3] >= v11 )
    {
      if ( v11 )
      {
LABEL_15:
        if ( v7[3] >= 8uLL )
          v7 = (_QWORD *)*v7;
        if ( (unsigned __int64)a1[3] < 8 )
          v14 = a1;
        else
          v14 = *a1;
        memcpy_0(&v14[(_QWORD)a1[2]], (char *)v7 + 2 * a3, 2 * v5);
        v12 = (unsigned __int64)a1[3] < 8;
        a1[2] = (_WORD *)v11;
        if ( v12 )
          v15 = a1;
        else
          v15 = *a1;
        v15[v11] = 0;
        return a1;
      }
      v12 = (unsigned __int64)a1[3] < 8;
      a1[2] = 0LL;
      if ( v12 )
        v13 = a1;
      else
        v13 = *a1;
      *v13 = 0;
    }
    else
    {
      std::wstring::_Copy((const void **)a1, v10 + v5, (const void *)v10);
    }
    if ( !v11 )
      return a1;
    goto LABEL_15;
  }
  return a1;
}
