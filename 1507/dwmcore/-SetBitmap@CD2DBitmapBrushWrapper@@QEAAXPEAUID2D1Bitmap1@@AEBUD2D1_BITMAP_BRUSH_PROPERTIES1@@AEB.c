/*
 * XREFs of ?SetBitmap@CD2DBitmapBrushWrapper@@QEAAXPEAUID2D1Bitmap1@@AEBUD2D1_BITMAP_BRUSH_PROPERTIES1@@AEBUD2D1_BRUSH_PROPERTIES@@@Z @ 0x180072F84
 * Callers:
 *     ?FillShapeWithBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBVCShape@@PEAUID2D1Bitmap1@@AEBUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_EXTEND_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180071DB0 (-FillShapeWithBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBVCShape@@PEAUID2D1Bitmap1@@AEBUD.c)
 *     ?FillShapeWithBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Geometry@@PEAUID2D1Bitmap1@@AEBUD2D_MATRIX_3X2_F@@MW4D2D1_INTERPOLATION_MODE@@W4D2D1_EXTEND_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180136400 (-FillShapeWithBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Geometry@@PEAUID2D1Bitmap1.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CD2DBitmapBrushWrapper::SetBitmap(
        CD2DBitmapBrushWrapper *this,
        struct ID2D1Bitmap1 *a2,
        const struct D2D1_BITMAP_BRUSH_PROPERTIES1 *a3,
        const struct D2D1_BRUSH_PROPERTIES *a4)
{
  (*(void (__fastcall **)(_QWORD, struct ID2D1Bitmap1 *))(**((_QWORD **)this + 2) + 88LL))(*((_QWORD *)this + 2), a2);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 64LL))(
    *((_QWORD *)this + 2),
    (unsigned int)a3->extendModeX);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 72LL))(
    *((_QWORD *)this + 2),
    (unsigned int)a3->extendModeY);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 128LL))(
    *((_QWORD *)this + 2),
    (unsigned int)a3->interpolationMode);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2));
  (*(void (__fastcall **)(_QWORD, D2D1_MATRIX_3X2_F *))(**((_QWORD **)this + 2) + 40LL))(
    *((_QWORD *)this + 2),
    &a4->transform);
}
