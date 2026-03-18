/*
 * XREFs of WheaRegisterInUsePageOfflineNotification @ 0x1406FC6C0
 * Callers:
 *     HvlRegisterWheaErrorNotification @ 0x1406705A4 (HvlRegisterWheaErrorNotification.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall WheaRegisterInUsePageOfflineNotification(PFN_IN_USE_PAGE_OFFLINE_NOTIFY Callback, PVOID Context)
{
  __int64 *PoolWithTag; // rax
  __int64 v6; // r9
  __int64 *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r9
  signed __int8 v10; // cf
  __int64 v11; // rdi
  __int64 **v12; // rax

  if ( !WheapInUsePageOfflineNotifyInit )
    return -1073741823;
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x61656857u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741801;
  PoolWithTag[2] = (__int64)Callback;
  PoolWithTag[3] = (__int64)Context;
  v8 = KeAbPreAcquire((ULONG_PTR)&WheapInUsePageOfflineNotifyLock, 0LL, 0LL, v6);
  v10 = _interlockedbittestandset64((volatile signed __int32 *)&WheapInUsePageOfflineNotifyLock, 0LL);
  v11 = v8;
  if ( v10 )
    ExfAcquirePushLockExclusiveEx(&WheapInUsePageOfflineNotifyLock, v8, (ULONG_PTR)&WheapInUsePageOfflineNotifyLock, v9);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  v12 = (__int64 **)qword_14036C930;
  *v7 = (__int64)&WheapInUsePageOfflineNotifyList;
  v7[1] = (__int64)v12;
  if ( *v12 != &WheapInUsePageOfflineNotifyList )
    __fastfail(3u);
  *v12 = v7;
  qword_14036C930 = (__int64)v7;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock);
  KeAbPostRelease((ULONG_PTR)&WheapInUsePageOfflineNotifyLock);
  return 0;
}
