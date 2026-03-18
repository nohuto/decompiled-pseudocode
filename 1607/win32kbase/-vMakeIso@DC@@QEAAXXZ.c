/*
 * XREFs of ?vMakeIso@DC@@QEAAXXZ @ 0x1C00C30E0
 * Callers:
 *     ?vUpdateWtoDXform@DC@@QEAAXXZ @ 0x1C002B470 (-vUpdateWtoDXform@DC@@QEAAXXZ.c)
 *     GreGetDCPoint @ 0x1C0075BA0 (GreGetDCPoint.c)
 * Callees:
 *     EngMulDiv @ 0x1C0038200 (EngMulDiv.c)
 *     bFToL @ 0x1C0076E08 (bFToL.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C00C3078 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C00C30AC (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 */

void __fastcall DC::vMakeIso(DC *this)
{
  _DWORD *v2; // rcx
  INT v3; // r8d
  INT v4; // edx
  unsigned int v5; // edi
  __m128i v6; // xmm0
  float v7; // xmm6_4
  float v8; // xmm6_4
  int *v9; // r11
  int v10; // ebx
  float v11; // xmm1_4
  float v12; // xmm2_4
  char v13; // r8
  __int64 v14; // r11
  int v15; // ecx
  int v16; // edx
  __int64 v17; // r11
  int v18; // eax
  __int64 v19; // [rsp+40h] [rbp+8h] BYREF

  v2 = (_DWORD *)*((_QWORD *)this + 10);
  v3 = v2[89];
  if ( v3 )
  {
    v4 = v2[93];
    if ( !v4 || (v5 = v2[94]) == 0 )
    {
      v8 = (float)((float)(v2[90] * v2[91]) / (float)v3) / (float)(int)v2[92];
      goto LABEL_8;
    }
    v6 = _mm_cvtsi32_si128(v5);
    v7 = (float)EngMulDiv(v2[90], v4, v3);
  }
  else
  {
    v19 = *((_QWORD *)this + 6);
    v7 = (float)(int)PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v19);
    v6 = _mm_cvtsi32_si128(PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v19));
  }
  v8 = v7 / _mm_cvtepi32_ps(v6).m128_f32[0];
LABEL_8:
  v9 = (int *)*((_QWORD *)this + 10);
  v10 = v9[86];
  v11 = (float)v9[83];
  v12 = (float)v9[82];
  bFToL((float)((float)((float)v10 * v11) / v12) * v8, &v19, 6);
  v15 = abs32(v19);
  v16 = *(_DWORD *)(v14 + 348);
  LODWORD(v19) = v15;
  if ( v16 <= 0 )
  {
    if ( -v16 >= v15 )
    {
      v15 = -v15;
      goto LABEL_10;
    }
  }
  else if ( v16 >= v15 )
  {
LABEL_10:
    *(_DWORD *)(v14 + 348) = v15;
    return;
  }
  bFToL((float)((float)((float)v16 * v12) / v11) / v8, &v19, v13);
  v18 = abs32(v19);
  if ( v10 <= 0 )
    v18 = -v18;
  *(_DWORD *)(v17 + 344) = v18;
}
