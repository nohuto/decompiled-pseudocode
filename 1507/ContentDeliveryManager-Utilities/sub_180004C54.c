/*
 * XREFs of sub_180004C54 @ 0x180004C54
 * Callers:
 *     sub_180004B28 @ 0x180004B28 (sub_180004B28.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ @ 0x180004B10 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ.c)
 */

_QWORD *__fastcall sub_180004C54(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  bool v5; // cf
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  unsigned __int64 v8; // rdi
  _QWORD *v9; // rax

  v3 = a1[2];
  if ( v3 < a2 )
    std::vector<void *>::_Xlen();
  if ( v3 - a2 > a3 )
  {
    if ( a3 )
    {
      if ( a1[3] < 0x10uLL )
        v7 = a1;
      else
        v7 = (_QWORD *)*a1;
      v8 = v3 - a3;
      if ( v8 != a2 )
        memmove((char *)v7 + a2, (char *)v7 + a2 + a3, v8 - a2);
      v5 = a1[3] < 0x10uLL;
      a1[2] = v8;
      if ( v5 )
        v9 = a1;
      else
        v9 = (_QWORD *)*a1;
      *((_BYTE *)v9 + v8) = 0;
    }
  }
  else
  {
    v5 = a1[3] < 0x10uLL;
    a1[2] = a2;
    if ( v5 )
      v6 = a1;
    else
      v6 = (_QWORD *)*a1;
    *((_BYTE *)v6 + a2) = 0;
  }
  return a1;
}
