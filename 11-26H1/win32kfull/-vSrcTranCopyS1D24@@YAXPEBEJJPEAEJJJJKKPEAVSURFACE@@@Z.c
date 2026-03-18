/*
 * XREFs of ?vSrcTranCopyS1D24@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1401BDB70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSrcTranCopyS1D24(
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
  int v9; // r14d
  const unsigned __int8 *v10; // r10
  unsigned __int8 *v11; // rbx
  int v12; // eax
  int v13; // edx
  unsigned __int8 *v14; // r15
  __int64 v15; // r9
  __int64 v16; // r11
  unsigned __int8 *v17; // r8
  char v18; // al
  unsigned __int8 *v19; // rcx
  unsigned __int8 *v20; // rcx
  unsigned __int8 v21; // al
  char v22; // al

  v9 = a2 & 7;
  v10 = &a1[(__int64)a2 >> 3];
  v11 = &a4[3 * a5];
  v12 = a6 - a5;
  v13 = 3 * (a6 - a5);
  v14 = &v11[a8 * a7];
  if ( a6 - a5 >= 8 - v9 )
    v12 = 8 - v9;
  v15 = a3 - ((v9 + a6 - a5 + 7) >> 3);
  v16 = 3 * v12;
  do
  {
    v17 = &v11[v13];
    if ( v9 )
    {
      v18 = *v10 << v9;
      v19 = &v11[v16];
      ++v10;
      do
      {
        if ( v18 < 0 )
        {
          *(_WORD *)v11 = a9;
          v11[2] = BYTE2(a9);
        }
        v11 += 3;
        v18 *= 2;
      }
      while ( v11 != v19 );
    }
    v20 = &v11[24 * ((v17 - v11) / 0x18uLL)];
    while ( v11 != v20 )
    {
      v21 = *v10;
      if ( *(char *)v10 < 0 )
      {
        *(_WORD *)v11 = a9;
        v11[2] = BYTE2(a9);
      }
      if ( (v21 & 0x40) != 0 )
      {
        *(_WORD *)(v11 + 3) = a9;
        v11[5] = BYTE2(a9);
      }
      if ( (v21 & 0x20) != 0 )
      {
        *((_WORD *)v11 + 3) = a9;
        v11[8] = BYTE2(a9);
      }
      if ( (v21 & 0x10) != 0 )
      {
        *(_WORD *)(v11 + 9) = a9;
        v11[11] = BYTE2(a9);
      }
      if ( (v21 & 8) != 0 )
      {
        *((_WORD *)v11 + 6) = a9;
        v11[14] = BYTE2(a9);
      }
      if ( (v21 & 4) != 0 )
      {
        *(_WORD *)(v11 + 15) = a9;
        v11[17] = BYTE2(a9);
      }
      if ( (v21 & 2) != 0 )
      {
        *((_WORD *)v11 + 9) = a9;
        v11[20] = BYTE2(a9);
      }
      if ( (v21 & 1) != 0 )
      {
        *(_WORD *)(v11 + 21) = a9;
        v11[23] = BYTE2(a9);
      }
      ++v10;
      v11 += 24;
    }
    if ( v11 != v17 )
    {
      v22 = *v10++;
      do
      {
        if ( v22 < 0 )
        {
          *(_WORD *)v11 = a9;
          v11[2] = BYTE2(a9);
        }
        v22 *= 2;
        v11 += 3;
      }
      while ( v11 != v17 );
    }
    v11 += a7 - v13;
    v10 += v15;
  }
  while ( v11 != v14 );
}
