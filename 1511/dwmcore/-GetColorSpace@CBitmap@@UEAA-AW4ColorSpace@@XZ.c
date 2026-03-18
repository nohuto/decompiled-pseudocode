/*
 * XREFs of ?GetColorSpace@CBitmap@@UEAA?AW4ColorSpace@@XZ @ 0x180088EC0
 * Callers:
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800378DC (-BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBV-$CMatrix@UBaseSamplin.c)
 *     ?GetColorSpace@CBitmapResource@@UEAA?AW4ColorSpace@@XZ @ 0x18005C440 (-GetColorSpace@CBitmapResource@@UEAA-AW4ColorSpace@@XZ.c)
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x1800776B0 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 *     ?SetDefaultRealizationPixelFormat@CMILBrushBitmap@@UEAAXXZ @ 0x180089980 (-SetDefaultRealizationPixelFormat@CMILBrushBitmap@@UEAAXXZ.c)
 *     ?ComputeRealizationParameters@CHwBitmapColorSource@@CAJPEBVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBV?$CMultiOutSpaceMatrix@URealizationSampling@CoordinateSpace@@@@W4DXGI_FORMAT@@W4Enum@MilBitmapWrapMode@@W47MilBitmapInterpolationMode@@HMPEBVCColorKey@@HAEAURealizationParameters@1@@Z @ 0x18008BF20 (-ComputeRealizationParameters@CHwBitmapColorSource@@CAJPEBVCD3DDeviceLevel1@@PEAVIBitmapSource@@.c)
 *     ?Initialize@CMILBrushBitmapLocalSetterWrapper@@AEAAXPEAVCMILBrushBitmap@@PEAVIBitmapSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBVCColorKey@@W4Enum@MilBitmapWrapMode@@PEBVCBaseMatrix@@W4XSpaceDefinition@@@Z @ 0x1800ACD30 (-Initialize@CMILBrushBitmapLocalSetterWrapper@@AEAAXPEAVCMILBrushBitmap@@PEAVIBitmapSource@@U-$T.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmap::GetColorSpace(__int64 a1)
{
  __int64 v2; // rbx
  unsigned int v3; // edi

  if ( a1 == 16 )
    v2 = 0LL;
  else
    v2 = a1 + 96;
  if ( *(_BYTE *)(v2 + 48) )
    EnterCriticalSection((LPCRITICAL_SECTION)(v2 + 8));
  v3 = *(_DWORD *)(a1 + 192);
  if ( *(_BYTE *)(v2 + 48) )
    LeaveCriticalSection((LPCRITICAL_SECTION)(v2 + 8));
  return v3;
}
