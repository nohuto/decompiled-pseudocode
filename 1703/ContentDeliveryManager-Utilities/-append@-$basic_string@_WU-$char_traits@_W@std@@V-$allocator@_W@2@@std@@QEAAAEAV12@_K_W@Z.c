/*
 * XREFs of ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z @ 0x180063B60
 * Callers:
 *     ?do_get@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHAEA_N@Z @ 0x180062650 (-do_get@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEB_ea_180062650.c)
 * Callees:
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x180012F28 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Copy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_K0@Z @ 0x180049D7C (-_Copy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_K0@Z.c)
 */

_WORD **__fastcall std::wstring::append(_WORD **a1, unsigned __int64 a2, __int16 a3)
{
  unsigned __int64 v5; // r8
  unsigned __int64 v7; // rsi
  bool v8; // cf
  _WORD *v9; // rax
  _WORD *v10; // rcx
  _WORD *v11; // rax
  _WORD *v12; // rax
  _WORD *v13; // rdi
  unsigned __int64 i; // rcx
  _WORD *v15; // rax

  v5 = (unsigned __int64)a1[2];
  if ( ~v5 <= a2 )
    std::wstring::_Xlen();
  if ( a2 )
  {
    v7 = v5 + a2;
    if ( v5 + a2 > 0x7FFFFFFFFFFFFFFELL )
      std::wstring::_Xlen();
    if ( (unsigned __int64)a1[3] >= v7 )
    {
      if ( v7 )
      {
LABEL_12:
        v10 = a1[2];
        if ( a2 == 1 )
        {
          if ( (unsigned __int64)a1[3] < 8 )
            v11 = a1;
          else
            v11 = *a1;
          v11[(_QWORD)v10] = a3;
        }
        else
        {
          if ( (unsigned __int64)a1[3] < 8 )
            v12 = a1;
          else
            v12 = *a1;
          v13 = &v12[(_QWORD)v10];
          for ( i = a2; i; --i )
            *v13++ = a3;
        }
        v8 = (unsigned __int64)a1[3] < 8;
        a1[2] = (_WORD *)v7;
        if ( v8 )
          v15 = a1;
        else
          v15 = *a1;
        v15[v7] = 0;
        return a1;
      }
      v8 = (unsigned __int64)a1[3] < 8;
      a1[2] = 0LL;
      if ( v8 )
        v9 = a1;
      else
        v9 = *a1;
      *v9 = 0;
    }
    else
    {
      std::wstring::_Copy((const void **)a1, v5 + a2, (const void *)v5);
    }
    if ( !v7 )
      return a1;
    goto LABEL_12;
  }
  return a1;
}
