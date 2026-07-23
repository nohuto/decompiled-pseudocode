/*
 * XREFs of CmpGetNextName @ 0x140140558
 * Callers:
 *     CmpWalkPath @ 0x140560738 (CmpWalkPath.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpGetNextName(__int16 *a1, __int64 a2, bool *a3)
{
  __int16 *v4; // rcx
  __int16 v5; // cx
  _WORD *v6; // rax
  unsigned __int16 v7; // cx
  bool result; // al
  __int16 v9; // ax

  v4 = (__int16 *)*((_QWORD *)a1 + 1);
  if ( !v4 || !*a1 || (v5 = *v4) == 0 )
  {
LABEL_12:
    *a3 = 1;
    result = 1;
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_WORD *)a2 = 0;
    return result;
  }
  if ( v5 == 92 )
  {
    do
    {
      *a1 -= 2;
      *((_QWORD *)a1 + 1) += 2LL;
      v9 = *a1;
      a1[1] -= 2;
      if ( !v9 )
        goto LABEL_12;
    }
    while ( **((_WORD **)a1 + 1) == 92 );
  }
  for ( *(_QWORD *)(a2 + 8) = *((_QWORD *)a1 + 1); *a1; *((_QWORD *)a1 + 1) = v6 + 1 )
  {
    v6 = (_WORD *)*((_QWORD *)a1 + 1);
    if ( *v6 == 92 )
      break;
    *a1 -= 2;
    a1[1] -= 2;
  }
  v7 = a1[4] - *(_WORD *)(a2 + 8);
  *(_WORD *)a2 = v7;
  *(_WORD *)(a2 + 2) = v7;
  result = v7 <= 0x200u;
  *a3 = *a1 == 0;
  return result;
}
