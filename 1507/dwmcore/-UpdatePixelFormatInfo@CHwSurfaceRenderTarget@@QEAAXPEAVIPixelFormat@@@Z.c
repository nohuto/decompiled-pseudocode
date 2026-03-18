/*
 * XREFs of ?UpdatePixelFormatInfo@CHwSurfaceRenderTarget@@QEAAXPEAVIPixelFormat@@@Z @ 0x180081824
 * Callers:
 *     ?InitTargetSurface@CHwTextureRenderTarget@@IEAAJXZ @ 0x180082E00 (-InitTargetSurface@CHwTextureRenderTarget@@IEAAJXZ.c)
 *     ?Init@CHwDisplayRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18008E960 (-Init@CHwDisplayRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U-$TMILFlagsEnum@W4Flags.c)
 *     ?SetAlphaMode@CHwDisplayRenderTarget@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x180139510 (-SetAlphaMode@CHwDisplayRenderTarget@@UEAAXW4DXGI_ALPHA_MODE@@@Z.c)
 *     ?Init@CHwStereoFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18013FD90 (-Init@CHwStereoFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U-$TMILFlagsEnu.c)
 *     ?UpdateFlippingChain@CHwHwndRenderTarget@@AEAAJII@Z @ 0x18014092C (-UpdateFlippingChain@CHwHwndRenderTarget@@AEAAJII@Z.c)
 * Callees:
 *     ?GetPixelFormatInfo@IPixelFormat@@QEAAJPEAUPixelFormatInfo@@@Z @ 0x18005FC50 (-GetPixelFormatInfo@IPixelFormat@@QEAAJPEAUPixelFormatInfo@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CHwSurfaceRenderTarget::UpdatePixelFormatInfo(CHwSurfaceRenderTarget *this, struct IPixelFormat *a2)
{
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  IPixelFormat::GetPixelFormatInfo(a2, (struct PixelFormatInfo *)v3);
  (*(void (__fastcall **)(CHwSurfaceRenderTarget *, _BYTE *))(*(_QWORD *)this + 200LL))(this, v3);
}
