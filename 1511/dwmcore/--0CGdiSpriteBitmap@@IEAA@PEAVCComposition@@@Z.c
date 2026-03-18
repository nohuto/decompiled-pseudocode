/*
 * XREFs of ??0CGdiSpriteBitmap@@IEAA@PEAVCComposition@@@Z @ 0x1800863E8
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180092F84 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 * Callees:
 *     <none>
 */

CGdiSpriteBitmap *__fastcall CGdiSpriteBitmap::CGdiSpriteBitmap(CGdiSpriteBitmap *this, struct CComposition *a2)
{
  CGdiSpriteBitmap *result; // rax

  *((_QWORD *)this + 4) = a2;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *(_QWORD *)this = &CGdiSpriteBitmap::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 1) = &CGdiSpriteBitmap::`vftable'{for `IImageSource'};
  *((_QWORD *)this + 2) = &CGdiSpriteBitmap::`vftable'{for `CContent'};
  *((_QWORD *)this + 9) = &CGdiSpriteBitmap::`vftable'{for `ISpriteImage'};
  *((_QWORD *)this + 10) = &CGdiSpriteBitmap::`vftable'{for `IDeviceResourceNotify'};
  result = this;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *((_DWORD *)this + 130) = 0;
  return result;
}
