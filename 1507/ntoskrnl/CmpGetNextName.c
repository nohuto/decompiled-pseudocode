/*
 * XREFs of CmpGetNextName @ 0x14051FE50
 * Callers:
 *     CmpParseKey @ 0x1404BEE10 (CmpParseKey.c)
 *     CmpWalkPath @ 0x140591164 (CmpWalkPath.c)
 * Callees:
 *     <none>
 */

char __fastcall CmpGetNextName(__int16 *a1, __int64 a2, bool *a3)
{
  __int16 *v3; // rax
  char v5; // r10
  __int16 v6; // ax
  _WORD *v7; // rax
  unsigned __int16 v8; // dx
  __int16 v10; // ax

  v3 = (__int16 *)*((_QWORD *)a1 + 1);
  v5 = 1;
  if ( !v3 || !*a1 || (v6 = *v3) == 0 )
  {
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_WORD *)a2 = 0;
LABEL_15:
    *a3 = 1;
    return 1;
  }
  if ( v6 == 92 )
  {
    while ( 1 )
    {
      *a1 -= 2;
      *((_QWORD *)a1 + 1) += 2LL;
      v10 = *a1;
      a1[1] -= 2;
      if ( !v10 )
        break;
      if ( **((_WORD **)a1 + 1) != 92 )
        goto LABEL_5;
    }
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_WORD *)a2 = 0;
    goto LABEL_15;
  }
LABEL_5:
  for ( *(_QWORD *)(a2 + 8) = *((_QWORD *)a1 + 1); *a1; *((_QWORD *)a1 + 1) = v7 + 1 )
  {
    v7 = (_WORD *)*((_QWORD *)a1 + 1);
    if ( *v7 == 92 )
      break;
    *a1 -= 2;
    a1[1] -= 2;
  }
  v8 = a1[4] - *(_WORD *)(a2 + 8);
  *(_WORD *)a2 = v8;
  if ( v8 > 0x200u )
    v5 = 0;
  *(_WORD *)(a2 + 2) = v8;
  *a3 = *a1 == 0;
  return v5;
}
