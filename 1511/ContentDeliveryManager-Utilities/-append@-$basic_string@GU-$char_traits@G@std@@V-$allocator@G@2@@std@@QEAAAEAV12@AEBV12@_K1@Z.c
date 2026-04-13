/*
 * XREFs of ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x1800181A0
 * Callers:
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEA_N@Z @ 0x180014E90 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-AV-$istreambuf.c)
 * Callees:
 *     ?_Xran@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x1800049E0 (-_Xran@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x180004B0C (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K0@Z @ 0x1800182C4 (-_Copy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_K0@Z.c)
 *     memcpy_0 @ 0x1800280A8 (memcpy_0.c)
 */

_QWORD *__fastcall std::wstring::append(_QWORD *a1, _QWORD *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rsi
  _QWORD *v7; // r14
  unsigned __int64 v9; // rax
  __int64 v10; // r8
  unsigned __int64 v11; // rdi
  bool v12; // cf
  _WORD *v13; // rax
  _QWORD *v14; // rcx
  _QWORD *v15; // rax

  v4 = a2[2];
  v5 = a4;
  v7 = a2;
  if ( v4 < a3 )
    std::wstring::_Xran();
  v9 = v4 - a3;
  v10 = a1[2];
  if ( v9 < a4 )
    v5 = v9;
  if ( -1 - v10 <= v5 )
    std::wstring::_Xlen();
  if ( v5 )
  {
    v11 = v10 + v5;
    if ( v10 + v5 > 0x7FFFFFFFFFFFFFFELL )
      std::wstring::_Xlen();
    if ( a1[3] >= v11 )
    {
      if ( v11 )
      {
LABEL_15:
        if ( v7[3] >= 8uLL )
          v7 = (_QWORD *)*v7;
        if ( a1[3] < 8uLL )
          v14 = a1;
        else
          v14 = (_QWORD *)*a1;
        memcpy_0((char *)v14 + 2 * a1[2], (char *)v7 + 2 * a3, 2 * v5);
        v12 = a1[3] < 8uLL;
        a1[2] = v11;
        if ( v12 )
          v15 = a1;
        else
          v15 = (_QWORD *)*a1;
        *((_WORD *)v15 + v11) = 0;
        return a1;
      }
      v12 = a1[3] < 8uLL;
      a1[2] = 0LL;
      if ( v12 )
        v13 = a1;
      else
        v13 = (_WORD *)*a1;
      *v13 = 0;
    }
    else
    {
      std::wstring::_Copy(a1);
    }
    if ( !v11 )
      return a1;
    goto LABEL_15;
  }
  return a1;
}
