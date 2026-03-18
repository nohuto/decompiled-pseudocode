/*
 * XREFs of UmfdIsCurrentProcessUmfdHostNoLock @ 0x1C00EA820
 * Callers:
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C025D1CC (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 * Callees:
 *     ?IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00EA834 (-IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ.c)
 */

_BOOL8 UmfdIsCurrentProcessUmfdHostNoLock()
{
  return UmfdHostLifeTimeManager::IsCurrentProcessUmfdHostNoLock();
}
