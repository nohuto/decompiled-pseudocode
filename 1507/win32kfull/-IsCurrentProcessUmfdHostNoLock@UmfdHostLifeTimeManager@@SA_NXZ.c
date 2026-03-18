/*
 * XREFs of ?IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00EA834
 * Callers:
 *     UmfdIsCurrentProcessUmfdHostNoLock @ 0x1C00EA820 (UmfdIsCurrentProcessUmfdHostNoLock.c)
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C0127510 (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C02B99D0 (-TerminateUmfdHost@UmfdHostLifeTimeManager@@SAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall UmfdHostLifeTimeManager::IsCurrentProcessUmfdHostNoLock(__int64 a1, __int64 a2)
{
  return UmfdHostLifeTimeManager::s_UmfdHostProcess == (PVOID)PsGetCurrentProcess(a1, a2);
}
