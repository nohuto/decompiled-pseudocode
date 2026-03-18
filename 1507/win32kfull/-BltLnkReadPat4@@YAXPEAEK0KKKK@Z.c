/*
 * XREFs of ?BltLnkReadPat4@@YAXPEAEK0KKKK@Z @ 0x1C02D25B0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C015D180 (memmove.c)
 */

void __fastcall BltLnkReadPat4(
        unsigned __int8 *a1,
        char a2,
        unsigned __int8 *a3,
        int a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned int v6; // esi
  unsigned __int8 v9; // cl
  unsigned int v10; // edx
  int v11; // r15d
  unsigned int v12; // esi
  unsigned int v13; // r8d
  unsigned __int8 v14; // r10
  unsigned int v15; // edx
  unsigned __int8 v16; // cl
  char v17; // al
  signed int v18; // ebp
  int v19; // edi
  unsigned __int8 v20; // cl
  unsigned __int8 v21; // cl

  v6 = a6;
  if ( (a2 & 1) != 0 && a6 )
  {
    v9 = a3[(unsigned __int64)a5 >> 1];
    if ( (a5 & 1) == 0 )
      v9 >>= 4;
    v10 = a5 + 1;
    *a1++ = v9 & 0xF;
    v6 = a6 - 1;
  }
  else
  {
    v10 = a5;
  }
  v11 = a4;
  if ( (a4 & 1) != 0 )
    v11 = 2 * a4;
  if ( (int)v6 <= v11 )
  {
    v13 = v6 >> 1;
    v12 = v6 & 1;
  }
  else
  {
    v12 = v6 - v11;
    v11 >>= 1;
    v13 = v11;
  }
  while ( v13 )
  {
    --v13;
    if ( v10 == a4 )
      v10 = 0;
    v14 = a3[(unsigned __int64)v10 >> 1];
    if ( (v10 & 1) != 0 )
    {
      v15 = v10 + 1;
      if ( v15 == a4 )
        v15 = 0;
      v16 = a3[(unsigned __int64)v15 >> 1];
      v17 = 16 * v14;
    }
    else
    {
      v15 = v10 + 1;
      if ( v15 != a4 )
        goto LABEL_21;
      v16 = *a3;
      v17 = v14 & 0xF0;
      v15 = 0;
    }
    v14 = v17 | (v16 >> 4);
LABEL_21:
    *a1++ = v14;
    v10 = v15 + 1;
  }
  if ( v12 <= 1 )
  {
    if ( (v12 & 1) != 0 )
    {
      if ( v10 == a4 )
        v10 = 0;
      v20 = a3[(unsigned __int64)v10 >> 1];
      if ( (v10 & 1) != 0 )
        v21 = 16 * v20;
      else
        v21 = v20 & 0xF0;
      *a1 = v21;
    }
  }
  else
  {
    v18 = v12 >> 1;
    while ( 1 )
    {
      v19 = v11;
      if ( v11 > v18 )
        v19 = v18;
      memmove(a1, &a1[-v11], v19);
      a1 += v19;
      v18 -= v19;
      if ( !v18 )
        break;
      v11 *= 2;
    }
    if ( (v12 & 1) != 0 )
      *a1 = a1[-v11] & 0xF0;
  }
}
