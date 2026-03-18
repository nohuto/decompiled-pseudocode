/*
 * XREFs of ?InferVisualToTextureTransform@CLinearGradientBrush@@AEBAJAEAY02$$CBUD2D_POINT_2F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18013F4C4
 * Callers:
 *     ?GetCommonBrushParameters@CLinearGradientBrush@@UEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAUCCommonBrushParameters@@PEAPEAVCShape@@@Z @ 0x18013F0E0 (-GetCommonBrushParameters@CLinearGradientBrush@@UEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAUC.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUMilPoint2F@@@Z @ 0x180162180 (-InferAffineMatrix@CMILMatrix@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@_ea_180162180.c)
 */

__int64 __fastcall CLinearGradientBrush::InferVisualToTextureTransform(
        CLinearGradientBrush *this,
        const struct D2D_POINT_2F (*a2)[3],
        struct D2D_MATRIX_3X2_F *a3)
{
  float v3; // xmm0_4
  unsigned int v4; // ebx
  float v5; // xmm1_4
  unsigned __int64 v6; // xmm1_8
  D2D1_MATRIX_3X2_F *v7; // r9
  __int128 v9; // [rsp+30h] [rbp-19h] BYREF
  __int128 v10; // [rsp+40h] [rbp-9h]
  __int128 v11; // [rsp+50h] [rbp+7h]
  __int128 v12; // [rsp+60h] [rbp+17h]
  int v13; // [rsp+70h] [rbp+27h]
  __int128 v14; // [rsp+80h] [rbp+37h] BYREF

  v3 = FLOAT_1_0;
  v4 = 0;
  v5 = 1.0 / *((float *)this + 40);
  if ( *((_BYTE *)this + 192) )
    v5 = 0.0;
  else
    v3 = 1.0 - v5;
  *(_QWORD *)&v14 = LODWORD(v5);
  *((_QWORD *)&v14 + 1) = LODWORD(v3) | 0x3F80000000000000LL;
  v9 = CMILMatrix::Identity;
  v10 = xmmword_1801EAD20;
  v11 = xmmword_1801EAD30;
  v12 = xmmword_1801EAD40;
  v13 = dword_1801EAD50;
  CMILMatrix::InferAffineMatrix(&v9, &v14, (const struct D2D_POINT_2F *)a2, a3);
  *(_QWORD *)&v14 = v9;
  *((_QWORD *)&v14 + 1) = v10;
  v6 = _mm_unpacklo_ps((__m128)(unsigned int)v12, (__m128)DWORD1(v12)).m128_u64[0];
  *(_OWORD *)&v7->m11 = v14;
  *(_QWORD *)&v7->m[2][0] = v6;
  if ( !D2D1InvertMatrix(v7) )
  {
    v4 = -2003304441;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304441, 0x146u);
  }
  return v4;
}
