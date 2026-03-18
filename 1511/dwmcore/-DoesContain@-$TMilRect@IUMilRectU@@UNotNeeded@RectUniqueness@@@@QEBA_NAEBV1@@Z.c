/*
 * XREFs of ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18002D3B8
 * Callers:
 *     ?LockForRead@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x18000D6F0 (-LockForRead@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBi.c)
 *     ?CopyPixels@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x18000D8C0 (-CopyPixels@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z.c)
 *     ?RectInBounds@CSecondaryBitmap@@IEBA_NUMilRectU@@@Z @ 0x180018FF0 (-RectInBounds@CSecondaryBitmap@@IEBA_NUMilRectU@@@Z.c)
 *     ?Realize@CHwBitmapColorSource@@UEAAJXZ @ 0x180030FA0 (-Realize@CHwBitmapColorSource@@UEAAJXZ.c)
 *     ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x18003166C (-FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z.c)
 *     ?CheckRequiredRealizationBounds@CHwBitmapColorSource@@QEAA_NAEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@W4Enum@MilBitmapInterpolationMode@@W43MilBitmapWrapMode@@W43RequiredBoundsCheck@1@@Z @ 0x1800324C8 (-CheckRequiredRealizationBounds@CHwBitmapColorSource@@QEAA_NAEAV-$CDelayComputedBounds@URealizat.c)
 *     ?AddValidRect@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@AEAPEAUHRGN__@@AEA_N@Z @ 0x180088340 (-AddValidRect@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeede.c)
 *     ?CheckSizeLayoutMatch@CacheEntryList@CHwBitmapCache@@CA?AW4Enum@SizeLayoutMatch@12@AEBUCacheSizeLayoutParameters@CHwBitmapColorSource@@0@Z @ 0x18008BE74 (-CheckSizeLayoutMatch@CacheEntryList@CHwBitmapCache@@CA-AW4Enum@SizeLayoutMatch@12@AEBUCacheSize.c)
 *     ?IsRealizationValid@CHwBitmapColorSource@@AEBA_NXZ @ 0x1800FA7AC (-IsRealizationValid@CHwBitmapColorSource@@AEBA_NXZ.c)
 *     ?EnsureUpdatedSysMemBuffer@CBitmapOfDeviceBitmaps@@AEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180148B58 (-EnsureUpdatedSysMemBuffer@CBitmapOfDeviceBitmaps@@AEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@Re.c)
 *     ?GetExistingSharedColorSourceHandle@CHwBitmapCache@@QEBAPEAXIVDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAW4DXGI_FORMAT@@@Z @ 0x18014B99C (-GetExistingSharedColorSourceHandle@CHwBitmapCache@@QEBAPEAXIVDisplayId@@_NPEBV-$TMilRect@IUMilR.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18002D40C (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

bool __fastcall TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain(__int64 a1, __int64 a2)
{
  char IsEmpty; // al
  _DWORD *v3; // rdx
  _DWORD *v4; // r9
  char v5; // r8

  IsEmpty = TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(a2);
  v5 = 0;
  if ( IsEmpty )
    return 1;
  if ( *v3 >= *v4 && v3[1] >= v4[1] && v3[2] <= v4[2] )
    return v3[3] <= v4[3];
  return v5;
}
