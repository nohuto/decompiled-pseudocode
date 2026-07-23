/*
 * XREFs of CmpUnlockCallbackList @ 0x14054D408
 * Callers:
 *     CmpEnumerateCallback @ 0x14054C9A8 (CmpEnumerateCallback.c)
 *     CmpInsertCallbackInListByAltitude @ 0x14055171C (CmpInsertCallbackInListByAltitude.c)
 *     CmSetCallbackObjectContext @ 0x1405FB060 (CmSetCallbackObjectContext.c)
 *     CmUnRegisterCallback @ 0x1405FB1F0 (CmUnRegisterCallback.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 */

__int64 CmpUnlockCallbackList()
{
  signed __int64 v0; // rcx
  ULONG_PTR v1; // rtt
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

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
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v2, v3, v4);
}
