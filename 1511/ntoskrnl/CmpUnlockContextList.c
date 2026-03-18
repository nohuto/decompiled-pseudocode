/*
 * XREFs of CmpUnlockContextList @ 0x1405E6674
 * Callers:
 *     CmSetCallbackObjectContext @ 0x1405DD130 (CmSetCallbackObjectContext.c)
 *     CmUnRegisterCallback @ 0x1405DD2C0 (CmUnRegisterCallback.c)
 *     CmpFreeCallbackObjectContexts @ 0x1405DD69C (CmpFreeCallbackObjectContexts.c)
 * Callees:
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 */

__int64 CmpUnlockContextList()
{
  signed __int64 v0; // rcx
  ULONG_PTR v1; // rtt

  _m_prefetchw(&CmpContextListLock);
  if ( (CmpContextListLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v0 = 0LL;
  else
    v0 = CmpContextListLock - 16;
  if ( (CmpContextListLock & 2) != 0
    || (v1 = CmpContextListLock,
        v1 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, v0, CmpContextListLock)) )
  {
    ExfReleasePushLock(&CmpContextListLock);
  }
  KeAbPostRelease((ULONG_PTR)&CmpContextListLock);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
