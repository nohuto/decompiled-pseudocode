/*
 * XREFs of ?GetAdapterLuid@CD2DBitmap@@UEBA?AU_LUID@@XZ @ 0x180030B80
 * Callers:
 *     ?GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVID2DBitmap@@@Z @ 0x18003032C (-GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@PEBV-$TMilRect@IUMilRectU@@UNo.c)
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CD2DBitmap::GetAdapterLuid(CD2DBitmap *this, _QWORD *a2)
{
  *a2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this - 10) + 16LL) + 584LL);
  return (struct _LUID)a2;
}
