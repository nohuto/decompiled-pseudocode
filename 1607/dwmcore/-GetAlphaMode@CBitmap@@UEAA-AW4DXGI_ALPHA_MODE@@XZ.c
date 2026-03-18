/*
 * XREFs of ?GetAlphaMode@CBitmap@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x180085190
 * Callers:
 *     ?Initialize@CMILBrushBitmapLocalSetterWrapper@@AEAAXPEAVCMILBrushBitmap@@PEAVIBitmapSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBVCColorKey@@W4Enum@MilBitmapWrapMode@@PEBVCMILMatrix@@W4XSpaceDefinition@@@Z @ 0x18002275C (-Initialize@CMILBrushBitmapLocalSetterWrapper@@AEAAXPEAVCMILBrushBitmap@@PEAVIBitmapSource@@U-$T.c)
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180064710 (-BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBV-$CMatrix@UBaseSamplin.c)
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x180072730 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 *     ?ComputeRealizationParameters@CHwBitmapColorSource@@CAJPEBVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBV?$CMultiOutSpaceMatrix@URealizationSampling@CoordinateSpace@@@@W4DXGI_FORMAT@@W4Enum@MilBitmapWrapMode@@W47MilBitmapInterpolationMode@@HMPEBVCColorKey@@HAEAURealizationParameters@1@@Z @ 0x180080A18 (-ComputeRealizationParameters@CHwBitmapColorSource@@CAJPEBVCD3DDeviceLevel1@@PEAVIBitmapSource@@.c)
 *     ?SetDefaultRealizationPixelFormat@CMILBrushBitmap@@UEAAXXZ @ 0x180084890 (-SetDefaultRealizationPixelFormat@CMILBrushBitmap@@UEAAXXZ.c)
 *     ?GetAlphaMode@CBitmapResource@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x1800AE960 (-GetAlphaMode@CBitmapResource@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
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
