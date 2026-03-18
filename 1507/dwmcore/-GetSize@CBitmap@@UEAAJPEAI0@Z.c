/*
 * XREFs of ?GetSize@CBitmap@@UEAAJPEAI0@Z @ 0x180080880
 * Callers:
 *     ?ComputeRealizationParameters@CHwBitmapColorSource@@CAJPEBVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBV?$CMultiOutSpaceMatrix@URealizationSampling@CoordinateSpace@@@@W4DXGI_FORMAT@@W4Enum@MilBitmapWrapMode@@W47MilBitmapInterpolationMode@@HMPEBVCColorKey@@HAEAURealizationParameters@1@@Z @ 0x1800196D8 (-ComputeRealizationParameters@CHwBitmapColorSource@@CAJPEBVCD3DDeviceLevel1@@PEAVIBitmapSource@@.c)
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x18003F7D0 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 *     ?DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@AEBVCHwBrushContext@@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1800411B0 (-DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@A.c)
 *     ?GetBounds@CBitmapResource@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180082820 (-GetBounds@CBitmapResource@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF.c)
 *     ?GetSize@CBitmap@@WBI@EAAJPEAI0@Z @ 0x180099E70 (-GetSize@CBitmap@@WBI@EAAJPEAI0@Z.c)
 *     ?GetSize@CCompressedSourceBitmap@@UEAAJPEAI0@Z @ 0x1801450A0 (-GetSize@CCompressedSourceBitmap@@UEAAJPEAI0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmap::GetSize(CBitmap *this, unsigned int *a2, unsigned int *a3)
{
  char *v6; // rbx
  unsigned int v7; // eax
  unsigned int v8; // edi

  if ( this == (CBitmap *)16 )
    v6 = 0LL;
  else
    v6 = (char *)this + 96;
  if ( v6[48] )
    EnterCriticalSection((LPCRITICAL_SECTION)(v6 + 8));
  if ( a2 && a3 )
  {
    *a2 = *((_DWORD *)this + 42);
    v7 = *((_DWORD *)this + 43);
    v8 = 0;
    *a3 = v7;
  }
  else
  {
    v8 = -2147024809;
  }
  if ( v6[48] )
    LeaveCriticalSection((LPCRITICAL_SECTION)(v6 + 8));
  return v8;
}
