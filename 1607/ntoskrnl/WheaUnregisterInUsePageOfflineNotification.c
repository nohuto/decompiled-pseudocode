/*
 * XREFs of WheaUnregisterInUsePageOfflineNotification @ 0x1406BA890
 * Callers:
 *     HvlUnregisterWheaErrorNotification @ 0x14062047C (HvlUnregisterWheaErrorNotification.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall WheaUnregisterInUsePageOfflineNotification(PFN_IN_USE_PAGE_OFFLINE_NOTIFY Callback)
{
  char v1; // di
  _BYTE *v4; // rax
  signed __int8 v5; // cf
  _BYTE *v6; // rbx
  PFN_IN_USE_PAGE_OFFLINE_NOTIFY *i; // rcx
  PFN_IN_USE_PAGE_OFFLINE_NOTIFY v8; // rdx
  PFN_IN_USE_PAGE_OFFLINE_NOTIFY **v9; // rax

  v1 = 0;
  if ( WheapInUsePageOfflineNotifyInit != 1 )
    return -1073741823;
  v4 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&WheapInUsePageOfflineNotifyLock, 0LL, 0);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&WheapInUsePageOfflineNotifyLock, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&WheapInUsePageOfflineNotifyLock, v4, (ULONG_PTR)&WheapInUsePageOfflineNotifyLock);
  if ( v6 )
    v6[26] |= 1u;
  for ( i = (PFN_IN_USE_PAGE_OFFLINE_NOTIFY *)WheapInUsePageOfflineNotifyList;
        i != (PFN_IN_USE_PAGE_OFFLINE_NOTIFY *)&WheapInUsePageOfflineNotifyList;
        i = (PFN_IN_USE_PAGE_OFFLINE_NOTIFY *)*i )
  {
    if ( Callback == i[2] )
    {
      v8 = *i;
      v9 = (PFN_IN_USE_PAGE_OFFLINE_NOTIFY **)i[1];
      if ( *((PFN_IN_USE_PAGE_OFFLINE_NOTIFY **)*i + 1) != i || *v9 != i )
        __fastfail(3u);
      *v9 = (PFN_IN_USE_PAGE_OFFLINE_NOTIFY *)v8;
      *((_QWORD *)v8 + 1) = v9;
      ExFreePoolWithTag(i, 0x61656857u);
      v1 = 1;
      break;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock);
  KeAbPostRelease((ULONG_PTR)&WheapInUsePageOfflineNotifyLock);
  return v1 == 0 ? 0xC0000008 : 0;
}
