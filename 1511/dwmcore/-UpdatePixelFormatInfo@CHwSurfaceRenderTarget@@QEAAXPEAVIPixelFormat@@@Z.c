/*
 * XREFs of ?UpdatePixelFormatInfo@CHwSurfaceRenderTarget@@QEAAXPEAVIPixelFormat@@@Z @ 0x18008C654
 * Callers:
 *     ?InitTargetSurface@CHwTextureRenderTarget@@IEAAJXZ @ 0x18002C960 (-InitTargetSurface@CHwTextureRenderTarget@@IEAAJXZ.c)
 *     ?Init@CHwDisplayRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18007FF9C (-Init@CHwDisplayRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U-$TMILFlagsEnum@W4Flags.c)
 *     ?SetAlphaMode@CHwDisplayRenderTarget@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x18014A0B0 (-SetAlphaMode@CHwDisplayRenderTarget@@UEAAXW4DXGI_ALPHA_MODE@@@Z.c)
 *     ?Init@CHwStereoFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18014EFA0 (-Init@CHwStereoFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U-$TMILFlagsEnu.c)
 *     ?UpdateFlippingChain@CHwHwndRenderTarget@@AEAAJII@Z @ 0x18014FDCC (-UpdateFlippingChain@CHwHwndRenderTarget@@AEAAJII@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetPixelFormatInfo@IPixelFormat@@QEAAJPEAUPixelFormatInfo@@@Z @ 0x1800B1880 (-GetPixelFormatInfo@IPixelFormat@@QEAAJPEAUPixelFormatInfo@@@Z.c)
 */

void __fastcall CHwSurfaceRenderTarget::UpdatePixelFormatInfo(CHwSurfaceRenderTarget *this, struct IPixelFormat *a2)
{
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  IPixelFormat::GetPixelFormatInfo(a2, (struct PixelFormatInfo *)v3);
  (*(void (__fastcall **)(CHwSurfaceRenderTarget *, _BYTE *))(*(_QWORD *)this + 200LL))(this, v3);
}
