/*
 * XREFs of ?Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x18011A858
 * Callers:
 *     ?ColorHsl@CExpressionValueStack@@QEAAJXZ @ 0x18011A0E0 (-ColorHsl@CExpressionValueStack@@QEAAJXZ.c)
 *     ?ColorLerpHsl@CExpressionValueStack@@QEAAJXZ @ 0x18011A230 (-ColorLerpHsl@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Interpolate@HslCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x1801657C4 (-Interpolate@HslCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVValue@23@.c)
 * Callees:
 *     fmod_0 @ 0x1800BC88A (fmod_0.c)
 */

void __fastcall ColorSpaceHelpers::Color_RGBAfromHSLA(
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
  float v10; // xmm10_4
  float v11; // xmm4_4
  float v12; // xmm9_4
  float v13; // xmm2_4
  float v14; // xmm8_4
  float v15; // xmm0_4
  float v16; // xmm1_4

  v10 = v8;
  v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(a3 * 2.0) - 1.0)) & _xmm);
  v12 = (float)(1.0 - v11) * a2;
  v13 = (1.0 - COERCE_DOUBLE(COERCE_UNSIGNED_INT64(fmod_0(v8 / 1.047197551196598, 2.0) - 1.0) & _xmm)) * v12;
  v14 = a3 - (float)(v12 * 0.5);
  if ( v10 >= 1.047197551196598 )
  {
    if ( v10 < 2.094395102393195 )
    {
      v15 = v14 + v13;
      v16 = v14 + v12;
      goto LABEL_3;
    }
    if ( v10 < 3.141592653589793 )
    {
      *a5 = v14;
      *a6 = v14 + v12;
LABEL_14:
      v14 = v14 + v13;
      goto LABEL_15;
    }
    if ( v10 >= 4.188790204786391 )
    {
      if ( v10 >= 5.235987755982989 )
      {
        *a5 = v14 + v12;
        *a6 = v14;
        goto LABEL_14;
      }
      *a5 = v14 + v13;
      *a6 = v14;
    }
    else
    {
      *a5 = v14;
      *a6 = v14 + v13;
    }
    v14 = v14 + v12;
    goto LABEL_15;
  }
  v15 = v14 + v12;
  v16 = v14 + v13;
LABEL_3:
  *a5 = v15;
  *a6 = v16;
LABEL_15:
  *a7 = v14;
  *a8 = a4;
}
