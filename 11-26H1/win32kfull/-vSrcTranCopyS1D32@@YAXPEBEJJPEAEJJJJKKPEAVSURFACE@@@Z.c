/*
 * XREFs of ?vSrcTranCopyS1D32@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x140166920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSrcTranCopyS1D32(
        const unsigned __int8 *a1,
        int a2,
        int a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9)
{
  int v9; // ebx
  int v11; // r8d
  unsigned __int8 *v12; // rax
  int v13; // r15d
  const unsigned __int8 *v14; // r9
  unsigned __int8 *v15; // rdi
  __int64 v16; // r14
  __int64 v17; // rsi
  __int64 v18; // rbp
  unsigned __int8 *v19; // r11
  char v20; // r8
  unsigned __int8 *v21; // r10
  unsigned __int8 *i; // r8
  char v23; // cl
  char v24; // cl

  v9 = a2 & 7;
  v11 = a6 - a5;
  v12 = &a4[4 * a5];
  v13 = a6 - a5;
  v14 = &a1[(__int64)a2 >> 3];
  v15 = &v12[a8 * a7];
  if ( a6 - a5 >= 8 - v9 )
    v13 = 8 - v9;
  v16 = 4LL * v11;
  v17 = a7 - 4 * v11;
  v18 = a3 - ((v9 + v11 + 7) >> 3);
  do
  {
    v19 = &v12[v16];
    if ( (a2 & 7) != 0 )
    {
      v20 = *v14++ << v9;
      v21 = &v12[4 * v13];
      do
      {
        if ( v20 < 0 )
          *(_DWORD *)v12 = a9;
        v12 += 4;
        v20 *= 2;
      }
      while ( v12 != v21 );
    }
    for ( i = &v12[(v19 - v12) & 0xFFFFFFFFFFFFFFE0uLL]; v12 != i; v12 += 32 )
    {
      v23 = *v14;
      if ( *(char *)v14 < 0 )
        *(_DWORD *)v12 = a9;
      if ( (v23 & 0x40) != 0 )
        *((_DWORD *)v12 + 1) = a9;
      if ( (v23 & 0x20) != 0 )
        *((_DWORD *)v12 + 2) = a9;
      if ( (v23 & 0x10) != 0 )
        *((_DWORD *)v12 + 3) = a9;
      if ( (v23 & 8) != 0 )
        *((_DWORD *)v12 + 4) = a9;
      if ( (v23 & 4) != 0 )
        *((_DWORD *)v12 + 5) = a9;
      if ( (v23 & 2) != 0 )
        *((_DWORD *)v12 + 6) = a9;
      if ( (v23 & 1) != 0 )
        *((_DWORD *)v12 + 7) = a9;
      ++v14;
    }
    if ( v12 != v19 )
    {
      v24 = *v14++;
      do
      {
        if ( v24 < 0 )
          *(_DWORD *)v12 = a9;
        v24 *= 2;
        v12 += 4;
      }
      while ( v12 != v19 );
    }
    v12 += v17;
    v14 += v18;
  }
  while ( v12 != v15 );
}
