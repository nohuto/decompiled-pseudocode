/*
 * XREFs of ??0CImageSource@@IEAA@PEAVCComposition@@@Z @ 0x18008E588
 * Callers:
 *     ??0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z @ 0x180033F08 (--0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CBitmapResource@@IEAA@PEAVCComposition@@@Z @ 0x1800AE8B8 (--0CBitmapResource@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CResource@@IEAA@PEAVCComposition@@@Z @ 0x18008DD68 (--0CResource@@IEAA@PEAVCComposition@@@Z.c)
 */

CImageSource *__fastcall CImageSource::CImageSource(CImageSource *this, struct CComposition *a2)
{
  *(_QWORD *)this = &IPixelFormat::`vftable';
  *((_QWORD *)this + 1) = &IImageSource::`vftable';
  CResource::CResource((CImageSource *)((char *)this + 16), a2);
  *(_QWORD *)this = &CImageSource::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 1) = &CImageSource::`vftable'{for `IImageSource'};
  *((_QWORD *)this + 2) = &CImageSource::`vftable'{for `CContent'};
  return this;
}
