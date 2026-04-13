/*
 * XREFs of ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x180017670
 * Callers:
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEA_N@Z @ 0x180014E90 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-AV-$istreambuf.c)
 * Callees:
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x180004B0C (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K0@Z @ 0x1800182C4 (-_Copy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_K0@Z.c)
 */

_QWORD *__fastcall std::wstring::append(_QWORD *a1, unsigned __int64 a2, __int16 a3)
{
  __int64 v4; // r8
  unsigned __int64 v7; // rsi
  bool v8; // cf
  _WORD *v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _WORD *v13; // rdi
  unsigned __int64 i; // rcx
  _QWORD *v15; // rax

  v4 = a1[2];
  if ( -1 - v4 <= a2 )
    std::wstring::_Xlen();
  if ( a2 )
  {
    v7 = v4 + a2;
    if ( v4 + a2 > 0x7FFFFFFFFFFFFFFELL )
      std::wstring::_Xlen();
    if ( a1[3] >= v7 )
    {
      if ( v7 )
      {
LABEL_12:
        v10 = a1[2];
        if ( a2 == 1 )
        {
          if ( a1[3] < 8uLL )
            v11 = a1;
          else
            v11 = (_QWORD *)*a1;
          *((_WORD *)v11 + v10) = a3;
        }
        else
        {
          if ( a1[3] < 8uLL )
            v12 = a1;
          else
            v12 = (_QWORD *)*a1;
          v13 = (_WORD *)v12 + v10;
          for ( i = a2; i; --i )
            *v13++ = a3;
        }
        v8 = a1[3] < 8uLL;
        a1[2] = v7;
        if ( v8 )
          v15 = a1;
        else
          v15 = (_QWORD *)*a1;
        *((_WORD *)v15 + v7) = 0;
        return a1;
      }
      v8 = a1[3] < 8uLL;
      a1[2] = 0LL;
      if ( v8 )
        v9 = a1;
      else
        v9 = (_WORD *)*a1;
      *v9 = 0;
    }
    else
    {
      std::wstring::_Copy(a1);
    }
    if ( !v7 )
      return a1;
    goto LABEL_12;
  }
  return a1;
}
