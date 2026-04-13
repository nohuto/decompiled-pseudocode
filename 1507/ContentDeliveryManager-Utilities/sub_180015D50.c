/*
 * XREFs of sub_180015D50 @ 0x180015D50
 * Callers:
 *     sub_1800120D0 @ 0x1800120D0 (sub_1800120D0.c)
 *     sub_180015E80 @ 0x180015E80 (sub_180015E80.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ @ 0x180004B10 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ.c)
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180004C3C (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18001720C @ 0x18001720C (sub_18001720C.c)
 *     unknown_libname_7 @ 0x180017D50 (unknown_libname_7.c)
 *     memcpy @ 0x180026528 (memcpy.c)
 */

void **__fastcall sub_180015D50(void **a1, void **a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rdi
  void **v6; // r14
  void **v7; // rbx
  unsigned __int64 v8; // rdi
  void *v9; // rax
  bool v10; // cf
  _WORD *v11; // rax
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
    v9 = (void *)(v8 + a3);
    if ( (unsigned __int64)a1[2] < v8 + a3 )
      std::vector<void *>::_Xlen();
    v10 = (unsigned __int64)a1[3] < 8;
    a1[2] = v9;
    if ( !v10 )
      a1 = (void **)*a1;
    *((_WORD *)a1 + (_QWORD)v9) = 0;
    sub_18001720C(v7, 0LL);
    return v7;
  }
  if ( v8 > 0x7FFFFFFFFFFFFFFELL )
    std::vector<void *>::_Xlen();
  if ( (unsigned __int64)a1[3] < v8 )
  {
    unknown_libname_7(a1);
    goto LABEL_17;
  }
  if ( !v8 )
  {
    v10 = (unsigned __int64)a1[3] < 8;
    a1[2] = 0LL;
    if ( v10 )
      v11 = a1;
    else
      v11 = *a1;
    *v11 = 0;
LABEL_17:
    if ( !v8 )
      return v7;
  }
  if ( (unsigned __int64)v6[3] >= 8 )
    v6 = (void **)*v6;
  if ( (unsigned __int64)v7[3] < 8 )
    v12 = v7;
  else
    v12 = *v7;
  memcpy(v12, (char *)v6 + 2 * a3, 2 * v8);
  v10 = (unsigned __int64)v7[3] < 8;
  v7[2] = (void *)v8;
  if ( v10 )
    v13 = v7;
  else
    v13 = (void **)*v7;
  *((_WORD *)v13 + v8) = 0;
  return v7;
}
