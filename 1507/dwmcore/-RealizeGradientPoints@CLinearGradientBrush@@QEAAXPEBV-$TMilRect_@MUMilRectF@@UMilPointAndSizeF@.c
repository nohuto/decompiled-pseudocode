/*
 * XREFs of ?RealizeGradientPoints@CLinearGradientBrush@@QEAAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUMilPoint2F@@11@Z @ 0x1801202B4
 * Callers:
 *     ?GetLinearGradientRealization@CLinearGradientBrush@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCGradientColorData@@PEAVCMILBrushLinearGradient@@@Z @ 0x1801201D8 (-GetLinearGradientRealization@CLinearGradientBrush@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 * Callees:
 *     ?GetBrushTransform@CBrushTypeUtils@@SAXPEBVCMILMatrix@@0PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180013F00 (-GetBrushTransform@CBrushTypeUtils@@SAXPEBVCMILMatrix@@0PEBV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@XZ @ 0x18001AEB0 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@XZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?Transform@CBaseMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x1800DEA3C (-Transform@CBaseMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 */

void __fastcall CLinearGradientBrush::RealizeGradientPoints(
        __int64 a1,
        float *a2,
        __int64 a3,
        __int64 a4,
        struct MilPoint2F *a5)
{
  const struct D2DMatrix *v9; // rdi
  const struct CMILMatrix *Matrix; // r12
  CTransform3D *v11; // rcx
  CTransform3D *v12; // rcx
  _BYTE v13[64]; // [rsp+20h] [rbp-88h] BYREF

  *(_QWORD *)a3 = _mm_unpacklo_ps(
                    _mm_cvtpd_ps((__m128d)*(unsigned __int64 *)(a1 + 160)),
                    _mm_cvtpd_ps((__m128d)*(unsigned __int64 *)(a1 + 168))).m128_u64[0];
  *(_QWORD *)a4 = _mm_unpacklo_ps(
                    _mm_cvtpd_ps((__m128d)*(unsigned __int64 *)(a1 + 176)),
                    _mm_cvtpd_ps((__m128d)*(unsigned __int64 *)(a1 + 184))).m128_u64[0];
  if ( *(_DWORD *)(a1 + 108) == 1 )
  {
    *(float *)a3 = (float)((float)(a2[2] - *a2) * *(float *)a3) + *a2;
    *(float *)(a3 + 4) = (float)((float)(a2[3] - a2[1]) * *(float *)(a3 + 4)) + a2[1];
    *(float *)a4 = (float)((float)(a2[2] - *a2) * *(float *)a4) + *a2;
    *(float *)(a4 + 4) = (float)((float)(a2[3] - a2[1]) * *(float *)(a4 + 4)) + a2[1];
  }
  v9 = 0LL;
  Matrix = 0LL;
  *(float *)a5 = *(float *)a3 - (float)(*(float *)(a4 + 4) - *(float *)(a3 + 4));
  *((float *)a5 + 1) = (float)(*(float *)a4 - *(float *)a3) + *(float *)(a3 + 4);
  v11 = *(CTransform3D **)(a1 + 96);
  if ( v11 )
    Matrix = CTransform3D::GetMatrix(v11);
  v12 = *(CTransform3D **)(a1 + 88);
  if ( v12 )
    v9 = CTransform3D::GetMatrix(v12);
  CBrushTypeUtils::GetBrushTransform((__int64)Matrix, v9, a2, (__int64)v13);
  CBaseMatrix::Transform((CBaseMatrix *)v13, (const struct MilPoint2F *)a3, (struct MilPoint2F *)a3, 1);
  CBaseMatrix::Transform((CBaseMatrix *)v13, (const struct MilPoint2F *)a4, (struct MilPoint2F *)a4, 1);
  CBaseMatrix::Transform((CBaseMatrix *)v13, a5, a5, 1);
}
