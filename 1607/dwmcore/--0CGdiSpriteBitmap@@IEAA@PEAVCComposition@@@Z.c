/*
 * XREFs of ??0CGdiSpriteBitmap@@IEAA@PEAVCComposition@@@Z @ 0x18002BE08
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CBitmapResource@@IEAA@PEAVCComposition@@@Z @ 0x1800AE8B8 (--0CBitmapResource@@IEAA@PEAVCComposition@@@Z.c)
 */

CGdiSpriteBitmap *__fastcall CGdiSpriteBitmap::CGdiSpriteBitmap(CGdiSpriteBitmap *this, struct CComposition *a2)
{
  CBitmapResource::CBitmapResource(this, a2);
  *(_QWORD *)this = &CGdiSpriteBitmap::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 1) = &CGdiSpriteBitmap::`vftable'{for `IImageSource'};
  *((_QWORD *)this + 2) = &CGdiSpriteBitmap::`vftable'{for `CContent'};
  *((_QWORD *)this + 18) = &CGdiSpriteBitmap::`vftable'{for `ISpriteImage'};
  *((_QWORD *)this + 19) = &CGdiSpriteBitmap::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 71) = 0LL;
  *((_QWORD *)this + 72) = 0LL;
  *((_QWORD *)this + 73) = 0LL;
  *((_DWORD *)this + 148) = 0;
  return this;
}
