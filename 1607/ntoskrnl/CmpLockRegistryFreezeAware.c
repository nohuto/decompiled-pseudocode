/*
 * XREFs of CmpLockRegistryFreezeAware @ 0x1403FB854
 * Callers:
 *     CmpTryToRundownHive @ 0x1400876A8 (CmpTryToRundownHive.c)
 *     CmpLoadKeyCommon @ 0x140087994 (CmpLoadKeyCommon.c)
 *     CmpFlushHive @ 0x1403FA0CC (CmpFlushHive.c)
 *     CmpDoFlushNextHive @ 0x1403FB594 (CmpDoFlushNextHive.c)
 *     CmLoadAppKey @ 0x1403FC110 (CmLoadAppKey.c)
 *     NtUnloadKeyEx @ 0x14049A1D4 (NtUnloadKeyEx.c)
 *     CmpLateUnloadHiveWorker @ 0x14049F6F4 (CmpLateUnloadHiveWorker.c)
 *     CmpStartRMLogs @ 0x1404DA6EC (CmpStartRMLogs.c)
 *     ExpWatchProductTypeWork @ 0x1404E84F4 (ExpWatchProductTypeWork.c)
 *     NtFlushKey @ 0x1404E88CC (NtFlushKey.c)
 *     NtUnloadKey2 @ 0x140549F84 (NtUnloadKey2.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x14054E014 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpResolveHiveLoadConflict @ 0x1405FF120 (CmpResolveHiveLoadConflict.c)
 *     CmRestoreKey @ 0x14060C24C (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x14060D810 (CmpRefreshHive.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeInitializeEvent @ 0x14002DEA0 (KeInitializeEvent.c)
 *     KeResetEvent @ 0x14002E630 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C8620 (ExfReleasePushLock.c)
 *     CmpLockRegistryExclusive @ 0x1403FD9E8 (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x14040476C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404047A0 (CmpLockRegistry.c)
 */

__int64 __fastcall CmpLockRegistryFreezeAware(char a1)
{
  _BYTE *v3; // rax
  signed __int8 v4; // cf
  _BYTE *v5; // rbx
  signed __int64 v6; // rcx
  ULONG_PTR v7; // rtt
  _QWORD v8[2]; // [rsp+30h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF

  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  if ( a1 )
    CmpLockRegistryExclusive();
  else
    CmpLockRegistry();
  while ( CmpFreezeThawState == 1 )
  {
    KeResetEvent(&Event);
    v3 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&CmpFreezeListLock, 0LL, 0);
    v4 = _interlockedbittestandset64((volatile signed __int32 *)&CmpFreezeListLock, 0LL);
    v5 = v3;
    if ( v4 )
      ExfAcquirePushLockExclusiveEx(&CmpFreezeListLock, v3, (ULONG_PTR)&CmpFreezeListLock);
    if ( v5 )
      v5[26] |= 1u;
    if ( *(__int64 **)qword_1403229F8 != &CmpFreezeThawWaitListHead )
      __fastfail(3u);
    v8[1] = qword_1403229F8;
    v8[0] = &CmpFreezeThawWaitListHead;
    *(_QWORD *)qword_1403229F8 = v8;
    qword_1403229F8 = (__int64)v8;
    _m_prefetchw(&CmpFreezeListLock);
    if ( (CmpFreezeListLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v6 = 0LL;
    else
      v6 = CmpFreezeListLock - 16;
    if ( (CmpFreezeListLock & 2) != 0
      || (v7 = CmpFreezeListLock,
          v7 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpFreezeListLock, v6, CmpFreezeListLock)) )
    {
      ExfReleasePushLock(&CmpFreezeListLock);
    }
    KeAbPostRelease((ULONG_PTR)&CmpFreezeListLock);
    CmpUnlockRegistry();
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    if ( a1 )
      CmpLockRegistryExclusive();
    else
      CmpLockRegistry();
  }
  return 0LL;
}
