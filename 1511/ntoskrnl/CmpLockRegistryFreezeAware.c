/*
 * XREFs of CmpLockRegistryFreezeAware @ 0x1403DE460
 * Callers:
 *     CmpLoadKeyCommon @ 0x140002D44 (CmpLoadKeyCommon.c)
 *     CmpTryToRundownHive @ 0x1400D2844 (CmpTryToRundownHive.c)
 *     CmpResolveHiveLoadConflict @ 0x1403B57A8 (CmpResolveHiveLoadConflict.c)
 *     CmLoadAppKey @ 0x1403DC3A0 (CmLoadAppKey.c)
 *     CmpDoFlushNextHive @ 0x1403DE1A0 (CmpDoFlushNextHive.c)
 *     CmpFlushHive @ 0x14044B9C0 (CmpFlushHive.c)
 *     CmpStartRMLogs @ 0x140484E88 (CmpStartRMLogs.c)
 *     sub_140498054 @ 0x140498054 (sub_140498054.c)
 *     NtFlushKey @ 0x140498460 (NtFlushKey.c)
 *     NtUnloadKeyEx @ 0x1404986A4 (NtUnloadKeyEx.c)
 *     CmpLateUnloadHiveWorker @ 0x140498D48 (CmpLateUnloadHiveWorker.c)
 *     NtUnloadKey2 @ 0x14050ABE0 (NtUnloadKey2.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x140521A0C (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmRestoreKey @ 0x1405E95A4 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x1405EAB18 (CmpRefreshHive.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     CmpLockRegistryExclusive @ 0x1403DE874 (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
 */

__int64 __fastcall CmpLockRegistryFreezeAware(char a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v7; // rax
  signed __int8 v8; // cf
  __int64 v9; // rbx
  signed __int64 v10; // rcx
  ULONG_PTR v11; // rtt
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD v16[2]; // [rsp+30h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF

  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  if ( a1 )
    CmpLockRegistryExclusive();
  else
    CmpLockRegistry(v3, v2, v4, v5);
  while ( CmpFreezeThawState == 1 )
  {
    KeResetEvent(&Event);
    v7 = KeAbPreAcquire((ULONG_PTR)&CmpFreezeListLock, 0LL, 0LL);
    v8 = _interlockedbittestandset64((volatile signed __int32 *)&CmpFreezeListLock, 0LL);
    v9 = v7;
    if ( v8 )
      ExfAcquirePushLockExclusiveEx(&CmpFreezeListLock, v7, (ULONG_PTR)&CmpFreezeListLock);
    if ( v9 )
      *(_BYTE *)(v9 + 26) |= 1u;
    v16[0] = &CmpFreezeThawWaitListHead;
    v16[1] = qword_1402FD418;
    if ( *(__int64 **)qword_1402FD418 != &CmpFreezeThawWaitListHead )
      __fastfail(3u);
    *(_QWORD *)qword_1402FD418 = v16;
    qword_1402FD418 = (__int64)v16;
    _m_prefetchw(&CmpFreezeListLock);
    if ( (CmpFreezeListLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v10 = 0LL;
    else
      v10 = CmpFreezeListLock - 16;
    if ( (CmpFreezeListLock & 2) != 0
      || (v11 = CmpFreezeListLock,
          v11 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpFreezeListLock, v10, CmpFreezeListLock)) )
    {
      ExfReleasePushLock(&CmpFreezeListLock);
    }
    KeAbPostRelease((ULONG_PTR)&CmpFreezeListLock);
    CmpUnlockRegistry();
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    if ( a1 )
      CmpLockRegistryExclusive();
    else
      CmpLockRegistry(v13, v12, v14, v15);
  }
  return 0LL;
}
