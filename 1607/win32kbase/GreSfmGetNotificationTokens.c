/*
 * XREFs of GreSfmGetNotificationTokens @ 0x1C004E1C0
 * Callers:
 *     ?ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ @ 0x1C001A1CC (-ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ.c)
 * Callees:
 *     GreReleaseSemaphoreInternal @ 0x1C0026BF0 (GreReleaseSemaphoreInternal.c)
 *     UserIsCurrentProcessDwm @ 0x1C004B5A0 (UserIsCurrentProcessDwm.c)
 *     ?GetNotificationTokens@SfmTokenArray@@QEAAJIPEAIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C004E360 (-GetNotificationTokens@SfmTokenArray@@QEAAJIPEAIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C00740F0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

__int64 __fastcall GreSfmGetNotificationTokens(
        unsigned int a1,
        unsigned int *a2,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a3)
{
  __int64 v6; // rcx
  SfmTokenArray *v7; // rcx
  char *v8; // rbx
  unsigned int NotificationTokens; // edi
  unsigned int v11; // [rsp+48h] [rbp+10h] BYREF
  LONG NumberOfWaitingThreads; // [rsp+50h] [rbp+18h] BYREF

  v11 = 0;
  if ( ghsemDwmState )
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState");
  if ( UserIsCurrentProcessDwm(v6) )
  {
    v7 = gpSfmState;
    v8 = (char *)gpSfmState + 32;
    if ( gpSfmState != (SfmTokenArray *)-32LL )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v8, 0LL);
      v7 = gpSfmState;
    }
    NotificationTokens = SfmTokenArray::GetNotificationTokens(v7, a1, &v11, a3);
    if ( !*((_DWORD *)gpSfmState + 3) )
    {
      NumberOfWaitingThreads = 0;
      ZwResetEvent(*((HANDLE *)gpSfmState + 3), &NumberOfWaitingThreads);
    }
    if ( v8 )
    {
      ExReleasePushLockExclusiveEx(v8, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    NotificationTokens = -1073741790;
  }
  *a2 = v11;
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState");
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDwmState);
  return NotificationTokens;
}
