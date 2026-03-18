/*
 * XREFs of ?vMakeIso@DC@@QEAAXXZ @ 0x1C00B5598
 * Callers:
 *     ?vUpdateWtoDXform@DC@@QEAAXXZ @ 0x1C003C580 (-vUpdateWtoDXform@DC@@QEAAXXZ.c)
 *     GreGetDCPoint @ 0x1C0054BF0 (GreGetDCPoint.c)
 * Callees:
 *     bFToL @ 0x1C000F9CC (bFToL.c)
 *     EngMulDiv @ 0x1C0056650 (EngMulDiv.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C00B5518 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C00B5558 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
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
  int v15; // edx
  int v16; // ecx
  __int64 v17; // r11
  int v18; // edx
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
  v15 = v19;
  if ( (int)v19 < 0 )
  {
    v15 = -(int)v19;
    LODWORD(v19) = -(int)v19;
  }
  v16 = *(_DWORD *)(v14 + 348);
  if ( v16 <= 0 )
  {
    if ( -v16 >= v15 )
    {
      v15 = -v15;
      goto LABEL_12;
    }
  }
  else if ( v16 >= v15 )
  {
LABEL_12:
    *(_DWORD *)(v14 + 348) = v15;
    return;
  }
  bFToL((float)((float)((float)v16 * v12) / v11) / v8, &v19, v13);
  v18 = v19;
  if ( (int)v19 < 0 )
    v18 = -(int)v19;
  if ( v10 <= 0 )
    v18 = -v18;
  *(_DWORD *)(v17 + 344) = v18;
}
