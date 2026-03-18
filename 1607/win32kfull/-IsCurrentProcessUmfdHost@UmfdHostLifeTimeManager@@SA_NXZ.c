/*
 * XREFs of ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C02BC0CC
 * Callers:
 *     NtGdiExtEscape @ 0x1C02A7520 (NtGdiExtEscape.c)
 * Callees:
 *     ?IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C010E2F4 (-IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ??0UmfdHostSharedReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x1C015740C (--0UmfdHostSharedReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 */

bool UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost(void)
{
  __int64 v0; // rcx
  bool IsCurrentProcessUmfdHostNoLock; // bl
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  UmfdHostLifeTimeManager::UmfdHostSharedReadyLock::UmfdHostSharedReadyLock((UmfdHostLifeTimeManager::UmfdHostSharedReadyLock *)&v3);
  IsCurrentProcessUmfdHostNoLock = UmfdHostLifeTimeManager::IsCurrentProcessUmfdHostNoLock(v0);
  if ( v3 )
  {
    GreReleasePushLockShared(v3);
    KeLeaveCriticalRegion();
  }
  return IsCurrentProcessUmfdHostNoLock;
}
