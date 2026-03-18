/*
 * XREFs of ??0MagnifierCaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCMagnifierRenderTarget@@PEAUIWICImagingFactory@@PEAVCChannelContext@@AEBUWICRect@@_K@Z @ 0x1800F0BC4
 * Callers:
 *     ?MetaBitmapRenderTarget_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_CAPTUREBITS@@@Z @ 0x1800E2B0C (-MetaBitmapRenderTarget_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180035460 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ??0CaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetResource@@PEAVCVisualTree@@MAEBUWICRect@@W4DXGI_FORMAT@@_K@Z @ 0x180061E8C (--0CaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetResource.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?GetTargetCount@COffScreenRenderTarget@@QEAAJPEAI@Z @ 0x1800EC7B0 (-GetTargetCount@COffScreenRenderTarget@@QEAAJPEAI@Z.c)
 */

MagnifierCaptureBitsResponse *__fastcall MagnifierCaptureBitsResponse::MagnifierCaptureBitsResponse(
        MagnifierCaptureBitsResponse *this,
        struct CSurfaceManager *a2,
        struct CMagnifierRenderTarget *a3,
        struct IWICImagingFactory *a4,
        struct CChannelContext *a5,
        const struct WICRect *a6,
        unsigned __int64 a7)
{
  struct IRenderTargetResource *v10; // r9

  if ( a3 )
    v10 = (struct CMagnifierRenderTarget *)((char *)a3 + 40);
  else
    v10 = 0LL;
  CaptureBitsResponse::CaptureBitsResponse(this, a2, a5, v10, 0LL, 1.0, a6, DXGI_FORMAT_B8G8R8A8_UNORM, 0LL);
  *((_QWORD *)this + 20) = a3;
  *(_QWORD *)this = &MagnifierCaptureBitsResponse::`vftable';
  if ( a3 )
    CBitmapOfDeviceBitmaps::AddRef(a3);
  *((_QWORD *)this + 24) = a4;
  if ( a4 )
    ((void (__fastcall *)(struct IWICImagingFactory *))a4->lpVtbl->AddRef)(a4);
  COffScreenRenderTarget::GetTargetCount(*((COffScreenRenderTarget **)this + 20), (unsigned int *)this + 42);
  *((_QWORD *)this + 22) = a7;
  *((_DWORD *)this + 46) = *((_DWORD *)this + 42) * a6->Width;
  *((_DWORD *)this + 47) = a6->Height;
  return this;
}
