/*
 * XREFs of WheaInitialize @ 0x140757730
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140757B24 (IoInitSystemPreDrivers.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeGetPrcb @ 0x14009DB9C (KeGetPrcb.c)
 *     WheapInitializeWorkQueue @ 0x140142498 (WheapInitializeWorkQueue.c)
 *     WheapCheckForAndReportErrorsFromPreviousSession @ 0x140142648 (WheapCheckForAndReportErrorsFromPreviousSession.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     IoWMIRegistrationControl @ 0x1404B3074 (IoWMIRegistrationControl.c)
 *     WheapLogInitEvent @ 0x140543950 (WheapLogInitEvent.c)
 *     WheapQueryPshedForErrorSources @ 0x140757A94 (WheapQueryPshedForErrorSources.c)
 *     WheapInitializeErrorSourceTable @ 0x1407684B4 (WheapInitializeErrorSourceTable.c)
 *     WheapCreatePerProcessorInfo @ 0x14076EFB8 (WheapCreatePerProcessorInfo.c)
 *     WheapLoadPolicy @ 0x14076F2F8 (WheapLoadPolicy.c)
 *     WheapInitializeEventing @ 0x140772188 (WheapInitializeEventing.c)
 */

__int64 __fastcall WheaInitialize(__int64 a1, unsigned int a2)
{
  ULONG_PTR v2; // r12
  int v4; // eax
  int v5; // eax
  __int64 v6; // rax
  signed __int8 v7; // cf
  __int64 v8; // rbx
  int v9; // eax
  ULONG i; // ebx
  __int64 Prcb; // rax
  __int64 j; // rbx
  __int64 v13; // rbx
  int v14; // r15d
  bool v15; // zf
  int v16; // eax
  int v17; // eax
  int PerProcessorInfo; // eax
  int v19; // eax
  int *v20; // rbx
  unsigned int v21; // edi
  int v22; // eax
  __int64 v23; // rax
  int v25; // eax
  unsigned int v26; // [rsp+78h] [rbp+48h] BYREF
  PVOID Address; // [rsp+80h] [rbp+50h] BYREF
  char v28; // [rsp+88h] [rbp+58h] BYREF

  v2 = a2;
  v26 = 0;
  if ( a2 )
  {
    qword_1402D5798 = (__int64)&WheapPrevErrList;
    WheapPrevErrList = (__int64)&WheapPrevErrList;
    v4 = PshedInitialize(a1, &v28);
    if ( v4 < 0 )
      KeBugCheckEx(0x122u, 3uLL, v4, 0LL, 0LL);
    WheapInitializeWorkQueue();
    WheapInitializeEventing();
    v5 = WheapQueryPshedForErrorSources(&v26, &Address);
    if ( v5 < 0 )
      KeBugCheckEx(0x122u, 5uLL, v5, v2, 0LL);
    v6 = KeAbPreAcquire((ULONG_PTR)&WheapDispatchPtr.ActiveThreadCount, 0LL, 0LL);
    v7 = _interlockedbittestandset64((volatile signed __int32 *)&WheapDispatchPtr.ActiveThreadCount, 0LL);
    v8 = v6;
    if ( v7 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&WheapDispatchPtr.ActiveThreadCount,
        v6,
        (ULONG_PTR)&WheapDispatchPtr.ActiveThreadCount);
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    v9 = WheapInitializeErrorSourceTable(v26, Address);
    if ( v9 < 0 )
      KeBugCheckEx(0x122u, 7uLL, v9, 0LL, 0LL);
    PshedFreeMemory(Address);
    for ( i = 0;
          i < (unsigned int)KeNumberProcessors_0;
          *(_QWORD *)(*(_QWORD *)(Prcb + 24528) + 8LL) = &WheapErrorSourceTable )
    {
      Prcb = KeGetPrcb(i++);
      **(_DWORD **)(Prcb + 24528) = v26;
      *(_QWORD *)(*(_QWORD *)(Prcb + 24528) + 16LL) = &WheapDispatchPtr.DeviceLock.Header.WaitListHead;
    }
    for ( j = qword_1403069B8; (__int64 *)j != &qword_1403069B8; j = *(_QWORD *)j )
    {
      if ( *(_DWORD *)(j + 97) == 7 )
      {
        v25 = (*((__int64 (__fastcall **)(_QWORD, __int64, _QWORD))&WheapSourceConfiguration + 6 * *(int *)(j + 40) + 3))(
                (unsigned int)v2,
                j + 89,
                *(_QWORD *)(j + 56));
        if ( v25 < 0 )
          KeBugCheckEx(0x122u, 6uLL, v25, v2, *(int *)(j + 97));
        *(_DWORD *)(j + 101) = 2;
      }
    }
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 240) + 2264LL) & 4) == 0 && PshedIsSystemWheaEnabled() )
      WheapCheckForAndReportErrorsFromPreviousSession();
    v13 = qword_1403069B8;
    v14 = 0;
    while ( (__int64 *)v13 != &qword_1403069B8 )
    {
      v15 = *(_DWORD *)(v13 + 97) == 7;
      *(_DWORD *)(v13 + 117) = v14;
      if ( !v15 && !*(_BYTE *)(v13 + 88) )
      {
        v16 = (*((__int64 (__fastcall **)(_QWORD, __int64, _QWORD))&WheapSourceConfiguration + 6 * *(int *)(v13 + 40)
                                                                                             + 3))(
                (unsigned int)v2,
                v13 + 89,
                *(_QWORD *)(v13 + 56));
        if ( v16 < 0 )
          KeBugCheckEx(0x122u, 6uLL, v16, v2, *(int *)(v13 + 97));
        *(_DWORD *)(v13 + 101) = 2;
      }
      v13 = *(_QWORD *)v13;
      ++v14;
    }
    WheapLogInitEvent();
    *(_QWORD *)&WheapDispatchPtr.Type = WheaWmiDispatch;
    IoWMIRegistrationControl(&WheapDispatchPtr, 0x80000001);
    WheapInitializationComplete = 1;
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&WheapDispatchPtr.ActiveThreadCount,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&WheapDispatchPtr.ActiveThreadCount);
    KeAbPostRelease((ULONG_PTR)&WheapDispatchPtr.ActiveThreadCount);
  }
  else
  {
    WheapStatus = 0LL;
    dword_1402D57A8 = 0;
    WheapErrorRecordId = MEMORY[0xFFFFF78000000014];
    WheapLoadPolicy();
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 116LL) & 2) == 0 )
      WheapPreviousSessionFailure = 1;
    v17 = PshedInitialize(a1, &v28);
    if ( v17 < 0 )
      KeBugCheckEx(0x122u, 3uLL, v17, 0LL, 0LL);
    PerProcessorInfo = WheapCreatePerProcessorInfo();
    if ( PerProcessorInfo < 0 )
      KeBugCheckEx(0x122u, 4uLL, PerProcessorInfo, 0LL, 0LL);
    v19 = WheapQueryPshedForErrorSources(&v26, &Address);
    if ( v19 < 0 )
      KeBugCheckEx(0x122u, 5uLL, v19, 0LL, 0LL);
    v20 = (int *)Address;
    qword_1403069C0 = (__int64)&qword_1403069B8;
    qword_1403069B8 = (__int64)&qword_1403069B8;
    v21 = 0;
    WheapErrorSourceTable = 1279410516LL;
    word_1403069C8 = 1;
    byte_1403069CA = 6;
    dword_1403069CC = 1;
    qword_1403069D8 = (__int64)&qword_1403069D0;
    qword_1403069D0 = (__int64)&qword_1403069D0;
    if ( v26 )
    {
      do
      {
        v22 = (*((__int64 (__fastcall **)(_QWORD, int *, _QWORD))&WheapSourceConfiguration + 6 * v20[2] + 3))(
                0LL,
                v20,
                0LL);
        if ( v22 < 0 )
          KeBugCheckEx(0x122u, 6uLL, v22, 0LL, v20[2]);
        v23 = (unsigned int)*v20;
        ++v21;
        v20[3] = 2;
        v20 = (int *)((char *)v20 + v23);
      }
      while ( v21 < v26 );
      v20 = (int *)Address;
    }
    PshedFreeMemory(v20);
  }
  return 0LL;
}
