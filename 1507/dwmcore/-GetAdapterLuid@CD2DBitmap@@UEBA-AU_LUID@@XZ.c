/*
 * XREFs of ?GetAdapterLuid@CD2DBitmap@@UEBA?AU_LUID@@XZ @ 0x18001BAA0
 * Callers:
 *     ?GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVID2DBitmap@@@Z @ 0x18001B640 (-GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@PEBV-$TMilRect@IUMilRectU@@UNo.c)
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CD2DBitmap::GetAdapterLuid(CD2DBitmap *this, _QWORD *a2)
{
  *a2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this - 10) + 16LL) + 576LL);
  return (struct _LUID)a2;
}
