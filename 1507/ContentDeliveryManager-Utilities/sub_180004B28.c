/*
 * XREFs of sub_180004B28 @ 0x180004B28
 * Callers:
 *     sub_180004A0C @ 0x180004A0C (sub_180004A0C.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ @ 0x180004B10 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ.c)
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180004C3C (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_180004C54 @ 0x180004C54 (sub_180004C54.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x180004CF0 (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0@Z.c)
 *     memcpy @ 0x180026528 (memcpy.c)
 */

void **__fastcall sub_180004B28(void **a1, void **a2, unsigned __int64 a3, size_t a4)
{
  unsigned __int64 v4; // rdi
  void **v6; // rsi
  void **v7; // rbx
  size_t v8; // rdi
  size_t v9; // rax
  bool v10; // cf
  _BYTE *v11; // rax
  void *v12; // rcx
  void **v13; // rax

  v4 = (unsigned __int64)a2[2];
  v6 = a2;
  v7 = a1;
  if ( v4 < a3 )
    std::vector<void *>::_Xlen();
  v8 = v4 - a3;
  if ( a4 < v8 )
    v8 = a4;
  if ( a1 == a2 )
  {
    v9 = v8 + a3;
    if ( (unsigned __int64)a1[2] < v8 + a3 )
      std::vector<void *>::_Xlen();
    v10 = (unsigned __int64)a1[3] < 0x10;
    a1[2] = (void *)v9;
    if ( !v10 )
      a1 = (void **)*a1;
    *((_BYTE *)a1 + v9) = 0;
    sub_180004C54(v7, 0LL);
    return v7;
  }
  if ( v8 == -1LL )
    std::vector<void *>::_Xlen(a1);
  if ( (unsigned __int64)a1[3] < v8 )
  {
    std::string::_Copy(a1);
    goto LABEL_17;
  }
  if ( !v8 )
  {
    a1[2] = 0LL;
    if ( (unsigned __int64)a1[3] < 0x10 )
      v11 = a1;
    else
      v11 = *a1;
    *v11 = 0;
LABEL_17:
    if ( !v8 )
      return v7;
  }
  if ( (unsigned __int64)v6[3] >= 0x10 )
    v6 = (void **)*v6;
  if ( (unsigned __int64)v7[3] < 0x10 )
    v12 = v7;
  else
    v12 = *v7;
  memcpy(v12, (char *)v6 + a3, v8);
  v10 = (unsigned __int64)v7[3] < 0x10;
  v7[2] = (void *)v8;
  if ( v10 )
    v13 = v7;
  else
    v13 = (void **)*v7;
  *((_BYTE *)v13 + v8) = 0;
  return v7;
}
