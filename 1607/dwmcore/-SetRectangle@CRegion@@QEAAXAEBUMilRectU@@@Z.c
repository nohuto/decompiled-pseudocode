/*
 * XREFs of ?SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z @ 0x18009A078
 * Callers:
 *     ?IsValid@CSecondaryBitmap@@UEAA_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180011E00 (-IsValid@CSecondaryBitmap@@UEAA_NPEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAV2@@.c)
 *     ?MarkFullInvalid@CSecondaryBitmap@@UEAAXXZ @ 0x180011F00 (-MarkFullInvalid@CSecondaryBitmap@@UEAAXXZ.c)
 *     ?DirtyRenderingRealization@CCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z @ 0x1800989C8 (-DirtyRenderingRealization@CCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z.c)
 * Callees:
 *     ?SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z @ 0x18009AA50 (-SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z.c)
 */

void __fastcall CRegion::SetRectangle(CRegion *this, const struct MilRectU *a2)
{
  FastRegion::CRegion::SetRectangle(
    this,
    *(_QWORD *)a2,
    HIDWORD(*(_QWORD *)a2),
    *((_DWORD *)a2 + 2),
    *((_DWORD *)a2 + 3));
}
