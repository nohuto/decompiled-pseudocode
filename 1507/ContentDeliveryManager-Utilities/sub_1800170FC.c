/*
 * XREFs of sub_1800170FC @ 0x1800170FC
 * Callers:
 *     sub_180014AD0 @ 0x180014AD0 (sub_180014AD0.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180004C3C (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     unknown_libname_7 @ 0x180017D50 (unknown_libname_7.c)
 */

_QWORD *__fastcall sub_1800170FC(_QWORD *a1, unsigned __int64 a2, __int16 a3)
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
    std::vector<void *>::_Xlen();
  if ( a2 )
  {
    v7 = v4 + a2;
    if ( v4 + a2 > 0x7FFFFFFFFFFFFFFELL )
      std::vector<void *>::_Xlen();
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
      unknown_libname_7(a1);
    }
    if ( !v7 )
      return a1;
    goto LABEL_12;
  }
  return a1;
}
