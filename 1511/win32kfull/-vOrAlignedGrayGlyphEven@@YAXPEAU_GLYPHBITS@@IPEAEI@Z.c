/*
 * XREFs of ?vOrAlignedGrayGlyphEven@@YAXPEAU_GLYPHBITS@@IPEAEI@Z @ 0x1C0101E10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vOrAlignedGrayGlyphEven(struct _GLYPHBITS *a1, unsigned int a2, unsigned __int8 *a3, unsigned int a4)
{
  BYTE *aj; // r11
  unsigned __int8 *v5; // rbx
  __int64 v6; // rsi
  unsigned __int64 v7; // r14
  unsigned __int8 *v8; // rdx
  unsigned __int64 v9; // r10

  aj = a1->aj;
  v5 = &a3[a4 * a1->sizlBitmap.cy];
  if ( a3 < v5 )
  {
    v6 = a2;
    v7 = (unsigned int)(a1->sizlBitmap.cx + 1) >> 1;
    do
    {
      v8 = a3;
      v9 = v7;
      if ( a3 > &a3[v7] )
        v9 = 0LL;
      if ( v9 )
      {
        do
        {
          *v8 |= aj[v8 - a3];
          ++v8;
        }
        while ( v8 - a3 < v9 );
      }
      a3 += a4;
      aj += v6;
    }
    while ( a3 < v5 );
  }
}
