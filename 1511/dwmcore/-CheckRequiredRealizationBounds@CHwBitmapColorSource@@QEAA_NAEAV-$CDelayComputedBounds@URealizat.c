/*
 * XREFs of ?CheckRequiredRealizationBounds@CHwBitmapColorSource@@QEAA_NAEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@W4Enum@MilBitmapInterpolationMode@@W43MilBitmapWrapMode@@W43RequiredBoundsCheck@1@@Z @ 0x1800324C8
 * Callers:
 *     ?DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@AEBVCHwBrushContext@@PEAPEAVCHwTexturedColorSource@@@Z @ 0x180089D00 (-DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@A.c)
 *     ?TryForLastUsedBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorSource@@AEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEAVCMILBrushBitmap@@AEAPEAV3@3@Z @ 0x18008B728 (-TryForLastUsedBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorS.c)
 * Callees:
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18002D3B8 (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?ComputeMinimumRealizationBounds@CHwBitmapColorSource@@CA_NAEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@AEBUInternalRealizationParameters@1@PEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180077160 (-ComputeMinimumRealizationBounds@CHwBitmapColorSource@@CA_NAEBV-$CDelayComputedBounds@URealizati.c)
 */

char __fastcall CHwBitmapColorSource::CheckRequiredRealizationBounds(_DWORD *a1, __int64 a2, int a3, int a4, int a5)
{
  char v5; // di
  int v8; // eax
  __int64 v9; // rcx
  __int128 v10; // [rsp+20h] [rbp-30h] BYREF
  _DWORD v11[8]; // [rsp+30h] [rbp-20h] BYREF

  v5 = 0;
  if ( !a5 && a1[36] == a1[49] - a1[47] && a1[37] == a1[50] - a1[48] )
    return 1;
  *((_QWORD *)&v10 + 1) = *((_QWORD *)a1 + 18);
  v11[1] = a1[34];
  v8 = a1[35];
  v11[0] = a3;
  *(_QWORD *)&v10 = 0LL;
  v11[2] = v8;
  v11[3] = a4;
  if ( (unsigned __int8)CHwBitmapColorSource::ComputeMinimumRealizationBounds(a2, v11, &v10) )
  {
    if ( a5 )
    {
      v9 = (__int64)(a1 + 43);
      if ( a5 != 1 )
        v9 = (__int64)(a1 + 30);
    }
    else
    {
      v9 = (__int64)(a1 + 47);
    }
    if ( TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain(v9, (__int64)&v10) )
    {
      v5 = 1;
      if ( a5 == 2 )
        *(_OWORD *)(a1 + 47) = v10;
    }
  }
  return v5;
}
