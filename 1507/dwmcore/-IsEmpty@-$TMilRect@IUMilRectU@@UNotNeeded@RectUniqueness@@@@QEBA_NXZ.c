/*
 * XREFs of ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180019BBC
 * Callers:
 *     ?GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVID2DBitmap@@@Z @ 0x18001B640 (-GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@PEBV-$TMilRect@IUMilRectU@@UNo.c)
 *     ?AddValidRect@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@AEAPEAUHRGN__@@AEA_N@Z @ 0x18007FC10 (-AddValidRect@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeede.c)
 *     ?AddDirtyRect@CBitmap@@UEAAJPEBUtagRECT@@@Z @ 0x180080990 (-AddDirtyRect@CBitmap@@UEAAJPEBUtagRECT@@@Z.c)
 *     ?GetValidContentStateForTargetedDisplay@CBitmapOfDeviceBitmaps@@QEAA?AW4Enum@ValidContentState@1@VDisplayId@@@Z @ 0x180137F20 (-GetValidContentStateForTargetedDisplay@CBitmapOfDeviceBitmaps@@QEAA-AW4Enum@ValidContentState@1.c)
 *     ?HasContributorFromDifferentAdapter@CBitmapOfDeviceBitmaps@@QEAA_NU_LUID@@@Z @ 0x180137FB8 (-HasContributorFromDifferentAdapter@CBitmapOfDeviceBitmaps@@QEAA_NU_LUID@@@Z.c)
 *     ?PrepareSysMemBufferAsSourcePixels@CBitmapOfDeviceBitmaps@@AEAAJXZ @ 0x1801383B0 (-PrepareSysMemBufferAsSourcePixels@CBitmapOfDeviceBitmaps@@AEAAJXZ.c)
 *     ?CopyPixels@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x18013DEC0 (-CopyPixels@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z.c)
 *     ?LockForRead@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x18013E380 (-LockForRead@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBi.c)
 *     ?Update@CSecondaryD2DBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x180151730 (-Update@CSecondaryD2DBitmap@@UEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID.c)
 *     ?CopyPixels@CSecondarySysmemBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x180152BC0 (-CopyPixels@CSecondarySysmemBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@.c)
 *     ?LockForRead@CSecondarySysmemBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180153050 (-LockForRead@CSecondarySysmemBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@.c)
 *     ?Update@CSecondarySysmemBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x180153250 (-Update@CSecondarySysmemBitmap@@UEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEA.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(_DWORD *a1)
{
  return a1[2] <= *a1 || a1[3] <= a1[1];
}
