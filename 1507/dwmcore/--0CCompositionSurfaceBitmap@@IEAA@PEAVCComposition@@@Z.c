/*
 * XREFs of ??0CCompositionSurfaceBitmap@@IEAA@PEAVCComposition@@@Z @ 0x180087334
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18006D070 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 *     ?Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z @ 0x18010A63C (-Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CCommandListBitmapRepresentation@@IEAA@XZ @ 0x180087DCC (--0CCommandListBitmapRepresentation@@IEAA@XZ.c)
 */

CCompositionSurfaceBitmap *__fastcall CCompositionSurfaceBitmap::CCompositionSurfaceBitmap(
        CCompositionSurfaceBitmap *this,
        struct CComposition *a2)
{
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 5) = &IImageSource::`vftable';
  *((_QWORD *)this + 6) = &ICompositionSurfaceInfoListener::`vftable';
  *((_QWORD *)this + 7) = &IDirtyRectSource::`vftable';
  CCommandListBitmapRepresentation::CCommandListBitmapRepresentation((CCompositionSurfaceBitmap *)((char *)this + 64));
  *(_QWORD *)this = &CCompositionSurfaceBitmap::`vftable'{for `CContent'};
  *((_QWORD *)this + 5) = &CCompositionSurfaceBitmap::`vftable'{for `IImageSource'};
  *((_QWORD *)this + 6) = &CCompositionSurfaceBitmap::`vftable'{for `ICompositionSurfaceInfoListener'};
  *((_QWORD *)this + 7) = &CCompositionSurfaceBitmap::`vftable'{for `IDirtyRectSource'};
  *((_QWORD *)this + 8) = &CCompositionSurfaceBitmap::`vftable'{for `CCommandListBitmapRepresentation'};
  return this;
}
