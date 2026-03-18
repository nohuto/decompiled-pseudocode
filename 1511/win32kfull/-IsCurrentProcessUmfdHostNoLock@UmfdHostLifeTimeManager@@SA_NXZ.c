/*
 * XREFs of ?IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00EFEB4
 * Callers:
 *     UmfdIsCurrentProcessUmfdHostNoLock @ 0x1C00EFEA0 (UmfdIsCurrentProcessUmfdHostNoLock.c)
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C014D6C8 (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C02B8DAC (-TerminateUmfdHost@UmfdHostLifeTimeManager@@SAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall UmfdHostLifeTimeManager::IsCurrentProcessUmfdHostNoLock(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return UmfdHostLifeTimeManager::s_UmfdHostProcess == (PVOID)PsGetCurrentProcess(a1, a2, a3, a4);
}
