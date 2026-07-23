/*
 * XREFs of CmpLockRegistryFreezeAware @ 0x1403FA714
 * Callers:
 *     CmpTryToRundownHive @ 0x14010B8A0 (CmpTryToRundownHive.c)
 *     CmpLoadKeyCommon @ 0x14010BB8C (CmpLoadKeyCommon.c)
 *     NtUnloadKeyEx @ 0x1403E3100 (NtUnloadKeyEx.c)
 *     CmpFlushHive @ 0x1403F8F8C (CmpFlushHive.c)
 *     CmpDoFlushNextHive @ 0x1403FA454 (CmpDoFlushNextHive.c)
 *     CmLoadAppKey @ 0x1403FAFD0 (CmLoadAppKey.c)
 *     CmpStartRMLogs @ 0x1404BDCF0 (CmpStartRMLogs.c)
 *     ExpWatchProductTypeWork @ 0x1404CA880 (ExpWatchProductTypeWork.c)
 *     NtFlushKey @ 0x1404CAC58 (NtFlushKey.c)
 *     CmpLateUnloadHiveWorker @ 0x140517B00 (CmpLateUnloadHiveWorker.c)
 *     NtUnloadKey2 @ 0x14054A4C4 (NtUnloadKey2.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x14054E3B4 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpResolveHiveLoadConflict @ 0x1405FF1D4 (CmpResolveHiveLoadConflict.c)
 *     CmRestoreKey @ 0x14060C300 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x14060D8C4 (CmpRefreshHive.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     CmpLockRegistryExclusive @ 0x1403FC8A8 (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140403660 (CmpLockRegistry.c)
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
    if ( *(__int64 **)qword_140322A18 != &CmpFreezeThawWaitListHead )
      __fastfail(3u);
    v8[1] = qword_140322A18;
    v8[0] = &CmpFreezeThawWaitListHead;
    *(_QWORD *)qword_140322A18 = v8;
    qword_140322A18 = (__int64)v8;
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
