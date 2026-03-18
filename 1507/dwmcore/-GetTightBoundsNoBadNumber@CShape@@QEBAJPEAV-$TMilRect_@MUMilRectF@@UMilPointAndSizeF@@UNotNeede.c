/*
 * XREFs of ?GetTightBoundsNoBadNumber@CShape@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800781CC
 * Callers:
 *     ?DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCBrush@@@Z @ 0x18002DA28 (-DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCBrush@@@Z.c)
 *     ?DrawPath@CSwRenderTargetGetBounds@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAUBrushContext@@PEAVCShape@@PEAVCBrushRealizer@@5W4Enum@MilCompositingMode@@@Z @ 0x180043F90 (-DrawPath@CSwRenderTargetGetBounds@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextStat.c)
 *     ?Create@CClippedBitmapLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@PEAUID2D1Bitmap1@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@PEAPEAV1@@Z @ 0x1800FB310 (-Create@CClippedBitmapLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@PEAUID2D1Bitmap1@@PEBV-$CMatrix@UB.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetTightBounds@CShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180077FF0 (-GetTightBounds@CShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqu.c)
 *     ?GetTightBounds@CRectangleShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180078DC0 (-GetTightBounds@CRectangleShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CShape::GetTightBoundsNoBadNumber(CRectangleShape *a1, __m128 *a2, CBaseMatrix *a3)
{
  __int64 (__fastcall *v4)(CComplexShape *, __int64, CBaseMatrix *); // rsi
  int TightBounds; // eax
  unsigned int v6; // ebx

  v4 = *(__int64 (__fastcall **)(CComplexShape *, __int64, CBaseMatrix *))(*(_QWORD *)a1 + 24LL);
  if ( (char *)v4 == (char *)CRectangleShape::GetTightBounds )
  {
    TightBounds = CRectangleShape::GetTightBounds(a1);
  }
  else if ( v4 == CShape::GetTightBounds )
  {
    TightBounds = CShape::GetTightBounds(a1, (__int64)a2, a3);
  }
  else
  {
    TightBounds = v4(a1, (__int64)a2, a3);
  }
  v6 = TightBounds;
  if ( TightBounds == -2003304438 )
  {
    v6 = 0;
    *a2 = _mm_shuffle_ps((__m128)LODWORD(CFloatFPU::sc_NaN), (__m128)LODWORD(CFloatFPU::sc_NaN), 0);
  }
  else if ( TightBounds < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, TightBounds, 0x2F6u);
  }
  return v6;
}
