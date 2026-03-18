/*
 * XREFs of ?HasContributorFromDifferentAdapter@CBitmapOfDeviceBitmaps@@QEAA_NU_LUID@@@Z @ 0x180179988
 * Callers:
 *     ?SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBVCColorKey@@PEBUD2DVector2@@PEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@AEBURealizationParameters@1@PEAV1@@Z @ 0x180082AC0 (-SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV-$CDelayComputedBounds@UR.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180081744 (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?CleanupInvalidSources@CBitmapOfDeviceBitmaps@@AEAAXXZ @ 0x1800940EC (-CleanupInvalidSources@CBitmapOfDeviceBitmaps@@AEAAXXZ.c)
 */

char __fastcall CBitmapOfDeviceBitmaps::HasContributorFromDifferentAdapter(
        CBitmapOfDeviceBitmaps *this,
        struct _LUID a2)
{
  char v3; // bl
  unsigned int v4; // edx
  __int64 v5; // r10
  int v6; // edx
  __int64 v7; // r8
  unsigned int v8; // r9d

  v3 = 0;
  CBitmapOfDeviceBitmaps::CleanupInvalidSources(this);
  v4 = 0;
  if ( *((_DWORD *)this + 80) )
  {
    v5 = *((_QWORD *)this + 37);
    while ( TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty((_DWORD *)(96LL * v4 + v5 + 24))
         || a2 == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + v5 + 16) + 16LL) + 648LL) )
    {
      v4 = v6 + 1;
      if ( v4 >= v8 )
        return v3;
    }
    return 1;
  }
  return v3;
}
