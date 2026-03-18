/*
 * XREFs of ??0CHwndBitmap@@IEAA@PEAVCComposition@@@Z @ 0x18000A79C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CBitmapResource@@IEAA@PEAVCComposition@@@Z @ 0x1800AE8B8 (--0CBitmapResource@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CCommandListBitmapRepresentation@@IEAA@XZ @ 0x1800B0E8C (--0CCommandListBitmapRepresentation@@IEAA@XZ.c)
 */

CHwndBitmap *__fastcall CHwndBitmap::CHwndBitmap(CHwndBitmap *this, struct CComposition *a2)
{
  CBitmapResource::CBitmapResource(this, a2);
  CCommandListBitmapRepresentation::CCommandListBitmapRepresentation((CHwndBitmap *)((char *)this + 144));
  *((_BYTE *)this + 544) = 1;
  *(_QWORD *)this = &CHwndBitmap::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 1) = &CHwndBitmap::`vftable'{for `IImageSource'};
  *((_QWORD *)this + 2) = &CHwndBitmap::`vftable'{for `CContent'};
  *((_QWORD *)this + 18) = &CHwndBitmap::`vftable';
  return this;
}
