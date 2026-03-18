/*
 * XREFs of ?SortGestureConfigArray@@YAHPEAUtagGESTURECONFIG@@H@Z @ 0x1C012A69C
 * Callers:
 *     SetGestureConfigSettings @ 0x1C012A53C (SetGestureConfigSettings.c)
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
  _DWORD *j; // rdx
  __int64 v10; // r13
  __int64 v11; // rbp
  char *v12; // rdi
  __int64 v13; // rsi
  int v14; // r15d
  int v15; // r10d
  double v16; // xmm1_8
  __int64 v17; // r12
  char *v18; // rcx
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
        v10 = 12LL * i;
        v11 = 0LL;
        v12 = (char *)a1 + v10;
        v13 = v5 - i;
        do
        {
          v14 = v6 - i;
          v15 = *((_DWORD *)v12 + 2);
          v16 = *(double *)v12;
          v17 = v11;
          if ( v11 >= 0 )
          {
            v18 = &v12[-12 * i];
            do
            {
              if ( *(_DWORD *)v18 <= LODWORD(v16) )
                break;
              v14 -= i;
              *(_QWORD *)&v18[12 * i] = *(_QWORD *)v18;
              *(_DWORD *)&v18[v10 + 8] = *((_DWORD *)v18 + 2);
              v18 -= v10;
              v17 -= i;
            }
            while ( v17 >= 0 );
          }
          if ( v6 != v14 + i )
          {
            v19 = 3 * (i + v17);
            *(double *)((char *)a1 + 4 * v19) = v16;
            *((_DWORD *)a1 + v19 + 2) = v15;
          }
          v12 += 12;
          ++v6;
          ++v11;
          --v13;
        }
        while ( v13 );
        v2 = a2;
        v5 = a2;
      }
      i /= 3;
    }
    if ( *(_DWORD *)a1 || v2 == 1 )
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
