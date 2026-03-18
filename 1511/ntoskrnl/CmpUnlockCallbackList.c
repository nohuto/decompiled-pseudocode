/*
 * XREFs of CmpUnlockCallbackList @ 0x1404C4FA0
 * Callers:
 *     CmpEnumerateCallback @ 0x1404C4F20 (CmpEnumerateCallback.c)
 *     CmpInsertCallbackInListByAltitude @ 0x140548B04 (CmpInsertCallbackInListByAltitude.c)
 *     CmSetCallbackObjectContext @ 0x1405DD130 (CmSetCallbackObjectContext.c)
 *     CmUnRegisterCallback @ 0x1405DD2C0 (CmUnRegisterCallback.c)
 * Callees:
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 */

__int64 CmpUnlockCallbackList()
{
  signed __int64 v0; // rcx
  ULONG_PTR v1; // rtt

  _m_prefetchw(&CmpCallbackListLock);
  if ( (CmpCallbackListLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v0 = CmpCallbackListLock - 16;
  else
    v0 = 0LL;
  if ( (CmpCallbackListLock & 2) != 0
    || (v1 = CmpCallbackListLock,
        v1 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpCallbackListLock, v0, CmpCallbackListLock)) )
  {
    ExfReleasePushLock(&CmpCallbackListLock);
  }
  KeAbPostRelease((ULONG_PTR)&CmpCallbackListLock);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
