/*
 * XREFs of ?IsHardwareProtected@CD2DBitmap@@UEBA_NXZ @ 0x18001B870
 * Callers:
 *     ?GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVID2DBitmap@@@Z @ 0x18001B640 (-GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@PEBV-$TMilRect@IUMilRectU@@UNo.c)
 *     ?IsHardwareProtected@CD2DBitmap@@W7EBA_NXZ @ 0x18009B550 (-IsHardwareProtected@CD2DBitmap@@W7EBA_NXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CD2DBitmap::IsHardwareProtected(CD2DBitmap *this)
{
  return (*((_DWORD *)this + 26) & 0x80000) != 0;
}
