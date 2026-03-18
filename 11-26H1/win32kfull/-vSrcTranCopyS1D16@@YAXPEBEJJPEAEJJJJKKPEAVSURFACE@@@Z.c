/*
 * XREFs of ?vSrcTranCopyS1D16@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x140226AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSrcTranCopyS1D16(
        const unsigned __int8 *a1,
        int a2,
        int a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        __int16 a9)
{
  int v9; // edi
  unsigned __int8 *v10; // r10
  __int64 v11; // r9
  int v12; // edx
  int v13; // ebp
  const unsigned __int8 *v14; // r9
  unsigned __int8 *v15; // rsi
  __int64 v16; // r14
  __int64 v17; // r15
  unsigned __int8 *v18; // rbx
  char v19; // dl
  unsigned __int8 *v20; // rcx
  unsigned __int8 *v21; // rdx
  __int16 v22; // ax
  char v23; // cl
  __int16 v24; // r11
  char v25; // al

  v9 = a2 & 7;
  v10 = &a4[2 * a5];
  v11 = a2;
  v12 = a6 - a5;
  v13 = a6 - a5;
  v14 = &a1[v11 >> 3];
  v15 = &v10[a8 * a7];
  if ( a6 - a5 >= 8 - v9 )
    v13 = 8 - v9;
  v16 = a7 - 2 * v12;
  v17 = a3 - ((v9 + v12 + 7) >> 3);
  do
  {
    v18 = &v10[2 * (a6 - a5)];
    if ( v9 )
    {
      v19 = *v14++ << v9;
      v20 = &v10[2 * v13];
      do
      {
        if ( v19 < 0 )
          *(_WORD *)v10 = a9;
        v10 += 2;
        v19 *= 2;
      }
      while ( v10 != v20 );
    }
    v21 = &v10[(v18 - v10) & 0xFFFFFFFFFFFFFFF0uLL];
    if ( v10 != v21 )
    {
      v22 = a9;
      do
      {
        v23 = *v14;
        if ( *(char *)v14 < 0 )
        {
          *(_WORD *)v10 = a9;
          v22 = a9;
        }
        if ( (v23 & 0x40) != 0 )
          *((_WORD *)v10 + 1) = v22;
        v24 = v22;
        if ( (v23 & 0x20) != 0 )
        {
          *((_WORD *)v10 + 2) = v22;
          v24 = a9;
        }
        if ( (v23 & 0x10) != 0 )
        {
          *((_WORD *)v10 + 3) = v22;
          v22 = v24;
        }
        if ( (v23 & 8) != 0 )
          *((_WORD *)v10 + 4) = v22;
        if ( (v23 & 4) != 0 )
          *((_WORD *)v10 + 5) = v22;
        else
          v22 = a9;
        if ( (v23 & 2) != 0 )
          *((_WORD *)v10 + 6) = v22;
        if ( (v23 & 1) != 0 )
          *((_WORD *)v10 + 7) = v22;
        ++v14;
        v10 += 16;
      }
      while ( v10 != v21 );
    }
    if ( v10 != v18 )
    {
      v25 = *v14++;
      do
      {
        if ( v25 < 0 )
          *(_WORD *)v10 = a9;
        v25 *= 2;
        v10 += 2;
      }
      while ( v10 != v18 );
    }
    v10 += v16;
    v14 += v17;
  }
  while ( v10 != v15 );
}
