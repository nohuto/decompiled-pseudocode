/*
 * XREFs of CmpLockRegistryFreezeAware @ 0x14044620C
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400D2048 (CmpLoadKeyCommon.c)
 *     CmpTryToRundownHive @ 0x1400D2794 (CmpTryToRundownHive.c)
 *     CmpDoFlushNextHive @ 0x140445D84 (CmpDoFlushNextHive.c)
 *     CmLoadAppKey @ 0x1404471C4 (CmLoadAppKey.c)
 *     CmpFlushHive @ 0x14044C5C4 (CmpFlushHive.c)
 *     CmLoadKey @ 0x1404EC054 (CmLoadKey.c)
 *     NtUnloadKeyEx @ 0x1404ED38C (NtUnloadKeyEx.c)
 *     CmpLateUnloadHiveWorker @ 0x1404EE17C (CmpLateUnloadHiveWorker.c)
 *     CmpStartRMLogs @ 0x1404F2804 (CmpStartRMLogs.c)
 *     NtFlushKey @ 0x1404F3BA8 (NtFlushKey.c)
 *     sub_1404F4090 @ 0x1404F4090 (sub_1404F4090.c)
 *     NtUnloadKey2 @ 0x140580A7C (NtUnloadKey2.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x140598A84 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmRestoreKey @ 0x140660D14 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x140662520 (CmpRefreshHive.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     CmpLockRegistryExclusive @ 0x140448470 (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404C7410 (CmpLockRegistry.c)
 */

__int64 __fastcall CmpLockRegistryFreezeAware(char a1)
{
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r9
  signed __int8 v7; // cf
  __int64 v8; // rbx
  signed __int64 v9; // rcx
  ULONG_PTR v10; // rtt
  _QWORD v11[2]; // [rsp+30h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF

  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  if ( a1 )
    CmpLockRegistryExclusive();
  else
    CmpLockRegistry();
  while ( CmpFreezeThawState == 1 )
  {
    KeResetEvent(&Event);
    v4 = KeAbPreAcquire((ULONG_PTR)&CmpFreezeListLock, 0LL, 0LL, v3);
    v7 = _interlockedbittestandset64((volatile signed __int32 *)&CmpFreezeListLock, 0LL);
    v8 = v4;
    if ( v7 )
      ExfAcquirePushLockExclusiveEx(&CmpFreezeListLock, v4, (ULONG_PTR)&CmpFreezeListLock, v6);
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    v11[0] = &CmpFreezeThawWaitListHead;
    v11[1] = qword_14034D878;
    if ( *(__int64 **)qword_14034D878 != &CmpFreezeThawWaitListHead )
      __fastfail(3u);
    *(_QWORD *)qword_14034D878 = v11;
    qword_14034D878 = (__int64)v11;
    _m_prefetchw(&CmpFreezeListLock);
    if ( (CmpFreezeListLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v9 = 0LL;
    else
      v9 = CmpFreezeListLock - 16;
    if ( (CmpFreezeListLock & 2) != 0
      || (v10 = CmpFreezeListLock,
          v10 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpFreezeListLock, v9, CmpFreezeListLock)) )
    {
      ExfReleasePushLock(&CmpFreezeListLock, v5);
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
