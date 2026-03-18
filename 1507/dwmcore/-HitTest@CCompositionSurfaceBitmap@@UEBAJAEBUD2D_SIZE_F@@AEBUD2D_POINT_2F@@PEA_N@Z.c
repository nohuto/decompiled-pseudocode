/*
 * XREFs of ?HitTest@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180008070
 * Callers:
 *     ?HitTest@CYCbCrSurface@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18010CBD0 (-HitTest@CYCbCrSurface@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?GetBoundsInternal@CCompositionSurfaceBitmap@@AEBAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800089D4 (-GetBoundsInternal@CCompositionSurfaceBitmap@@AEBAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@U.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004E0A0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::HitTest(
        CCompositionSurfaceBitmap *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  int BoundsInternal; // eax
  unsigned int v7; // ebx
  float y; // xmm1_4
  float v10[4]; // [rsp+30h] [rbp-38h] BYREF

  *a4 = 0;
  BoundsInternal = CCompositionSurfaceBitmap::GetBoundsInternal(this, a2, v10);
  v7 = BoundsInternal;
  if ( BoundsInternal < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, BoundsInternal, 0x3BCu);
  if ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(v10) )
  {
    y = a3->y;
    if ( y >= v10[1] && v10[3] > y && a3->x >= v10[0] && v10[2] > a3->x )
      *a4 = 1;
  }
  return v7;
}
