/*
 * XREFs of CmpUnlockHiveList @ 0x14049FFBC
 * Callers:
 *     CmpGetNextFailedUnloadHive @ 0x140083CFC (CmpGetNextFailedUnloadHive.c)
 *     CmpLoadKeyCommon @ 0x140087994 (CmpLoadKeyCommon.c)
 *     CmpDeleteHive @ 0x140088098 (CmpDeleteHive.c)
 *     CmpJoinClassOfTrust @ 0x1401B471C (CmpJoinClassOfTrust.c)
 *     CmpUnJoinClassOfTrust @ 0x1401B47B0 (CmpUnJoinClassOfTrust.c)
 *     CmpInitializeHive @ 0x14047F184 (CmpInitializeHive.c)
 *     CmUnloadKey @ 0x14049F858 (CmUnloadKey.c)
 * Callees:
 *     ExfReleasePushLock @ 0x1400C8620 (ExfReleasePushLock.c)
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
