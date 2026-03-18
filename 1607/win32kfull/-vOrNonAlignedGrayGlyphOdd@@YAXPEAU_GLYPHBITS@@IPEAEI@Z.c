/*
 * XREFs of ?vOrNonAlignedGrayGlyphOdd@@YAXPEAU_GLYPHBITS@@IPEAEI@Z @ 0x1C0262620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vOrNonAlignedGrayGlyphOdd(struct _GLYPHBITS *a1, unsigned int a2, unsigned __int8 *a3, unsigned int a4)
{
  BYTE *aj; // r10
  unsigned __int8 *v5; // r11
  __int64 v6; // rbp
  unsigned __int8 *v7; // rdx
  unsigned __int64 v8; // r14
  __int64 v9; // rsi
  BYTE v10; // di
  unsigned __int8 *v11; // rbx
  unsigned __int64 v12; // r9
  unsigned __int64 i; // r8
  BYTE v14; // cl

  aj = a1->aj;
  v5 = &a3[a4 * a1->sizlBitmap.cy];
  if ( a3 < v5 )
  {
    v6 = a2;
    v7 = a3 + 1;
    v8 = (unsigned int)a1->sizlBitmap.cx >> 1;
    v9 = a4;
    do
    {
      v10 = *aj;
      v11 = v7;
      *(v7 - 1) |= *aj >> 4;
      v12 = v8;
      if ( v7 > &v7[v8] )
        v12 = 0LL;
      if ( v12 )
      {
        for ( i = 0LL; i < v12; ++i )
        {
          v14 = v10;
          v10 = aj[i + 1];
          *v11++ |= (v10 >> 4) | (unsigned __int8)(16 * v14);
        }
      }
      v7 += v9;
      aj += v6;
    }
    while ( v7 - 1 < v5 );
  }
}
