/*
 * XREFs of CmpUnlockHiveList @ 0x1404EA638
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400D2048 (CmpLoadKeyCommon.c)
 *     CmpDeleteHive @ 0x1400D2458 (CmpDeleteHive.c)
 *     CmpGetNextFailedUnloadHive @ 0x1400D26EC (CmpGetNextFailedUnloadHive.c)
 * Callees:
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 */

void __fastcall CmpUnlockHiveList(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rcx
  ULONG_PTR v3; // rtt

  _m_prefetchw(&CmpHiveListHeadLock);
  if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v2 = CmpHiveListHeadLock - 16;
  else
    v2 = 0LL;
  if ( (CmpHiveListHeadLock & 2) != 0
    || (v3 = CmpHiveListHeadLock,
        v3 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpHiveListHeadLock, v2, CmpHiveListHeadLock)) )
  {
    ExfReleasePushLock(&CmpHiveListHeadLock, a2);
  }
  KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
}
