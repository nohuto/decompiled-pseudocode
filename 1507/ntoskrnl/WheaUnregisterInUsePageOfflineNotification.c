/*
 * XREFs of WheaUnregisterInUsePageOfflineNotification @ 0x1406FC83C
 * Callers:
 *     HvlUnregisterWheaErrorNotification @ 0x1406705DC (HvlUnregisterWheaErrorNotification.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall WheaUnregisterInUsePageOfflineNotification(PFN_IN_USE_PAGE_OFFLINE_NOTIFY Callback)
{
  __int64 v1; // r9
  char v2; // di
  __int64 v5; // rax
  __int64 v6; // r9
  signed __int8 v7; // cf
  __int64 v8; // rbx
  PFN_IN_USE_PAGE_OFFLINE_NOTIFY *i; // rcx
  PFN_IN_USE_PAGE_OFFLINE_NOTIFY v10; // rdx
  PFN_IN_USE_PAGE_OFFLINE_NOTIFY **v11; // rax

  v2 = 0;
  if ( WheapInUsePageOfflineNotifyInit != 1 )
    return -1073741823;
  v5 = KeAbPreAcquire((ULONG_PTR)&WheapInUsePageOfflineNotifyLock, 0LL, 0LL, v1);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&WheapInUsePageOfflineNotifyLock, 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&WheapInUsePageOfflineNotifyLock, v5, (ULONG_PTR)&WheapInUsePageOfflineNotifyLock, v6);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  for ( i = (PFN_IN_USE_PAGE_OFFLINE_NOTIFY *)WheapInUsePageOfflineNotifyList;
        i != (PFN_IN_USE_PAGE_OFFLINE_NOTIFY *)&WheapInUsePageOfflineNotifyList;
        i = (PFN_IN_USE_PAGE_OFFLINE_NOTIFY *)*i )
  {
    if ( Callback == i[2] )
    {
      v10 = *i;
      v11 = (PFN_IN_USE_PAGE_OFFLINE_NOTIFY **)i[1];
      if ( *((PFN_IN_USE_PAGE_OFFLINE_NOTIFY **)*i + 1) != i || *v11 != i )
        __fastfail(3u);
      *v11 = (PFN_IN_USE_PAGE_OFFLINE_NOTIFY *)v10;
      *((_QWORD *)v10 + 1) = v11;
      ExFreePoolWithTag(i, 0x61656857u);
      v2 = 1;
      break;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock);
  KeAbPostRelease((ULONG_PTR)&WheapInUsePageOfflineNotifyLock);
  return v2 == 0 ? 0xC0000008 : 0;
}
