/*
 * XREFs of WheaInitialize @ 0x1407C0D60
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1407C116C (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     WheapInitializeWorkQueue @ 0x140170114 (WheapInitializeWorkQueue.c)
 *     WheapCheckForAndReportErrorsFromPreviousSession @ 0x1401704AC (WheapCheckForAndReportErrorsFromPreviousSession.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     IoWMIRegistrationControl @ 0x140545FA0 (IoWMIRegistrationControl.c)
 *     WheapLogInitEvent @ 0x1405BA4F8 (WheapLogInitEvent.c)
 *     WheapQueryPshedForErrorSources @ 0x1407C10DC (WheapQueryPshedForErrorSources.c)
 *     WheapInitializeErrorSourceTable @ 0x1407DC5C4 (WheapInitializeErrorSourceTable.c)
 *     WheapCreatePerProcessorInfo @ 0x1407E2118 (WheapCreatePerProcessorInfo.c)
 *     WheapLoadPolicy @ 0x1407E4B64 (WheapLoadPolicy.c)
 *     WheapInitializeEventing @ 0x1407E8C84 (WheapInitializeEventing.c)
 */

__int64 __fastcall WheaInitialize(__int64 a1, unsigned int a2)
{
  ULONG_PTR v2; // r12
  int v4; // eax
  int v5; // eax
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // r9
  signed __int8 v9; // cf
  __int64 v10; // rbx
  int v11; // eax
  unsigned int i; // edx
  __int64 v13; // r8
  __int64 j; // rbx
  __int64 v15; // rbx
  int v16; // r15d
  bool v17; // zf
  int v18; // eax
  int v19; // eax
  int PerProcessorInfo; // eax
  int v21; // eax
  int *v22; // rbx
  unsigned int v23; // edi
  int v24; // eax
  __int64 v25; // rax
  int v27; // eax
  unsigned int v28; // [rsp+78h] [rbp+48h] BYREF
  PVOID Address; // [rsp+80h] [rbp+50h] BYREF
  char v30; // [rsp+88h] [rbp+58h] BYREF

  v2 = a2;
  v28 = 0;
  if ( a2 )
  {
    qword_1403248D8 = (__int64)&WheapPrevErrList;
    WheapPrevErrList = (__int64)&WheapPrevErrList;
    v4 = PshedInitialize(a1, &v30);
    if ( v4 < 0 )
      KeBugCheckEx(0x122u, 3uLL, v4, 0LL, 0LL);
    WheapInitializeWorkQueue();
    WheapInitializeEventing();
    v5 = WheapQueryPshedForErrorSources(&v28, &Address);
    if ( v5 < 0 )
      KeBugCheckEx(0x122u, 5uLL, v5, v2, 0LL);
    v7 = KeAbPreAcquire((ULONG_PTR)&WheapDispatchPtr.ActiveThreadCount, 0LL, 0LL, v6);
    v9 = _interlockedbittestandset64((volatile signed __int32 *)&WheapDispatchPtr.ActiveThreadCount, 0LL);
    v10 = v7;
    if ( v9 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&WheapDispatchPtr.ActiveThreadCount,
        v7,
        (ULONG_PTR)&WheapDispatchPtr.ActiveThreadCount,
        v8);
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
    v11 = WheapInitializeErrorSourceTable(v28, Address);
    if ( v11 < 0 )
      KeBugCheckEx(0x122u, 7uLL, v11, 0LL, 0LL);
    PshedFreeMemory(Address);
    for ( i = 0;
          i < (unsigned int)KeNumberProcessors_0;
          *(_QWORD *)(*(_QWORD *)(v13 + 24528) + 8LL) = &WheapErrorSourceTable )
    {
      if ( i >= (unsigned int)KeNumberProcessors_0 )
        v13 = 0LL;
      else
        v13 = KiProcessorBlock[i];
      ++i;
      **(_DWORD **)(v13 + 24528) = v28;
      *(_QWORD *)(*(_QWORD *)(v13 + 24528) + 16LL) = &WheapDispatchPtr.DeviceLock.Header.WaitListHead;
    }
    for ( j = qword_140356CC8; (__int64 *)j != &qword_140356CC8; j = *(_QWORD *)j )
    {
      if ( *(_DWORD *)(j + 97) == 7 )
      {
        v27 = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD))qword_14036C968[6 * *(int *)(j + 40)])(
                (unsigned int)v2,
                j + 89,
                *(_QWORD *)(j + 56));
        if ( v27 < 0 )
          KeBugCheckEx(0x122u, 6uLL, v27, v2, *(int *)(j + 97));
        *(_DWORD *)(j + 101) = 2;
      }
    }
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 240) + 2264LL) & 4) == 0 && PshedIsSystemWheaEnabled() )
      WheapCheckForAndReportErrorsFromPreviousSession();
    v15 = qword_140356CC8;
    v16 = 0;
    while ( (__int64 *)v15 != &qword_140356CC8 )
    {
      v17 = *(_DWORD *)(v15 + 97) == 7;
      *(_DWORD *)(v15 + 117) = v16;
      if ( !v17 && !*(_BYTE *)(v15 + 88) )
      {
        v18 = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD))qword_14036C968[6 * *(int *)(v15 + 40)])(
                (unsigned int)v2,
                v15 + 89,
                *(_QWORD *)(v15 + 56));
        if ( v18 < 0 )
          KeBugCheckEx(0x122u, 6uLL, v18, v2, *(int *)(v15 + 97));
        *(_DWORD *)(v15 + 101) = 2;
      }
      v15 = *(_QWORD *)v15;
      ++v16;
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
    dword_1403248E8 = 0;
    WheapErrorRecordId = MEMORY[0xFFFFF78000000014];
    WheapLoadPolicy();
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 116LL) & 2) == 0 )
      WheapPreviousSessionFailure = 1;
    v19 = PshedInitialize(a1, &v30);
    if ( v19 < 0 )
      KeBugCheckEx(0x122u, 3uLL, v19, 0LL, 0LL);
    PerProcessorInfo = WheapCreatePerProcessorInfo();
    if ( PerProcessorInfo < 0 )
      KeBugCheckEx(0x122u, 4uLL, PerProcessorInfo, 0LL, 0LL);
    v21 = WheapQueryPshedForErrorSources(&v28, &Address);
    if ( v21 < 0 )
      KeBugCheckEx(0x122u, 5uLL, v21, 0LL, 0LL);
    v22 = (int *)Address;
    qword_140356CD0 = (__int64)&qword_140356CC8;
    qword_140356CC8 = (__int64)&qword_140356CC8;
    v23 = 0;
    WheapErrorSourceTable = 1279410516LL;
    word_140356CD8 = 1;
    byte_140356CDA = 6;
    dword_140356CDC = 1;
    qword_140356CE8 = (__int64)&qword_140356CE0;
    qword_140356CE0 = (__int64)&qword_140356CE0;
    if ( v28 )
    {
      do
      {
        v24 = ((__int64 (__fastcall *)(_QWORD, int *, _QWORD))qword_14036C968[6 * v22[2]])(0LL, v22, 0LL);
        if ( v24 < 0 )
          KeBugCheckEx(0x122u, 6uLL, v24, 0LL, v22[2]);
        v25 = (unsigned int)*v22;
        ++v23;
        v22[3] = 2;
        v22 = (int *)((char *)v22 + v25);
      }
      while ( v23 < v28 );
      v22 = (int *)Address;
    }
    PshedFreeMemory(v22);
  }
  return 0LL;
}
