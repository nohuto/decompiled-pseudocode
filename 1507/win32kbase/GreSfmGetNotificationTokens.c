/*
 * XREFs of GreSfmGetNotificationTokens @ 0x1C000E6C0
 * Callers:
 *     ?ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ @ 0x1C0047338 (-ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0008270 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C000B5B0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     ?GetNotificationTokens@SfmTokenArray@@QEAAJIPEAIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C000E860 (-GetNotificationTokens@SfmTokenArray@@QEAAJIPEAIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     UserIsCurrentProcessDwm @ 0x1C000EA40 (UserIsCurrentProcessDwm.c)
 *     GreReleaseSemaphoreInternal @ 0x1C003AA20 (GreReleaseSemaphoreInternal.c)
 */

__int64 __fastcall GreSfmGetNotificationTokens(
        unsigned int a1,
        unsigned int *a2,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a3)
{
  PERESOURCE v4; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  SfmTokenArray *v9; // rcx
  char *v10; // rbx
  unsigned int NotificationTokens; // edi
  unsigned int v13; // [rsp+48h] [rbp+10h] BYREF
  LONG NumberOfWaitingThreads; // [rsp+50h] [rbp+18h] BYREF

  v13 = 0;
  v4 = ghsemDwmState;
  if ( ghsemDwmState )
  {
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDwmState);
    v4 = ghsemDwmState;
  }
  EtwTraceGreLockAcquireSemaphoreShared((__int64)L"ghsemDwmState", (__int64)v4, (__int64)a3);
  if ( (unsigned int)UserIsCurrentProcessDwm(v7) )
  {
    v9 = gpSfmState;
    v10 = (char *)gpSfmState + 32;
    if ( gpSfmState != (SfmTokenArray *)-32LL )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v10, 0LL);
      v9 = gpSfmState;
    }
    NotificationTokens = SfmTokenArray::GetNotificationTokens(v9, a1, &v13, a3);
    if ( !*((_DWORD *)gpSfmState + 3) )
    {
      NumberOfWaitingThreads = 0;
      ZwResetEvent(*((HANDLE *)gpSfmState + 3), &NumberOfWaitingThreads);
    }
    if ( v10 )
    {
      ExReleasePushLockExclusiveEx(v10, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    NotificationTokens = -1073741790;
  }
  *a2 = v13;
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDwmState", (__int64)ghsemDwmState, v8);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  return NotificationTokens;
}
