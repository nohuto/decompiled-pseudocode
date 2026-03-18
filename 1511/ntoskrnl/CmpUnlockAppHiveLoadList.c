/*
 * XREFs of CmpUnlockAppHiveLoadList @ 0x1403DCAD8
 * Callers:
 *     CmLoadAppKey @ 0x1403DC3A0 (CmLoadAppKey.c)
 * Callees:
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 */

__int64 CmpUnlockAppHiveLoadList()
{
  signed __int64 v0; // rcx
  ULONG_PTR v1; // rtt

  _m_prefetchw(&CmpAppHiveLoadListLock);
  if ( (CmpAppHiveLoadListLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v0 = CmpAppHiveLoadListLock - 16;
  else
    v0 = 0LL;
  if ( (CmpAppHiveLoadListLock & 2) != 0
    || (v1 = CmpAppHiveLoadListLock,
        v1 != _InterlockedCompareExchange64(
                (volatile signed __int64 *)&CmpAppHiveLoadListLock,
                v0,
                CmpAppHiveLoadListLock)) )
  {
    ExfReleasePushLock(&CmpAppHiveLoadListLock);
  }
  KeAbPostRelease((ULONG_PTR)&CmpAppHiveLoadListLock);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
