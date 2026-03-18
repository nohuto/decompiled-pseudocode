/*
 * XREFs of CmpUnlockContextList @ 0x140603DB8
 * Callers:
 *     CmSetCallbackObjectContext @ 0x1405FAFAC (CmSetCallbackObjectContext.c)
 *     CmUnRegisterCallback @ 0x1405FB13C (CmUnRegisterCallback.c)
 *     CmpFreeCallbackObjectContexts @ 0x1405FB518 (CmpFreeCallbackObjectContexts.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1400C8620 (ExfReleasePushLock.c)
 */

__int64 CmpUnlockContextList()
{
  signed __int64 v0; // rcx
  ULONG_PTR v1; // rtt
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

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
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v2, v3, v4);
}
