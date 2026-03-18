/*
 * XREFs of ?UsingSuperSampling@CHwTexturedColorSource@@QEBAHXZ @ 0x18002C408
 * Callers:
 *     ?GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z @ 0x18002BF80 (-GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CHwTexturedColorSource::UsingSuperSampling(CHwTexturedColorSource *this)
{
  return *((float *)this + 9) > 0.0 && *((float *)this + 10) > 0.0;
}
