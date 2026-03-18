/*
 * XREFs of GreSfmGetNotificationTokens @ 0x1C004E6F0
 * Callers:
 *     ?ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ @ 0x1C003CFA8 (-ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ.c)
 * Callees:
 *     GreReleaseSemaphoreInternal @ 0x1C0037280 (GreReleaseSemaphoreInternal.c)
 *     UserIsCurrentProcessDwm @ 0x1C004D740 (UserIsCurrentProcessDwm.c)
 *     ?GetNotificationTokens@SfmTokenArray@@QEAAJIPEAIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C004E890 (-GetNotificationTokens@SfmTokenArray@@QEAAJIPEAIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C006DDB0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C006E360 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

__int64 __fastcall GreSfmGetNotificationTokens(
        unsigned int a1,
        unsigned int *a2,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a3)
{
  HSEMAPHORE v4; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
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
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", v4);
  if ( UserIsCurrentProcessDwm(v8, v7) )
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
      ExReleasePushLockExclusiveEx(v10);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    NotificationTokens = -1073741790;
  }
  *a2 = v13;
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState");
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDwmState);
  return NotificationTokens;
}
