/*
 * XREFs of ?nCalcJustInArray@@YAKPEAPEAIGPEAXHI@Z @ 0x1C0290BA4
 * Callers:
 *     GreGetCharacterPlacementW @ 0x1C0290D00 (GreGetCharacterPlacementW.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 */

__int64 __fastcall nCalcJustInArray(unsigned int **a1, unsigned __int16 a2, char *a3, int a4, unsigned int a5)
{
  __int64 v5; // rbx
  char *v9; // rbp
  char *v10; // rsi
  int v11; // r14d
  unsigned int v12; // edi
  _DWORD *v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned int *v17; // rax
  unsigned int *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8

  v5 = (__int64)a3;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0;
  v12 = 0;
  v13 = a3;
  v14 = 0LL;
  if ( a4 )
  {
    v10 = &a3[4 * a5];
    v11 = a2;
    v15 = (4 * (unsigned __int64)a5 + 3) >> 2;
    if ( a3 > v10 )
      v15 = 0LL;
    if ( !v15 )
      goto LABEL_30;
    do
    {
      if ( *v13 == a2 )
        ++v12;
      ++v13;
      ++v14;
    }
    while ( v14 < v15 );
  }
  else
  {
    v9 = &a3[2 * a5];
    v16 = (2 * (unsigned __int64)a5 + 1) >> 1;
    if ( a3 > v9 )
      v16 = 0LL;
    if ( !v16 )
      goto LABEL_30;
    do
    {
      if ( *(_WORD *)v13 == a2 )
        ++v12;
      v13 = (_DWORD *)((char *)v13 + 2);
      ++v14;
    }
    while ( v14 < v16 );
  }
  if ( !v12 || (v17 = (unsigned int *)PALLOCMEM2(4 * v12, 2037147463LL, 1)) == 0LL )
  {
LABEL_30:
    *a1 = 0LL;
    return 0LL;
  }
  v18 = v17;
  if ( a4 )
  {
    if ( v5 < (unsigned __int64)v10 )
    {
      v19 = -v5;
      do
      {
        if ( *(_DWORD *)v5 == v11 )
          *v18++ = (v19 + v5) >> 2;
        v5 += 4LL;
      }
      while ( v5 < (unsigned __int64)v10 );
    }
  }
  else if ( v5 < (unsigned __int64)v9 )
  {
    v20 = -v5;
    do
    {
      if ( *(_WORD *)v5 == a2 )
        *v18++ = (v20 + v5) >> 1;
      v5 += 2LL;
    }
    while ( v5 < (unsigned __int64)v9 );
  }
  *a1 = v17;
  return v12;
}
