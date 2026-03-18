/*
 * XREFs of WheapCallInUsePageNotificationCallbacks @ 0x1406FCA70
 * Callers:
 *     WheapAttemptPhysicalPageOffline @ 0x1406FC934 (WheapAttemptPhysicalPageOffline.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall WheapCallInUsePageNotificationCallbacks(__int64 a1, char a2, char a3, __int64 a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  signed __int8 v12; // cf
  __int64 v13; // rbx
  __int64 i; // rbx

  if ( WheapInUsePageOfflineNotifyInit != 1 )
    return 3221225473LL;
  v8 = KeAbPreAcquire((ULONG_PTR)&WheapInUsePageOfflineNotifyLock, 0LL, 0LL, a4);
  v12 = _interlockedbittestandset64((volatile signed __int32 *)&WheapInUsePageOfflineNotifyLock, 0LL);
  v13 = v8;
  if ( v12 )
    ExfAcquirePushLockExclusiveEx(
      &WheapInUsePageOfflineNotifyLock,
      v8,
      (ULONG_PTR)&WheapInUsePageOfflineNotifyLock,
      v11);
  if ( v13 )
    *(_BYTE *)(v13 + 26) |= 1u;
  for ( i = WheapInUsePageOfflineNotifyList; (__int64 *)i != &WheapInUsePageOfflineNotifyList; i = *(_QWORD *)i )
  {
    LOBYTE(v10) = a3;
    LOBYTE(v9) = a2;
    (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(i + 16))(a1, v9, v10, *(_QWORD *)(i + 24));
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock);
  KeAbPostRelease((ULONG_PTR)&WheapInUsePageOfflineNotifyLock);
  return 0LL;
}
