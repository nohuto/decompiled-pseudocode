/*
 * XREFs of ?CreateImageBrush@CD2DContext@@QEAAJPEAUID2D1Image@@PEBUD2D1_IMAGE_BRUSH_PROPERTIES@@PEBUD2D1_BRUSH_PROPERTIES@@PEAPEAUID2D1ImageBrush@@@Z @ 0x1801352A8
 * Callers:
 *     ?GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z @ 0x180084350 (-GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CD2DContext::CreateImageBrush(
        CD2DContext *this,
        struct ID2D1Image *a2,
        const struct D2D1_IMAGE_BRUSH_PROPERTIES *a3,
        const struct D2D1_BRUSH_PROPERTIES *a4,
        struct ID2D1ImageBrush **a5)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct ID2D1Image *, const struct D2D1_IMAGE_BRUSH_PROPERTIES *, const struct D2D1_BRUSH_PROPERTIES *))(**((_QWORD **)this + 5) + 520LL))(
           *((_QWORD *)this + 5),
           a2,
           a3,
           a4);
}
