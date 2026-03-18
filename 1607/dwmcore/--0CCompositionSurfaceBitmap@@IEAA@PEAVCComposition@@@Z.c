/*
 * XREFs of ??0CCompositionSurfaceBitmap@@IEAA@PEAVCComposition@@@Z @ 0x180093564
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z @ 0x18014262C (-Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CResource@@IEAA@PEAVCComposition@@@Z @ 0x18008DD68 (--0CResource@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CCommandListBitmapRepresentation@@IEAA@XZ @ 0x1800B0E8C (--0CCommandListBitmapRepresentation@@IEAA@XZ.c)
 */

CCompositionSurfaceBitmap *__fastcall CCompositionSurfaceBitmap::CCompositionSurfaceBitmap(
        CCompositionSurfaceBitmap *this,
        struct CComposition *a2)
{
  CResource::CResource(this, a2);
  CCommandListBitmapRepresentation::CCommandListBitmapRepresentation((CCompositionSurfaceBitmap *)((char *)this + 144));
  *(_QWORD *)this = &CCompositionSurfaceBitmap::`vftable'{for `CContent'};
  *((_QWORD *)this + 14) = &CCompositionSurfaceBitmap::`vftable'{for `ISwapChainContent'};
  *((_QWORD *)this + 15) = &CCompositionSurfaceBitmap::`vftable'{for `IImageSource'};
  *((_QWORD *)this + 16) = &CCompositionSurfaceBitmap::`vftable'{for `ICompositionSurfaceInfoListener'};
  *((_QWORD *)this + 17) = &CCompositionSurfaceBitmap::`vftable'{for `IDirtyRectSource'};
  *((_QWORD *)this + 18) = &CCompositionSurfaceBitmap::`vftable'{for `CCommandListBitmapRepresentation'};
  return this;
}
