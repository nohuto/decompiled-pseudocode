/*
 * XREFs of itrp_Normalize @ 0x1C00BB41C
 * Callers:
 *     itrp_SDPVTL @ 0x1C00BB0A0 (itrp_SDPVTL.c)
 *     itrp_SFVTL @ 0x1C00BFBB0 (itrp_SFVTL.c)
 *     itrp_SPVTL @ 0x1C00C0660 (itrp_SPVTL.c)
 *     EmboldPoint @ 0x1C02D8DDC (EmboldPoint.c)
 * Callees:
 *     FracSqrt @ 0x1C00BB4FC (FracSqrt.c)
 *     CompDiv @ 0x1C00D3E04 (CompDiv.c)
 *     FracMul @ 0x1C02D8474 (FracMul.c)
 */

void __fastcall itrp_Normalize(int a1, unsigned int a2, _WORD *a3)
{
  unsigned int v3; // ebx
  int v5; // r11d
  char v6; // cl
  int i; // r10d
  unsigned int v8; // eax
  int v9; // r11d
  unsigned int v10; // r10d
  int v11; // eax
  int v12; // r11d
  int v13; // eax
  int v14; // r10d

  v3 = a2;
  v5 = a1;
  if ( a1 )
  {
    if ( (unsigned int)(a1 + 0x7FFF) > 0xFFFD )
      goto LABEL_15;
    goto LABEL_3;
  }
  if ( a2 )
  {
LABEL_3:
    if ( a2 + 0x7FFF <= 0xFFFD )
    {
      v6 = 15;
      for ( i = a2 * a2 + v5 * v5; i < 0x20000000; i *= 4 )
        ++v6;
      v3 = a2 << v6;
LABEL_8:
      v8 = FracSqrt((unsigned int)i);
      *a3 = ((unsigned int)CompDiv(v8, (__int64)v9 << 30) + 0x8000) >> 16;
      v11 = CompDiv(v10, (__int64)(int)v3 << 30);
      a3[1] = (unsigned int)(v12 + v11) >> 16;
      return;
    }
LABEL_15:
    while ( v5 < 0x20000000 && v5 > -536870912 && v3 + 0x1FFFFFFF <= 0x3FFFFFFE )
    {
      v5 *= 2;
      v3 *= 2;
    }
    FracMul((unsigned int)v5, (unsigned int)v5);
    v13 = FracMul(v3, v3);
    i = v13 + v14;
    goto LABEL_8;
  }
  *(_DWORD *)a3 = 0x4000;
}
