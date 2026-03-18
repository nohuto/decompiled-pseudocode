/*
 * XREFs of ?GetAlphaMode@CBitmap@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x180080CF0
 * Callers:
 *     ?Initialize@CMILBrushBitmapLocalSetterWrapper@@AEAAXPEAVCMILBrushBitmap@@PEAVIBitmapSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBVCColorKey@@W4Enum@MilBitmapWrapMode@@PEBVCBaseMatrix@@W4XSpaceDefinition@@@Z @ 0x1800161F4 (-Initialize@CMILBrushBitmapLocalSetterWrapper@@AEAAXPEAVCMILBrushBitmap@@PEAVIBitmapSource@@U-$T.c)
 *     ?ComputeRealizationParameters@CHwBitmapColorSource@@CAJPEBVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBV?$CMultiOutSpaceMatrix@URealizationSampling@CoordinateSpace@@@@W4DXGI_FORMAT@@W4Enum@MilBitmapWrapMode@@W47MilBitmapInterpolationMode@@HMPEBVCColorKey@@HAEAURealizationParameters@1@@Z @ 0x1800196D8 (-ComputeRealizationParameters@CHwBitmapColorSource@@CAJPEBVCD3DDeviceLevel1@@PEAVIBitmapSource@@.c)
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180023530 (-BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBV-$CMatrix@UBaseSamplin.c)
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x18003F7D0 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 *     ?SetDefaultRealizationPixelFormat@CMILBrushBitmap@@UEAAXXZ @ 0x180081100 (-SetDefaultRealizationPixelFormat@CMILBrushBitmap@@UEAAXXZ.c)
 *     ?GetAlphaMode@CBitmapResource@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x1800826C0 (-GetAlphaMode@CBitmapResource@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmap::GetAlphaMode(CBitmap *this)
{
  char *v2; // rbx
  unsigned int v3; // edi

  if ( this == (CBitmap *)16 )
    v2 = 0LL;
  else
    v2 = (char *)this + 96;
  if ( v2[48] )
    EnterCriticalSection((LPCRITICAL_SECTION)(v2 + 8));
  v3 = *((_DWORD *)this + 47);
  if ( v2[48] )
    LeaveCriticalSection((LPCRITICAL_SECTION)(v2 + 8));
  return v3;
}
