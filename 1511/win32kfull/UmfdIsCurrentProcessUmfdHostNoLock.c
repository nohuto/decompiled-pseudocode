/*
 * XREFs of UmfdIsCurrentProcessUmfdHostNoLock @ 0x1C00EFEA0
 * Callers:
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C025CEA8 (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 * Callees:
 *     ?IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00EFEB4 (-IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ.c)
 */

_BOOL8 UmfdIsCurrentProcessUmfdHostNoLock()
{
  return UmfdHostLifeTimeManager::IsCurrentProcessUmfdHostNoLock();
}
