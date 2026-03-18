/*
 * XREFs of ?GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800643F8
 * Callers:
 *     ?D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@PEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x18000E278 (-D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@PEBVCMILMatrix@@PE.c)
 *     ?ShapeDataFromGeometryNoRef@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAPEAVCShape@@@Z @ 0x18003FB88 (-ShapeDataFromGeometryNoRef@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAPEAVCShape@@.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetTightBounds@CShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18004DC10 (-GetTightBounds@CShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqu.c)
 *     ?GetTightBounds@CRectangleShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180058270 (-GetTightBounds@CRectangleShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ?GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x1800644A8 (-GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CGeometry::GetBoundsSafe(CGeometry *a1, const struct D2D_SIZE_F *a2, _OWORD *a3)
{
  int ShapeDataNoRef; // eax
  unsigned int v5; // ebx
  __int64 (__fastcall *v6)(CRectangleShape *, __int64, const struct D2DMatrix *); // rdi
  int TightBounds; // eax
  CRectangleShape *v9[2]; // [rsp+30h] [rbp-38h] BYREF

  v9[0] = 0LL;
  ShapeDataNoRef = CGeometry::GetShapeDataNoRef(a1, a2, v9);
  v5 = ShapeDataNoRef;
  if ( ShapeDataNoRef < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ShapeDataNoRef, 0x24u);
  }
  else
  {
    v6 = *(__int64 (__fastcall **)(CRectangleShape *, __int64, const struct D2DMatrix *))(*(_QWORD *)v9[0] + 24LL);
    if ( v6 == CShape::GetTightBounds )
    {
      TightBounds = CShape::GetTightBounds(v9[0], (__int64)a3, 0LL);
    }
    else if ( v6 == CRectangleShape::GetTightBounds )
    {
      TightBounds = CRectangleShape::GetTightBounds(v9[0], (__int64)a3, 0LL);
    }
    else
    {
      TightBounds = v6(v9[0], (__int64)a3, 0LL);
    }
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
