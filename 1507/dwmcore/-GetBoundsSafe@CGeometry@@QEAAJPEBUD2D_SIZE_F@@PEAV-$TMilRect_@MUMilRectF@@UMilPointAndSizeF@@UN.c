/*
 * XREFs of ?GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180017898
 * Callers:
 *     ?ShapeDataFromGeometryNoRef@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAPEAVCShape@@@Z @ 0x18002AF38 (-ShapeDataFromGeometryNoRef@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAPEAVCShape@@.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJXZ @ 0x1800377D0 (-ConvertInnerToOuterBounds@CVisual@@IEAAJXZ.c)
 * Callees:
 *     ?GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x18001793C (-GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetTightBounds@CShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180077FF0 (-GetTightBounds@CShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqu.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CGeometry::GetBoundsSafe(CGeometry *a1, const struct D2D_SIZE_F *a2, _OWORD *a3)
{
  int ShapeDataNoRef; // eax
  unsigned int v5; // ebx
  __int64 (__fastcall *v6)(CComplexShape *); // rdi
  int TightBounds; // eax
  struct CShape *v9[2]; // [rsp+30h] [rbp-38h] BYREF

  v9[0] = 0LL;
  ShapeDataNoRef = CGeometry::GetShapeDataNoRef(a1, a2, v9);
  v5 = ShapeDataNoRef;
  if ( ShapeDataNoRef < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ShapeDataNoRef, 0x24u);
  }
  else
  {
    v6 = *(__int64 (__fastcall **)(CComplexShape *))(*(_QWORD *)v9[0] + 24LL);
    if ( v6 == CShape::GetTightBounds )
      TightBounds = CShape::GetTightBounds(v9[0]);
    else
      TightBounds = ((__int64 (__fastcall *)(struct CShape *, _OWORD *, _QWORD))v6)(v9[0], a3, 0LL);
    v5 = TightBounds;
    if ( TightBounds < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, TightBounds, 0x26u);
  }
  if ( v5 == -2003304438 )
  {
    v5 = 0;
    *(_OWORD *)v9 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    *a3 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  }
  return v5;
}
