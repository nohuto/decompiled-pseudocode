/*
 * XREFs of ?GetRectangles@CRegionShape@@QEBAXPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18001D5CC
 * Callers:
 *     ?DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18000A884 (-DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18004E2D0 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?GetShapeRegion@CShape@@QEAAJPEAPEAUHRGN__@@@Z @ 0x1801588EC (-GetShapeRegion@CShape@@QEAAJPEAPEAUHRGN__@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetRectCount@CRegionShape@@QEBAIXZ @ 0x18004E114 (-GetRectCount@CRegionShape@@QEBAIXZ.c)
 */

unsigned int __fastcall CRegionShape::GetRectangles(CRegionShape *a1, __int64 a2, unsigned int a3)
{
  unsigned int result; // eax

  result = CRegionShape::GetRectCount(a1);
  if ( result )
    return (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(**((_QWORD **)a1 + 1) + 144LL))(
             *((_QWORD **)a1 + 1),
             a2,
             a3);
  return result;
}
