/*
 * XREFs of vSrcTranCopyS1D32 @ 0x1C00FDC40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall vSrcTranCopyS1D32(__int64 a1, int a2, int a3, __int64 a4, int a5, int a6, int a7, int a8, int a9)
{
  int v9; // ebx
  int v10; // edi
  char *v11; // r11
  _BYTE *v12; // r9
  int v13; // eax
  char *v14; // rsi
  __int64 v15; // r14
  char *v16; // r10
  char v17; // r8
  char *v18; // rcx
  char *v19; // rcx

  v9 = a2 & 7;
  v10 = 8 - v9;
  v11 = (char *)(a4 + 4LL * a5);
  v12 = (_BYTE *)(a1 + ((__int64)a2 >> 3));
  v13 = (v9 + a6 - a5 + 7) >> 3;
  v14 = &v11[a8 * a7];
  v15 = a3 - v13;
  if ( a6 - a5 < 8 - v9 )
    v10 = a6 - a5;
  do
  {
    v16 = &v11[4 * (a6 - a5)];
    if ( (a2 & 7) != 0 )
    {
      v17 = *v12 << v9;
      LOBYTE(v13) = v10;
      ++v12;
      v18 = &v11[4 * v10];
      do
      {
        if ( v17 < 0 )
          *(_DWORD *)v11 = a9;
        v11 += 4;
        v17 *= 2;
      }
      while ( v11 != v18 );
    }
    v19 = &v11[(v16 - v11) & 0xFFFFFFFFFFFFFFE0uLL];
    while ( v11 != v19 )
    {
      LOBYTE(v13) = *v12;
      if ( (char)*v12 < 0 )
        *(_DWORD *)v11 = a9;
      if ( (v13 & 0x40) != 0 )
        *((_DWORD *)v11 + 1) = a9;
      if ( (v13 & 0x20) != 0 )
        *((_DWORD *)v11 + 2) = a9;
      if ( (v13 & 0x10) != 0 )
        *((_DWORD *)v11 + 3) = a9;
      if ( (v13 & 8) != 0 )
        *((_DWORD *)v11 + 4) = a9;
      if ( (v13 & 4) != 0 )
        *((_DWORD *)v11 + 5) = a9;
      if ( (v13 & 2) != 0 )
        *((_DWORD *)v11 + 6) = a9;
      if ( (v13 & 1) != 0 )
        *((_DWORD *)v11 + 7) = a9;
      ++v12;
      v11 += 32;
    }
    if ( v11 != v16 )
    {
      LOBYTE(v13) = *v12++;
      do
      {
        if ( (v13 & 0x80u) != 0 )
          *(_DWORD *)v11 = a9;
        LOBYTE(v13) = 2 * v13;
        v11 += 4;
      }
      while ( v11 != v16 );
    }
    v11 += a7 - 4 * (a6 - a5);
    v12 += v15;
  }
  while ( v11 != v14 );
  return v13;
}
