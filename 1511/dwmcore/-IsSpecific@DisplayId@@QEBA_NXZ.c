/*
 * XREFs of ?IsSpecific@DisplayId@@QEBA_NXZ @ 0x180070DC8
 * Callers:
 *     ?UpdateDisplayId@CHwTextureRenderTarget@@UEAA_NVDisplayId@@@Z @ 0x180010FC0 (-UpdateDisplayId@CHwTextureRenderTarget@@UEAA_NVDisplayId@@@Z.c)
 *     ??0CHwTextureRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@VDisplayId@@@Z @ 0x18002CCF8 (--0CHwTextureRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@VDisplayId@@@Z.c)
 *     ?FindExistingRenderTarget@CCachedVisualImage@@AEAAPEAURenderTargetBitmapInfo@1@U_LUID@@VDisplayId@@@Z @ 0x18005AEFC (-FindExistingRenderTarget@CCachedVisualImage@@AEAAPEAURenderTargetBitmapInfo@1@U_LUID@@VDisplayI.c)
 *     ?ValidateAdapterLuidAndDisplayId@CDisplaySet@@IEBAJU_LUID@@VDisplayId@@@Z @ 0x18006FF48 (-ValidateAdapterLuidAndDisplayId@CDisplaySet@@IEBAJU_LUID@@VDisplayId@@@Z.c)
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x1800724C8 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 *     ?TryForLastUsedBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorSource@@AEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEAVCMILBrushBitmap@@AEAPEAV3@3@Z @ 0x18008B728 (-TryForLastUsedBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorS.c)
 *     ?GetPointerToValidRects@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJVDisplayId@@AEAIAEAPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180148E90 (-GetPointerToValidRects@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJVDisplayId@@AEAIAEAPEBV-$T.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DisplayId::IsSpecific(DisplayId *this)
{
  return *(_DWORD *)this != DisplayId::None && *(_DWORD *)this != DisplayId::All;
}
