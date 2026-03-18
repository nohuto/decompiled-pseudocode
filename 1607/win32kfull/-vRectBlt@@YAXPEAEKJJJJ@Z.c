/*
 * XREFs of ?vRectBlt@@YAXPEAEKJJJJ@Z @ 0x1C0280090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vRectBlt(unsigned __int8 *a1, unsigned int a2, int a3, int a4, int a5, int a6)
{
  int v6; // r11d
  int v7; // ebp
  unsigned __int8 *v8; // r10
  __int64 v9; // r9
  unsigned __int8 *v10; // r8
  __int16 v11; // ax
  unsigned __int8 *v12; // rdi
  __int64 v13; // rcx

  v6 = a6 - a4;
  v7 = a3 & 0xF;
  v8 = &a1[(((__int64)a3 >> 3) & 0xFFFFFFFFFFFFFFFEuLL) + a4 * a2];
  v9 = (unsigned int)((a5 >> 4) - ((a3 + 15) >> 4));
  do
  {
    v10 = v8;
    v8 += a2;
    if ( (int)v9 < 0 )
    {
      v11 = word_1C02F27D8[v7] & word_1C02F27B8[a5 & 0xF];
LABEL_12:
      *(_WORD *)v10 |= v11;
      goto LABEL_13;
    }
    if ( v7 )
    {
      *(_WORD *)v10 |= word_1C02F27D8[v7];
      v10 += 2;
    }
    if ( (int)v9 > 0 )
    {
      v12 = v10;
      v13 = (unsigned int)v9;
      v10 += 2 * v9;
      while ( v13 )
      {
        *(_WORD *)v12 = -1;
        v12 += 2;
        --v13;
      }
    }
    if ( (a5 & 0xF) != 0 )
    {
      v11 = word_1C02F27B8[a5 & 0xF];
      goto LABEL_12;
    }
LABEL_13:
    --v6;
  }
  while ( v6 );
}
