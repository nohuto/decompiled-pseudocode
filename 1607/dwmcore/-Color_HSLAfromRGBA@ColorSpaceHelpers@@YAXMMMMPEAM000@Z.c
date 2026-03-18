/*
 * XREFs of ?Color_HSLAfromRGBA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x180159840
 * Callers:
 *     ?ColorLerpHsl@CExpressionValueStack@@QEAAJXZ @ 0x1801593DC (-ColorLerpHsl@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Interpolate@HslCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180194A64 (-Interpolate@HslCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVValue@23@.c)
 * Callees:
 *     fmodf_0 @ 0x1800BF626 (fmodf_0.c)
 */

void __fastcall ColorSpaceHelpers::Color_HSLAfromRGBA(
        ColorSpaceHelpers *this,
        float a2,
        float a3,
        float a4,
        float *a5,
        float *a6,
        float *a7,
        float *a8)
{
  float v8; // xmm0_4
  float v11; // xmm6_4
  float v12; // xmm1_4
  float v13; // xmm7_4
  float v14; // xmm8_4
  float v15; // xmm3_4
  float v16; // xmm6_4
  float v17; // xmm6_4

  v11 = fmaxf(fmaxf(v8, a2), a3);
  v12 = fminf(fminf(v8, a2), a3);
  v13 = v11 + v12;
  v14 = (float)(v11 + v12) * 0.5;
  if ( v11 == v12 )
  {
    v15 = 0.0;
    v16 = 0.0;
  }
  else
  {
    if ( v11 == v8 )
    {
      v17 = v11 - v12;
      v15 = fmodf_0((float)(a2 - a3) / v17, 6.0) * 1.047197551196598;
    }
    else if ( v11 == a2 )
    {
      v17 = v11 - v12;
      v15 = (float)((float)((float)(a3 - v8) / v17) + 2.0) * 1.047197551196598;
    }
    else
    {
      v17 = v11 - v12;
      v15 = (float)((float)((float)(v8 - a2) / v17) + 4.0) * 1.047197551196598;
    }
    if ( v15 < 0.0 )
      v15 = v15 + 6.2831855;
    v16 = v17 / (float)(1.0 - (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v13 - 1.0)) & _xmm));
  }
  *a5 = v15;
  *a6 = v16;
  *a7 = v14;
  *a8 = a4;
}
