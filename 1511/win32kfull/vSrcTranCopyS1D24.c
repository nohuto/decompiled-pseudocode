/*
 * XREFs of vSrcTranCopyS1D24 @ 0x1C0283980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall vSrcTranCopyS1D24(__int64 a1, int a2, int a3, __int64 a4, int a5, int a6, int a7, int a8, int a9)
{
  int v9; // r15d
  char *v11; // rdi
  __int64 v12; // rbx
  int v13; // r8d
  __int64 v14; // r9
  __int64 v15; // r12
  int v16; // eax
  __int64 v17; // r11
  __int64 v18; // r10
  int v19; // r13d
  __int64 v20; // r8
  char v21; // al
  __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  char result; // al
  __int64 v25; // rcx

  v9 = a2 & 7;
  v11 = (char *)(a1 + ((__int64)a2 >> 3));
  v12 = a4 + 3 * a5;
  v13 = 3 * (a6 - a5);
  v14 = v12 + a8 * a7;
  v15 = v13;
  v16 = 8 - v9;
  v17 = a3 - ((v9 + a6 - a5 + 7) >> 3);
  if ( a6 - a5 < 8 - v9 )
    v16 = a6 - a5;
  v18 = a7 - v13;
  v19 = 3 * v16;
  do
  {
    v20 = v15 + v12;
    if ( v9 )
    {
      v21 = *v11++ << v9;
      v22 = v12 + v19;
      do
      {
        if ( v21 < 0 )
        {
          *(_WORD *)v12 = a9;
          *(_BYTE *)(v12 + 2) = BYTE2(a9);
        }
        v12 += 3LL;
        v21 *= 2;
      }
      while ( v12 != v22 );
    }
    v23 = (v20 - v12) / 0x18uLL;
    result = 3 * v23;
    v25 = v12 + 24 * v23;
    while ( v12 != v25 )
    {
      result = *v11;
      if ( *v11 < 0 )
      {
        *(_WORD *)v12 = a9;
        *(_BYTE *)(v12 + 2) = BYTE2(a9);
      }
      if ( (result & 0x40) != 0 )
      {
        *(_WORD *)(v12 + 3) = a9;
        *(_BYTE *)(v12 + 5) = BYTE2(a9);
      }
      if ( (result & 0x20) != 0 )
      {
        *(_WORD *)(v12 + 6) = a9;
        *(_BYTE *)(v12 + 8) = BYTE2(a9);
      }
      if ( (result & 0x10) != 0 )
      {
        *(_WORD *)(v12 + 9) = a9;
        *(_BYTE *)(v12 + 11) = BYTE2(a9);
      }
      if ( (result & 8) != 0 )
      {
        *(_WORD *)(v12 + 12) = a9;
        *(_BYTE *)(v12 + 14) = BYTE2(a9);
      }
      if ( (result & 4) != 0 )
      {
        *(_WORD *)(v12 + 15) = a9;
        *(_BYTE *)(v12 + 17) = BYTE2(a9);
      }
      if ( (result & 2) != 0 )
      {
        *(_WORD *)(v12 + 18) = a9;
        *(_BYTE *)(v12 + 20) = BYTE2(a9);
      }
      if ( (result & 1) != 0 )
      {
        *(_WORD *)(v12 + 21) = a9;
        *(_BYTE *)(v12 + 23) = BYTE2(a9);
      }
      ++v11;
      v12 += 24LL;
    }
    if ( v12 != v20 )
    {
      result = *v11++;
      do
      {
        if ( result < 0 )
        {
          *(_WORD *)v12 = a9;
          *(_BYTE *)(v12 + 2) = BYTE2(a9);
        }
        result *= 2;
        v12 += 3LL;
      }
      while ( v12 != v20 );
    }
    v12 += v18;
    v11 += v17;
  }
  while ( v12 != v14 );
  return result;
}
