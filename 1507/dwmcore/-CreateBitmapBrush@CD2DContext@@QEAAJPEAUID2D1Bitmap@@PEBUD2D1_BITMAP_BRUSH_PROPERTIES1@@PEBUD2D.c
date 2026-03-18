/*
 * XREFs of ?CreateBitmapBrush@CD2DContext@@QEAAJPEAUID2D1Bitmap@@PEBUD2D1_BITMAP_BRUSH_PROPERTIES1@@PEBUD2D1_BRUSH_PROPERTIES@@PEAPEAUID2D1BitmapBrush1@@@Z @ 0x18008F404
 * Callers:
 *     ?GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z @ 0x180084350 (-GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CD2DContext::CreateBitmapBrush(
        CD2DContext *this,
        struct ID2D1Bitmap *a2,
        const struct D2D1_BITMAP_BRUSH_PROPERTIES1 *a3,
        const struct D2D1_BRUSH_PROPERTIES *a4,
        struct ID2D1BitmapBrush1 **a5)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct ID2D1Bitmap *, const struct D2D1_BITMAP_BRUSH_PROPERTIES1 *, const struct D2D1_BRUSH_PROPERTIES *))(**((_QWORD **)this + 5) + 528LL))(
           *((_QWORD *)this + 5),
           a2,
           a3,
           a4);
}
