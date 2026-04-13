/*
 * XREFs of sub_180015E80 @ 0x180015E80
 * Callers:
 *     sub_18000DDA8 @ 0x18000DDA8 (sub_18000DDA8.c)
 *     sub_180015BF0 @ 0x180015BF0 (sub_180015BF0.c)
 *     sub_180015C50 @ 0x180015C50 (sub_180015C50.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180004C3C (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_180015D50 @ 0x180015D50 (sub_180015D50.c)
 *     unknown_libname_7 @ 0x180017D50 (unknown_libname_7.c)
 *     memcpy @ 0x180026528 (memcpy.c)
 */

void **__fastcall sub_180015E80(void **a1, char *Src, unsigned __int64 a3)
{
  void **v5; // rbx
  char *v6; // rax
  char *v7; // rax
  bool v9; // cf
  _WORD *v10; // rax
  void *v11; // rcx
  _WORD *v12; // rax

  v5 = a1;
  if ( !Src )
    goto LABEL_13;
  v6 = (unsigned __int64)a1[3] < 8 ? (char *)a1 : (char *)*a1;
  if ( Src < v6 )
    goto LABEL_13;
  if ( (unsigned __int64)a1[3] >= 8 )
    a1 = (void **)*a1;
  if ( (char *)a1 + 2 * (_QWORD)v5[2] > Src )
  {
    if ( (unsigned __int64)v5[3] < 8 )
      v7 = (char *)v5;
    else
      v7 = (char *)*v5;
    return sub_180015D50(v5, v5, (Src - v7) >> 1, a3);
  }
  else
  {
LABEL_13:
    if ( a3 > 0x7FFFFFFFFFFFFFFELL )
      std::vector<void *>::_Xlen();
    if ( (unsigned __int64)v5[3] >= a3 )
    {
      if ( !a3 )
      {
        v9 = (unsigned __int64)v5[3] < 8;
        v5[2] = 0LL;
        if ( v9 )
          v10 = v5;
        else
          v10 = *v5;
        *v10 = 0;
      }
    }
    else
    {
      unknown_libname_7(v5);
    }
    if ( a3 )
    {
      if ( (unsigned __int64)v5[3] < 8 )
        v11 = v5;
      else
        v11 = *v5;
      memcpy(v11, Src, 2 * a3);
      v9 = (unsigned __int64)v5[3] < 8;
      v5[2] = (void *)a3;
      if ( v9 )
        v12 = v5;
      else
        v12 = *v5;
      v12[a3] = 0;
    }
    return v5;
  }
}
