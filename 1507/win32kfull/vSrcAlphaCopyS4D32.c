/*
 * XREFs of vSrcAlphaCopyS4D32 @ 0x1C0266250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall vSrcAlphaCopyS4D32(__int64 a1, int a2, int a3, __int64 a4, int a5, int a6, int a7, int a8)
{
  int v8; // esi
  __int64 v9; // r15
  unsigned int v10; // ebx
  int *v11; // r8
  int v12; // eax
  unsigned __int8 *i; // r11
  unsigned __int8 *v14; // rdx
  int *v15; // rcx
  __int64 v16; // r10
  unsigned __int8 v17; // r9
  int *v18; // rcx

  v8 = a8;
  v9 = a3;
  v10 = (a5 + 1) & 0xFFFFFFFE;
  v11 = (int *)(a4 + 4LL * a5);
  v12 = a2 / 2;
  for ( i = (unsigned __int8 *)(a2 / 2 + a1); v8; --v8 )
  {
    v14 = i;
    v15 = v11;
    if ( v10 != a5 )
    {
      LOBYTE(v12) = *i;
      v15 = v11 + 1;
      if ( (*i & 0xF) != 0 )
      {
        v12 = dword_1C02EDB90[*i & 0xF];
        *v11 = v12;
      }
      v14 = i + 1;
    }
    if ( (int)((a6 & 0xFFFFFFFE) - v10) / 2 > 0 )
    {
      v16 = (unsigned int)((int)((a6 & 0xFFFFFFFE) - v10) / 2);
      do
      {
        v17 = *v14;
        if ( (*v14 & 0xF0) != 0 )
        {
          v12 = dword_1C02EDB90[(unsigned __int64)v17 >> 4];
          *v15 = v12;
        }
        v18 = v15 + 1;
        if ( (v17 & 0xF) != 0 )
        {
          v12 = dword_1C02EDB90[v17 & 0xF];
          *v18 = v12;
        }
        v15 = v18 + 1;
        ++v14;
        --v16;
      }
      while ( v16 );
    }
    if ( a6 != (a6 & 0xFFFFFFFE) )
    {
      LOBYTE(v12) = *v14;
      if ( (*v14 & 0xF0) != 0 )
      {
        v12 = dword_1C02EDB90[(unsigned __int64)(unsigned __int8)v12 >> 4];
        *v15 = v12;
      }
    }
    i += v9;
    v11 = (int *)((char *)v11 + a7);
  }
  return v12;
}
