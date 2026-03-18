/*
 * XREFs of CmpGetNextActiveHive @ 0x140445EE8
 * Callers:
 *     CmpDoFlushAll @ 0x14014C088 (CmpDoFlushAll.c)
 *     CmpBlockTwoHiveWrites @ 0x140407890 (CmpBlockTwoHiveWrites.c)
 *     CmpDoFlushNextHive @ 0x140445D84 (CmpDoFlushNextHive.c)
 *     CmpDoReconcileNextHive @ 0x1404EB558 (CmpDoReconcileNextHive.c)
 *     CmpTransMgrCommit @ 0x1404F0B68 (CmpTransMgrCommit.c)
 *     CmpTransMgrPrepare @ 0x1404F0D4C (CmpTransMgrPrepare.c)
 *     CmpUpdatePhaseAccessBit @ 0x1405BF940 (CmpUpdatePhaseAccessBit.c)
 *     CmEtwRunDown @ 0x140652CF0 (CmEtwRunDown.c)
 *     CmShutdownSystem @ 0x140653CD0 (CmShutdownSystem.c)
 *     CmpFreeAllMemory @ 0x1406541E4 (CmpFreeAllMemory.c)
 *     CmpIsHiveAlreadyLoaded @ 0x140656890 (CmpIsHiveAlreadyLoaded.c)
 *     CmFreezeRegistry @ 0x140659CF0 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x14065A074 (CmThawRegistry.c)
 *     CmInitSystem1 @ 0x1407D6D64 (CmInitSystem1.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 */

__int64 *__fastcall CmpGetNextActiveHive(struct _EX_RUNDOWN_REF *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rsi
  __int64 **v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // r9
  __int64 *v10; // rbx
  struct _EX_RUNDOWN_REF *v11; // rcx
  unsigned __int64 v12; // rax
  signed __int64 v13; // rcx
  ULONG_PTR v14; // rtt
  unsigned __int64 v15; // rtt

  v4 = 0LL;
  v6 = (__int64 **)&CmpHiveListHead;
  if ( a1 )
    v6 = (__int64 **)&a1[341];
  v8 = KeAbPreAcquire((ULONG_PTR)&CmpHiveListHeadLock, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpHiveListHeadLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&CmpHiveListHeadLock, v8, (ULONG_PTR)&CmpHiveListHeadLock, v9);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v10 = *v6;
  while ( v10 != &CmpHiveListHead )
  {
    v4 = v10 - 341;
    v11 = (struct _EX_RUNDOWN_REF *)(v10 + 6);
    _m_prefetchw(v11);
    v12 = v11->Count & 0xFFFFFFFFFFFFFFFEuLL;
    v7 = v12 + 2;
    if ( v12 == _InterlockedCompareExchange64((volatile signed __int64 *)v11, v12 + 2, v12)
      || ExfAcquireRundownProtection(v11) )
    {
      break;
    }
    v10 = (__int64 *)*v10;
    v4 = 0LL;
  }
  _m_prefetchw(&CmpHiveListHeadLock);
  if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v13 = CmpHiveListHeadLock - 16;
  else
    v13 = 0LL;
  if ( (CmpHiveListHeadLock & 2) != 0
    || (v14 = CmpHiveListHeadLock,
        v14 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpHiveListHeadLock, v13, CmpHiveListHeadLock)) )
  {
    ExfReleasePushLock(&CmpHiveListHeadLock, v7);
  }
  KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
  if ( a1 )
  {
    _m_prefetchw(&a1[347]);
    v15 = a1[347].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v15 != _InterlockedCompareExchange64((volatile signed __int64 *)&a1[347], v15 - 2, v15) )
      ExfReleaseRundownProtection(a1 + 347);
  }
  return v4;
}
