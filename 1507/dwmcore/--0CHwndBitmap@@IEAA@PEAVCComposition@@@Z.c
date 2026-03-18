/*
 * XREFs of ??0CHwndBitmap@@IEAA@PEAVCComposition@@@Z @ 0x180011D5C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18006D070 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 * Callees:
 *     ??0CCommandListBitmapRepresentation@@IEAA@XZ @ 0x180087DCC (--0CCommandListBitmapRepresentation@@IEAA@XZ.c)
 */

CHwndBitmap *__fastcall CHwndBitmap::CHwndBitmap(CHwndBitmap *this, struct CComposition *a2)
{
  CHwndBitmap *result; // rax

  *((_QWORD *)this + 1) = &IImageSource::`vftable';
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = a2;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  CCommandListBitmapRepresentation::CCommandListBitmapRepresentation((CHwndBitmap *)((char *)this + 72));
  *(_QWORD *)this = &CHwndBitmap::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 1) = &CHwndBitmap::`vftable'{for `IImageSource'};
  *((_QWORD *)this + 2) = &CHwndBitmap::`vftable'{for `CContent'};
  *((_QWORD *)this + 9) = &CHwndBitmap::`vftable';
  result = this;
  *((_BYTE *)this + 464) = 1;
  return result;
}
