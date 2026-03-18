/*
 * XREFs of WheaRegisterInUsePageOfflineNotification @ 0x140677EA4
 * Callers:
 *     HvlRegisterWheaErrorNotification @ 0x1405F67E0 (HvlRegisterWheaErrorNotification.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall WheaRegisterInUsePageOfflineNotification(PFN_IN_USE_PAGE_OFFLINE_NOTIFY Callback, PVOID Context)
{
  __int64 *PoolWithTag; // rax
  __int64 *v6; // rbx
  __int64 v7; // rax
  signed __int8 v8; // cf
  __int64 v9; // rdi
  __int64 **v10; // rax

  if ( !WheapInUsePageOfflineNotifyInit )
    return -1073741823;
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x61656857u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741801;
  PoolWithTag[2] = (__int64)Callback;
  PoolWithTag[3] = (__int64)Context;
  v7 = KeAbPreAcquire((ULONG_PTR)&WheapInUsePageOfflineNotifyLock, 0LL, 0LL);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&WheapInUsePageOfflineNotifyLock, 0LL);
  v9 = v7;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(&WheapInUsePageOfflineNotifyLock, v7, (ULONG_PTR)&WheapInUsePageOfflineNotifyLock);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  v10 = (__int64 **)qword_14031C5B8;
  *v6 = (__int64)&WheapInUsePageOfflineNotifyList;
  v6[1] = (__int64)v10;
  if ( *v10 != &WheapInUsePageOfflineNotifyList )
    __fastfail(3u);
  *v10 = v6;
  qword_14031C5B8 = (__int64)v6;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock);
  KeAbPostRelease((ULONG_PTR)&WheapInUsePageOfflineNotifyLock);
  return 0;
}
