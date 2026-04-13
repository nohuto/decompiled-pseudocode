/*
 * XREFs of ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x180030ACC
 * Callers:
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEA_N@Z @ 0x18002E680 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_18002E680.c)
 *     ??$_Construct@V?$_String_iterator@V?$_String_val@U?$_Simple_types@D@std@@@std@@@std@@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXV?$_String_iterator@V?$_String_val@U?$_Simple_types@D@std@@@std@@@1@0Uforward_iterator_tag@1@@Z @ 0x1800333A0 (--$_Construct@V-$_String_iterator@V-$_String_val@U-$_Simple_types@D@std@@@std@@@std@@@-$basic_st.c)
 * Callees:
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x180012F28 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K0@Z @ 0x1800309B0 (-_Copy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_K0@Z.c)
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
