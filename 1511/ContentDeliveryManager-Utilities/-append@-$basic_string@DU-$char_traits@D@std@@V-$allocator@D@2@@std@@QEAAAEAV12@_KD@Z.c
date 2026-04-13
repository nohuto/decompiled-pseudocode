/*
 * XREFs of ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x1800174A8
 * Callers:
 *     ?_Getifld@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1HAEBVlocale@2@@Z @ 0x180016658 (-_Getifld@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV-$is.c)
 *     ?_Getffld@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x180016B3C (-_Getffld@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV-$is.c)
 *     ?_Getffldx@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x180017830 (-_Getffldx@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV-$i.c)
 * Callees:
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x180004B0C (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x180004BC0 (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0@Z.c)
 *     memset_0 @ 0x1800280CC (memset_0.c)
 */

size_t *__fastcall std::string::append(size_t *a1, size_t a2, char a3)
{
  size_t v4; // r8
  size_t v7; // rdi
  _BYTE *v8; // rax
  size_t v9; // rcx
  _BYTE *v10; // rax
  _BYTE *v11; // rax
  bool v12; // cf
  _BYTE *v13; // rax

  v4 = a1[2];
  if ( -1LL - v4 <= a2 )
    std::wstring::_Xlen();
  if ( a2 )
  {
    v7 = v4 + a2;
    if ( v4 + a2 == -1LL )
      std::wstring::_Xlen();
    if ( a1[3] >= v7 )
    {
      if ( v7 )
      {
LABEL_12:
        v9 = a1[2];
        if ( a2 == 1 )
        {
          if ( a1[3] < 0x10 )
            v10 = a1;
          else
            v10 = (_BYTE *)*a1;
          v10[v9] = a3;
        }
        else
        {
          if ( a1[3] < 0x10 )
            v11 = a1;
          else
            v11 = (_BYTE *)*a1;
          memset_0(&v11[v9], a3, a2);
        }
        v12 = a1[3] < 0x10;
        a1[2] = v7;
        if ( v12 )
          v13 = a1;
        else
          v13 = (_BYTE *)*a1;
        v13[v7] = 0;
        return a1;
      }
      a1[2] = 0LL;
      if ( a1[3] < 0x10 )
        v8 = a1;
      else
        v8 = (_BYTE *)*a1;
      *v8 = 0;
    }
    else
    {
      std::string::_Copy((const void **)a1, v4 + a2, v4);
    }
    if ( !v7 )
      return a1;
    goto LABEL_12;
  }
  return a1;
}
