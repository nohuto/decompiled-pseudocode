/*
 * XREFs of sub_180016F34 @ 0x180016F34
 * Callers:
 *     sub_1800160E4 @ 0x1800160E4 (sub_1800160E4.c)
 *     sub_1800165C8 @ 0x1800165C8 (sub_1800165C8.c)
 *     sub_1800172BC @ 0x1800172BC (sub_1800172BC.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180004C3C (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x180004CF0 (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0@Z.c)
 *     memset @ 0x18002654C (memset.c)
 */

size_t *__fastcall sub_180016F34(size_t *a1, size_t a2, char a3)
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
    std::vector<void *>::_Xlen();
  if ( a2 )
  {
    v7 = v4 + a2;
    if ( v4 + a2 == -1LL )
      std::vector<void *>::_Xlen();
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
          memset(&v11[v9], a3, a2);
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
