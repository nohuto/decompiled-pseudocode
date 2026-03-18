/*
 * XREFs of ?AddDeviceBitmapColorSourcesToReusableList@CHwBitmapCache@@AEBAXAEAPEAVCHwBitmapColorSource@@@Z @ 0x18013B680
 * Callers:
 *     ?ChooseBitmapColorSource@CHwBitmapCache@@AEAAJPEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapColorSource@@AEBUCacheContextParameters@4@AEAPEAV4@3@Z @ 0x180018670 (-ChooseBitmapColorSource@CHwBitmapCache@@AEAAJPEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapCo.c)
 *     ?TryForLastUsedBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorSource@@AEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEAVCMILBrushBitmap@@AEAPEAV3@3@Z @ 0x180018A18 (-TryForLastUsedBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorS.c)
 * Callees:
 *     ?IsValid@CHwBitmapColorSource@@QEBA_NXZ @ 0x18000F0D4 (-IsValid@CHwBitmapColorSource@@QEBA_NXZ.c)
 *     ?AddToReusableRealizationSourceList@CHwBitmapColorSource@@QEAAXAEAPEAV1@@Z @ 0x18013D23C (-AddToReusableRealizationSourceList@CHwBitmapColorSource@@QEAAXAEAPEAV1@@Z.c)
 */

void __fastcall CHwBitmapCache::AddDeviceBitmapColorSourcesToReusableList(
        CHwBitmapCache *this,
        struct CHwBitmapColorSource **a2)
{
  CHwBitmapColorSource *i; // rbx
  CHwBitmapColorSource *v4; // rcx

  for ( i = (CHwBitmapColorSource *)*((_QWORD *)this + 62); i; i = (CHwBitmapColorSource *)*((_QWORD *)i + 42) )
  {
    if ( CHwBitmapColorSource::IsValid(i) )
      CHwBitmapColorSource::AddToReusableRealizationSourceList(v4, a2);
  }
}
