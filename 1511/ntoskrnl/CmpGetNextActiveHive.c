/*
 * XREFs of CmpGetNextActiveHive @ 0x1403DE2DC
 * Callers:
 *     CmpDoFlushAll @ 0x1401170FC (CmpDoFlushAll.c)
 *     CmpDoReconcileNextHive @ 0x1403D3EDC (CmpDoReconcileNextHive.c)
 *     CmpTransMgrCommit @ 0x1403D6AEC (CmpTransMgrCommit.c)
 *     CmpTransMgrPrepare @ 0x1403D6C54 (CmpTransMgrPrepare.c)
 *     CmpBlockTwoHiveWrites @ 0x1403DE0D8 (CmpBlockTwoHiveWrites.c)
 *     CmpDoFlushNextHive @ 0x1403DE1A0 (CmpDoFlushNextHive.c)
 *     CmFreezeRegistry @ 0x1405188CC (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x140519210 (CmThawRegistry.c)
 *     CmpUpdatePhaseAccessBit @ 0x1405480E8 (CmpUpdatePhaseAccessBit.c)
 *     CmEtwRunDown @ 0x1405DD7C4 (CmEtwRunDown.c)
 *     CmShutdownSystem @ 0x1405DE7A4 (CmShutdownSystem.c)
 *     CmpFreeAllMemory @ 0x1405DEC98 (CmpFreeAllMemory.c)
 *     CmpIsHiveAlreadyLoaded @ 0x1405E0BE0 (CmpIsHiveAlreadyLoaded.c)
 *     CmInitSystem1 @ 0x1407450EC (CmInitSystem1.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
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
  v4 = KeAbPreAcquire((ULONG_PTR)&CmpHiveListHeadLock, 0LL, 0LL);
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
    ExReleaseRundownProtection_0(a1 + 347);
  return v1;
}
