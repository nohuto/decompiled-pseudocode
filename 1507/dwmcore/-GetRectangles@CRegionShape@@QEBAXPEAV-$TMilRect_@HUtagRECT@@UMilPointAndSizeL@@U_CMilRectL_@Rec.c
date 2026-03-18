/*
 * XREFs of ?GetRectangles@CRegionShape@@QEBAXPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180004E04
 * Callers:
 *     ?DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180004418 (-DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1800785F0 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?GetShapeRegion@CShape@@QEAAJPEAPEAUHRGN__@@@Z @ 0x18014A46C (-GetShapeRegion@CShape@@QEAAJPEAPEAUHRGN__@@@Z.c)
 * Callees:
 *     ?GetRectCount@CRegionShape@@QEBAIXZ @ 0x180078558 (-GetRectCount@CRegionShape@@QEBAIXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
