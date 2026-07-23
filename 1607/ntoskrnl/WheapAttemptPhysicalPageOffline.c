/*
 * XREFs of WheapAttemptPhysicalPageOffline @ 0x1406BA988
 * Callers:
 *     WheaAttemptPhysicalPageOffline @ 0x1406BA650 (WheaAttemptPhysicalPageOffline.c)
 *     WheapAttemptPhysicalPageOfflineWorker @ 0x1406BAA94 (WheapAttemptPhysicalPageOfflineWorker.c)
 * Callees:
 *     MmMarkPhysicalMemoryAsBad @ 0x1401E2170 (MmMarkPhysicalMemoryAsBad.c)
 *     WheaPersistOfflinedPage @ 0x1402307D0 (WheaPersistOfflinedPage.c)
 *     WheapLogPageOfflineAttemptEvent @ 0x140230F84 (WheapLogPageOfflineAttemptEvent.c)
 *     WheapCallInUsePageNotificationCallbacks @ 0x1406BAAC4 (WheapCallInUsePageNotificationCallbacks.c)
 *     WheapSqmAddToStream @ 0x1406BBCB4 (WheapSqmAddToStream.c)
 */

__int64 __fastcall WheapAttemptPhysicalPageOffline(__int64 a1, char a2, char a3)
{
  __int64 v3; // r14
  char v4; // bl
  int v8; // r15d
  int v9; // eax
  unsigned int v10; // edi
  char v11; // si
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // eax
  _DWORD v17[22]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v18; // [rsp+90h] [rbp+8h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+20h] BYREF

  v19 = 4096LL;
  v3 = a1 << 12;
  v4 = 0;
  v18 = a1 << 12;
  if ( a3 )
  {
    v8 = 2;
  }
  else
  {
    v8 = 1;
    v18 = (a1 << 12) | 1;
  }
  v9 = MmMarkPhysicalMemoryAsBad(&v18, &v19);
  v10 = v9;
  if ( v9 >= 0 )
  {
    if ( v9 )
    {
      v11 = 0;
      v12 = 0;
    }
    else
    {
      v11 = 1;
      v12 = 1;
    }
    v17[2] = v8;
    v17[0] = 1;
    v17[6] = v12;
    v17[4] = 1;
    WheapSqmAddToStream(7212LL, 2LL, v17);
    if ( !v11 )
    {
      LOBYTE(v14) = a3;
      LOBYTE(v13) = a2;
      WheapCallInUsePageNotificationCallbacks(a1, v13, v14);
    }
  }
  if ( WheapPolicyMemPersistOffline )
  {
    v15 = WheaPersistOfflinedPage(a1);
    if ( v15 >= 0 )
      v4 = 1;
    else
      v10 = v15;
  }
  WheapLogPageOfflineAttemptEvent(v3, v10 == 259, a3, v4, a2);
  return v10;
}
