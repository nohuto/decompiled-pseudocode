/*
 * XREFs of ?IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C010E2F4
 * Callers:
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C010E200 (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 *     UmfdIsCurrentProcessUmfdHostNoLock @ 0x1C010E2E0 (UmfdIsCurrentProcessUmfdHostNoLock.c)
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C02BC0CC (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C02BC260 (-TerminateUmfdHost@UmfdHostLifeTimeManager@@SAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall UmfdHostLifeTimeManager::IsCurrentProcessUmfdHostNoLock(__int64 a1)
{
  return UmfdHostLifeTimeManager::s_UmfdHostProcess == (PVOID)PsGetCurrentProcess(a1);
}
