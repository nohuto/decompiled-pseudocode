/*
 * XREFs of CmpUnlockHiveList @ 0x1403BAB54
 * Callers:
 *     CmpDeleteHive @ 0x140002C90 (CmpDeleteHive.c)
 *     CmpLoadKeyCommon @ 0x140002D44 (CmpLoadKeyCommon.c)
 *     CmpGetNextFailedUnloadHive @ 0x1400F24E8 (CmpGetNextFailedUnloadHive.c)
 * Callees:
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 */

void CmpUnlockHiveList()
{
  signed __int64 v0; // rcx
  ULONG_PTR v1; // rtt

  _m_prefetchw(&CmpHiveListHeadLock);
  if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v0 = CmpHiveListHeadLock - 16;
  else
    v0 = 0LL;
  if ( (CmpHiveListHeadLock & 2) != 0
    || (v1 = CmpHiveListHeadLock,
        v1 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpHiveListHeadLock, v0, CmpHiveListHeadLock)) )
  {
    ExfReleasePushLock(&CmpHiveListHeadLock);
  }
  KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
}
