/*
 * XREFs of ?Color_HSLAfromRGBA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x18011A6D4
 * Callers:
 *     ?ColorLerpHsl@CExpressionValueStack@@QEAAJXZ @ 0x18011A230 (-ColorLerpHsl@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Interpolate@HslCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x1801657C4 (-Interpolate@HslCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVValue@23@.c)
 * Callees:
 *     fmodf_0 @ 0x1800BC896 (fmodf_0.c)
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
  float v9; // xmm4_4
  float v11; // xmm6_4
  float v12; // xmm7_4
  float v13; // xmm8_4
  float v14; // xmm3_4
  float v15; // xmm6_4
  float v16; // xmm6_4

  v9 = a2;
  if ( a2 > v8 )
    a2 = v8;
  if ( a3 <= a2 )
    a2 = a3;
  if ( v8 <= v9 )
    v11 = v9;
  else
    v11 = v8;
  if ( v11 <= a3 )
    v11 = a3;
  v12 = v11 + a2;
  v13 = (float)(v11 + a2) * 0.5;
  if ( v11 == a2 )
  {
    v14 = 0.0;
    v15 = 0.0;
  }
  else
  {
    if ( v11 == v8 )
    {
      v16 = v11 - a2;
      v14 = fmodf_0((float)(v9 - a3) / v16, 6.0) * 1.047197551196598;
    }
    else if ( v11 == v9 )
    {
      v16 = v11 - a2;
      v14 = (float)((float)((float)(a3 - v8) / v16) + 2.0) * 1.047197551196598;
    }
    else
    {
      v16 = v11 - a2;
      v14 = (float)((float)((float)(v8 - v9) / v16) + 4.0) * 1.047197551196598;
    }
    if ( v14 < 0.0 )
      v14 = v14 + 6.2831855;
    v15 = v16 / (float)(1.0 - (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v12 - 1.0)) & _xmm));
  }
  *a5 = v14;
  *a6 = v15;
  *a7 = v13;
  *a8 = a4;
}
