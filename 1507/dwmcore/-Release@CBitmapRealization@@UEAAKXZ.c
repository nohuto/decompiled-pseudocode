/*
 * XREFs of ?Release@CBitmapRealization@@UEAAKXZ @ 0x1800468D0
 * Callers:
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18002EDE0 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180038480 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x18003F7D0 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 *     ?ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ @ 0x18006E624 (-ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x180086B28 (-ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x180086E58 (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 *     ?CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z @ 0x180089BA0 (-CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@.c)
 *     ?Release@CCompositionSurfaceBitmap@@WCI@EAAKXZ @ 0x18009A340 (-Release@CCompositionSurfaceBitmap@@WCI@EAAKXZ.c)
 *     ?Release@CCompositionSurfaceBitmap@@WDI@EAAKXZ @ 0x18009A350 (-Release@CCompositionSurfaceBitmap@@WDI@EAAKXZ.c)
 *     ?Release@CCompositionSurfaceBitmap@@WEA@EAAKXZ @ 0x18009A360 (-Release@CCompositionSurfaceBitmap@@WEA@EAAKXZ.c)
 *     ?Release@CMILBrushBitmap@@WBI@EAAKXZ @ 0x18009BDF0 (-Release@CMILBrushBitmap@@WBI@EAAKXZ.c)
 *     ?Release@CBitmapRealization@@WBA@EAAKXZ @ 0x18009BF40 (-Release@CBitmapRealization@@WBA@EAAKXZ.c)
 *     ?Release@CBitmapRealization@@WHA@EAAKXZ @ 0x18009BF50 (-Release@CBitmapRealization@@WHA@EAAKXZ.c)
 *     ?Release@CBitmapRealization@@WHI@EAAKXZ @ 0x18009BF60 (-Release@CBitmapRealization@@WHI@EAAKXZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CBitmapRealization::Release(CBitmapRealization *this)
{
  unsigned __int32 v1; // edi

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 )
  {
    --*((_DWORD *)this + 2);
    (*(void (__fastcall **)(CBitmapRealization *, __int64))(*(_QWORD *)this + 24LL))(this, 1LL);
  }
  return v1;
}
