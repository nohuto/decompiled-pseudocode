/*
 * XREFs of ?SortGestureConfigArray@@YAHPEAUtagGESTURECONFIG@@H@Z @ 0x1C009821C
 * Callers:
 *     SetGestureConfigSettings @ 0x1C0094780 (SetGestureConfigSettings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SortGestureConfigArray(struct tagGESTURECONFIG *a1, int a2)
{
  int v2; // r9d
  int i; // r8d
  __int64 v5; // r10
  int v6; // ebx
  __int64 v7; // rcx
  __int64 v9; // r13
  __int64 v10; // rbp
  char *v11; // rdi
  __int64 v12; // rsi
  int v13; // r15d
  int v14; // r10d
  double v15; // xmm1_8
  __int64 v16; // r12
  char *v17; // rcx
  _DWORD *j; // rdx
  __int64 v19; // rcx

  v2 = a2;
  if ( a2 > 0 )
  {
    for ( i = 1; i < a2 / 9; i = 3 * i + 1 )
      ;
    v5 = a2;
    while ( i > 0 )
    {
      v6 = i;
      if ( i < v5 )
      {
        v9 = 12LL * i;
        v10 = 0LL;
        v11 = (char *)a1 + v9;
        v12 = v5 - i;
        do
        {
          v13 = v6 - i;
          v14 = *((_DWORD *)v11 + 2);
          v15 = *(double *)v11;
          v16 = v10;
          if ( v10 >= 0 )
          {
            v17 = &v11[-12 * i];
            do
            {
              if ( *(_DWORD *)v17 <= LODWORD(v15) )
                break;
              v13 -= i;
              *(_QWORD *)&v17[v9] = *(_QWORD *)v17;
              *(_DWORD *)&v17[v9 + 8] = *((_DWORD *)v17 + 2);
              v17 -= v9;
              v16 -= i;
            }
            while ( v16 >= 0 );
          }
          if ( v6 != v13 + i )
          {
            v19 = 3 * (i + v16);
            *(double *)((char *)a1 + 4 * v19) = v15;
            *((_DWORD *)a1 + v19 + 2) = v14;
          }
          v11 += 12;
          ++v6;
          ++v10;
          --v12;
        }
        while ( v12 );
        v2 = a2;
        v5 = a2;
      }
      i /= 3;
    }
    if ( v2 == 1 || *(_DWORD *)a1 )
    {
      v7 = 1LL;
      if ( v5 <= 1 )
        return 1LL;
      for ( j = (_DWORD *)((char *)a1 + 12); *j != *(j - 3); j += 3 )
      {
        if ( ++v7 >= v5 )
          return 1LL;
      }
    }
  }
  return 0LL;
}
