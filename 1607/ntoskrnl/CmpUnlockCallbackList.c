/*
 * XREFs of CmpUnlockCallbackList @ 0x14054CEC8
 * Callers:
 *     CmpEnumerateCallback @ 0x14054C468 (CmpEnumerateCallback.c)
 *     CmpInsertCallbackInListByAltitude @ 0x1405511DC (CmpInsertCallbackInListByAltitude.c)
 *     CmSetCallbackObjectContext @ 0x1405FAFAC (CmSetCallbackObjectContext.c)
 *     CmUnRegisterCallback @ 0x1405FB13C (CmUnRegisterCallback.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1400C8620 (ExfReleasePushLock.c)
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
