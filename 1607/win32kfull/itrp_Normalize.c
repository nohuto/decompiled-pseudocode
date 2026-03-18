/*
 * XREFs of itrp_Normalize @ 0x1C00D1358
 * Callers:
 *     itrp_SDPVTL @ 0x1C00D0FE0 (itrp_SDPVTL.c)
 *     itrp_SFVTL @ 0x1C00D1BC0 (itrp_SFVTL.c)
 *     itrp_SPVTL @ 0x1C00D2250 (itrp_SPVTL.c)
 *     EmboldPoint @ 0x1C02DEC14 (EmboldPoint.c)
 * Callees:
 *     FracSqrt @ 0x1C00D1438 (FracSqrt.c)
 *     CompDiv @ 0x1C00F85F4 (CompDiv.c)
 *     FracMul @ 0x1C02DC918 (FracMul.c)
 */

void __fastcall itrp_Normalize(int a1, unsigned int a2, _WORD *a3)
{
  unsigned int v3; // ebx
  int v5; // r11d
  int v6; // r10d
  char v7; // cl
  __int64 v8; // rdx
  int i; // r10d
  unsigned int v10; // eax
  int v11; // r11d
  unsigned int v12; // r10d
  int v13; // eax
  int v14; // r11d
  int v15; // eax
  int v16; // r10d

  v3 = a2;
  v5 = a1;
  if ( a1 )
  {
    if ( (unsigned int)(a1 + 0x7FFF) > 0xFFFD )
      goto LABEL_11;
    goto LABEL_3;
  }
  if ( a2 )
  {
LABEL_3:
    if ( a2 + 0x7FFF <= 0xFFFD )
    {
      v6 = a1 * a1;
      v7 = 15;
      v8 = 0x20000000LL;
      for ( i = v3 * v3 + v6; i < 0x20000000; i *= 4 )
        ++v7;
      v3 <<= v7;
LABEL_8:
      v10 = FracSqrt((unsigned int)i, v8);
      *a3 = ((unsigned int)CompDiv(v10, (__int64)v11 << 30) + 0x8000) >> 16;
      v13 = CompDiv(v12, (__int64)(int)v3 << 30);
      a3[1] = (unsigned int)(v14 + v13) >> 16;
      return;
    }
LABEL_11:
    if ( a1 < 0x20000000 )
    {
      do
      {
        if ( v5 <= -536870912 )
          break;
        if ( v3 + 0x1FFFFFFF > 0x3FFFFFFE )
          break;
        v5 *= 2;
        v3 *= 2;
      }
      while ( v5 < 0x20000000 );
    }
    FracMul((unsigned int)v5, (unsigned int)v5);
    v15 = FracMul(v3, v3);
    i = v15 + v16;
    goto LABEL_8;
  }
  *(_DWORD *)a3 = 0x4000;
}
