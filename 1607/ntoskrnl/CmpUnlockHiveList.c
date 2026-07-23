/*
 * XREFs of CmpUnlockHiveList @ 0x1405183C8
 * Callers:
 *     CmpGetNextFailedUnloadHive @ 0x140081E5C (CmpGetNextFailedUnloadHive.c)
 *     CmpLoadKeyCommon @ 0x14010BB8C (CmpLoadKeyCommon.c)
 *     CmpDeleteHive @ 0x14010C288 (CmpDeleteHive.c)
 *     CmpJoinClassOfTrust @ 0x1401B4600 (CmpJoinClassOfTrust.c)
 *     CmpUnJoinClassOfTrust @ 0x1401B4694 (CmpUnJoinClassOfTrust.c)
 *     CmpInitializeHive @ 0x14047DED8 (CmpInitializeHive.c)
 *     CmUnloadKey @ 0x140517C64 (CmUnloadKey.c)
 * Callees:
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 */

unsigned __int64 CmpUnlockHiveList()
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
  return KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
}
