/*
 * XREFs of ?GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002CC68
 * Callers:
 *     ?D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@PEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x180004874 (-D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@PEBVCMILMatrix@@PE.c)
 *     ?ShapeDataFromGeometryNoRef@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAPEAVCShape@@@Z @ 0x18000497C (-ShapeDataFromGeometryNoRef@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAPEAVCShape@@.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJXZ @ 0x180052300 (-ConvertInnerToOuterBounds@CVisual@@IEAAJXZ.c)
 * Callees:
 *     ?GetTightBounds@CRegionShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18002BF80 (-GetTightBounds@CRegionShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 *     ?GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18002C9C0 (-GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180097A50 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGeometry::GetBoundsSafe(__int64 a1, const struct D2D_SIZE_F *a2, _QWORD *a3)
{
  int v3; // ebx
  CRegionShape *v4; // r14
  __int64 (__fastcall *v8)(CRegionShape *, _QWORD *); // rax
  int TightBounds; // eax
  int ShapeDataWorker; // eax

  v3 = 0;
  v4 = 0LL;
  if ( (*(_BYTE *)(a1 + 32) & 1) == 0
    && (!*(_BYTE *)(a1 + 168) || *(float *)(a1 + 144) == a2->width && *(float *)(a1 + 148) == a2->height) )
  {
LABEL_3:
    v4 = *(CRegionShape **)(a1 + 152);
    goto LABEL_4;
  }
  ShapeDataWorker = CGeometry::GetShapeDataWorker((CGeometry *)a1, a2, (struct CShapePtr *)(a1 + 152));
  v3 = ShapeDataWorker;
  if ( ShapeDataWorker >= 0 )
  {
    if ( a2 )
      *(struct D2D_SIZE_F *)(a1 + 144) = *a2;
    *(_DWORD *)(a1 + 32) &= ~1u;
    goto LABEL_3;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, ShapeDataWorker, 0x71u);
LABEL_4:
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x26u);
  }
  else
  {
    v8 = *(__int64 (__fastcall **)(CRegionShape *, _QWORD *))(*(_QWORD *)v4 + 24LL);
    if ( v8 == CRegionShape::GetTightBounds )
    {
      TightBounds = CRegionShape::GetTightBounds(v4, a3);
    }
    else if ( (char *)v8 == (char *)CRectanglesShape::GetTightBounds )
    {
      TightBounds = CRectanglesShape::GetTightBounds(v4, a3);
    }
    else
    {
      TightBounds = ((__int64 (__fastcall *)(CRegionShape *, _QWORD *, _QWORD))v8)(v4, a3, 0LL);
    }
    v3 = TightBounds;
    if ( TightBounds < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, TightBounds, 0x28u);
  }
  if ( v3 == -2003304438 )
  {
    v3 = 0;
    *(_OWORD *)a3 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  }
  return (unsigned int)v3;
}
