/*
 * XREFs of CmpGetNextActiveHive @ 0x1403FB6D0
 * Callers:
 *     CmpDoFlushAll @ 0x140125F38 (CmpDoFlushAll.c)
 *     CmpBlockTwoHiveWrites @ 0x1403E16A4 (CmpBlockTwoHiveWrites.c)
 *     CmpDoFlushNextHive @ 0x1403FB594 (CmpDoFlushNextHive.c)
 *     CmpDoReconcileNextHive @ 0x1404806D8 (CmpDoReconcileNextHive.c)
 *     CmpTransMgrPrepare @ 0x1404DA8E8 (CmpTransMgrPrepare.c)
 *     CmpUpdatePhaseAccessBit @ 0x14057C880 (CmpUpdatePhaseAccessBit.c)
 *     CmEtwRunDown @ 0x1405FB640 (CmEtwRunDown.c)
 *     CmShutdownSystem @ 0x1405FC64C (CmShutdownSystem.c)
 *     CmpFreeAllMemory @ 0x1405FCA7C (CmpFreeAllMemory.c)
 *     CmpIsHiveAlreadyLoaded @ 0x1405FEFD8 (CmpIsHiveAlreadyLoaded.c)
 *     CmFreezeRegistry @ 0x140602BC0 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x140602DE0 (CmThawRegistry.c)
 *     CmInitSystem1 @ 0x1407ADA6C (CmInitSystem1.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C8280 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400C8620 (ExfReleasePushLock.c)
 *     ExAcquireRundownProtection @ 0x1400D3ED0 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D3F00 (ExReleaseRundownProtection.c)
 */

__int64 *__fastcall CmpGetNextActiveHive(struct _EX_RUNDOWN_REF *a1)
{
  __int64 *v1; // rsi
  __int64 **v3; // r14
  __int64 v4; // rbx
  __int64 *v5; // rbx
  signed __int64 v6; // rcx
  ULONG_PTR v7; // rtt

  v1 = 0LL;
  v3 = (__int64 **)&CmpHiveListHead;
  if ( a1 )
    v3 = (__int64 **)&a1[341];
  v4 = KeAbPreAcquire((ULONG_PTR)&CmpHiveListHeadLock, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpHiveListHeadLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&CmpHiveListHeadLock, v4, (ULONG_PTR)&CmpHiveListHeadLock);
  if ( v4 )
    *(_BYTE *)(v4 + 26) |= 1u;
  v5 = *v3;
  while ( v5 != &CmpHiveListHead )
  {
    v1 = v5 - 341;
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)v5 + 6) )
      break;
    v5 = (__int64 *)*v5;
    v1 = 0LL;
  }
  _m_prefetchw(&CmpHiveListHeadLock);
  if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v6 = CmpHiveListHeadLock - 16;
  else
    v6 = 0LL;
  if ( (CmpHiveListHeadLock & 2) != 0
    || (v7 = CmpHiveListHeadLock,
        v7 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpHiveListHeadLock, v6, CmpHiveListHeadLock)) )
  {
    ExfReleasePushLock(&CmpHiveListHeadLock);
  }
  KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
  if ( a1 )
    ExReleaseRundownProtection(a1 + 347);
  return v1;
}
