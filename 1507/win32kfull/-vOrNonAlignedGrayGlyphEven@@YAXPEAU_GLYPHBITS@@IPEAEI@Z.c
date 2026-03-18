/*
 * XREFs of ?vOrNonAlignedGrayGlyphEven@@YAXPEAU_GLYPHBITS@@IPEAEI@Z @ 0x1C0265D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vOrNonAlignedGrayGlyphEven(struct _GLYPHBITS *a1, __int64 a2, unsigned __int8 *a3, unsigned int a4)
{
  BYTE *aj; // rbx
  unsigned __int8 *v5; // rsi
  __int64 v6; // r14
  __int64 v7; // rbp
  BYTE *v8; // r11
  unsigned __int8 v9; // dl
  unsigned __int8 *v10; // r9
  BYTE *v11; // r10
  __int64 v12; // r11
  char v13; // al

  aj = a1->aj;
  v5 = &a3[a4 * a1->sizlBitmap.cy];
  if ( a3 < v5 )
  {
    v6 = (unsigned int)((a1->sizlBitmap.cx + 1) / 2);
    v7 = a4;
    do
    {
      v8 = aj;
      v9 = 0;
      aj += v6;
      v10 = a3;
      v11 = (BYTE *)(aj - v8);
      if ( v8 > aj )
        v11 = 0LL;
      if ( v11 )
      {
        v12 = v8 - a3;
        do
        {
          v13 = 16 * v9 + (v10[v12] >> 4);
          v9 = v10[v12];
          *v10++ |= v13;
        }
        while ( v10 - a3 < (unsigned __int64)v11 );
      }
      a3 += v7;
      *v10 |= 16 * v9;
    }
    while ( a3 < v5 );
  }
}
