/*
 * XREFs of ??0CBitmapResource@@IEAA@PEAVCComposition@@@Z @ 0x1800AE8B8
 * Callers:
 *     ??0CHwndBitmap@@IEAA@PEAVCComposition@@@Z @ 0x18000A79C (--0CHwndBitmap@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CGdiSpriteBitmap@@IEAA@PEAVCComposition@@@Z @ 0x18002BE08 (--0CGdiSpriteBitmap@@IEAA@PEAVCComposition@@@Z.c)
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ??0CFlipChain@@IEAA@PEAVCComposition@@@Z @ 0x180141A6C (--0CFlipChain@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CImageSource@@IEAA@PEAVCComposition@@@Z @ 0x18008E588 (--0CImageSource@@IEAA@PEAVCComposition@@@Z.c)
 */

CBitmapResource *__fastcall CBitmapResource::CBitmapResource(CBitmapResource *this, struct CComposition *a2)
{
  CImageSource::CImageSource(this, a2);
  *(_QWORD *)this = &CBitmapResource::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 1) = &CBitmapResource::`vftable'{for `IImageSource'};
  *((_QWORD *)this + 2) = &CBitmapResource::`vftable'{for `CContent'};
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  return this;
}
