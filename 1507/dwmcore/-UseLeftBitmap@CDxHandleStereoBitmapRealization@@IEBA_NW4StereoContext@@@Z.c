/*
 * XREFs of ?UseLeftBitmap@CDxHandleStereoBitmapRealization@@IEBA_NW4StereoContext@@@Z @ 0x18014E6FC
 * Callers:
 *     ?GetD2DBitmap@CDxHandleStereoBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N4PEAPEAUID2D1Bitmap1@@@Z @ 0x18014E2A0 (-GetD2DBitmap@CDxHandleStereoBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV-$.c)
 *     ?GetDXGIResource@CDxHandleStereoBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z @ 0x18014E3C0 (-GetDXGIResource@CDxHandleStereoBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@.c)
 *     ?GetLegacyBitmapSource@CDxHandleStereoBitmapRealization@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x18014E460 (-GetLegacyBitmapSource@CDxHandleStereoBitmapRealization@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSo.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleStereoBitmapRealization::UseLeftBitmap(__int64 a1, int a2)
{
  bool result; // al

  result = 1;
  if ( *(_DWORD *)(a1 + 176) )
    a2 = 0;
  if ( !a2 )
    return *(_DWORD *)(a1 + 172) == 0;
  if ( a2 == 2 )
    return 0;
  return result;
}
