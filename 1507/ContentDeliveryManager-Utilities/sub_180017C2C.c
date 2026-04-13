/*
 * XREFs of sub_180017C2C @ 0x180017C2C
 * Callers:
 *     sub_180014AD0 @ 0x180014AD0 (sub_180014AD0.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ @ 0x180004B10 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ.c)
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180004C3C (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     unknown_libname_7 @ 0x180017D50 (unknown_libname_7.c)
 *     memcpy @ 0x180026528 (memcpy.c)
 */

_QWORD *__fastcall sub_180017C2C(_QWORD *a1, _QWORD *a2, unsigned __int64 a3, unsigned __int64 a4)
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
    std::vector<void *>::_Xlen();
  v9 = v4 - a3;
  v10 = a1[2];
  if ( v9 < a4 )
    v5 = v9;
  if ( -1 - v10 <= v5 )
    std::vector<void *>::_Xlen();
  if ( v5 )
  {
    v11 = v10 + v5;
    if ( v10 + v5 > 0x7FFFFFFFFFFFFFFELL )
      std::vector<void *>::_Xlen();
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
        memcpy((char *)v14 + 2 * a1[2], (char *)v7 + 2 * a3, 2 * v5);
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
      unknown_libname_7(a1);
    }
    if ( !v11 )
      return a1;
    goto LABEL_15;
  }
  return a1;
}
