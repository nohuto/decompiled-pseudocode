/*
 * XREFs of ??0CRenderTargetImageSource@@IEAA@AEBU_GUID@@_N@Z @ 0x1801319E4
 * Callers:
 *     ?CreateSingleAdapter@CRenderTargetImageSource@@SAJPEAVIRenderTarget@@PEAPEAV1@@Z @ 0x180131B38 (-CreateSingleAdapter@CRenderTargetImageSource@@SAJPEAVIRenderTarget@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRenderTargetBitmap@@IEAA@AEBU_GUID@@_N@Z @ 0x18001EB70 (--0CRenderTargetBitmap@@IEAA@AEBU_GUID@@_N@Z.c)
 */

CRenderTargetImageSource *__fastcall CRenderTargetImageSource::CRenderTargetImageSource(
        CRenderTargetImageSource *this,
        const struct _GUID *a2)
{
  _QWORD *v2; // rcx
  CRenderTargetImageSource *v3; // r10

  *(_QWORD *)this = &IImageSource::`vftable';
  CRenderTargetBitmap::CRenderTargetBitmap((CRenderTargetImageSource *)((char *)this + 8), a2, 1);
  *v2 = &CRenderTargetImageSource::`vftable'{for `CMILCOMBase'};
  *(_QWORD *)v3 = &CRenderTargetImageSource::`vftable';
  *((_QWORD *)v3 + 3) = &CRenderTargetImageSource::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)v3 + 4) = &CRenderTargetImageSource::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)v3 + 15) = &CRenderTargetImageSource::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)v3 + 16) = &CRenderTargetImageSource::`vftable'{for `IDeviceResource'};
  return v3;
}
