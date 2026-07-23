/*
 * XREFs of WheaInitialize @ 0x1407A0948
 * Callers:
 *     IoInitSystemPreDrivers @ 0x14079EDEC (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     KeGetPrcb @ 0x1400D1E98 (KeGetPrcb.c)
 *     WheapInitializeWorkQueue @ 0x14014C680 (WheapInitializeWorkQueue.c)
 *     WheapCheckForAndReportErrorsFromPreviousSession @ 0x14014C94C (WheapCheckForAndReportErrorsFromPreviousSession.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     IoWMIRegistrationControl @ 0x14053A994 (IoWMIRegistrationControl.c)
 *     WheapLogInitEvent @ 0x14057B148 (WheapLogInitEvent.c)
 *     WheapQueryPshedForErrorSources @ 0x1407A0CAC (WheapQueryPshedForErrorSources.c)
 *     WheapInitializeErrorSourceTable @ 0x1407B4128 (WheapInitializeErrorSourceTable.c)
 *     WheapLoadPolicy @ 0x1407B966C (WheapLoadPolicy.c)
 *     WheapCreatePerProcessorInfo @ 0x1407BAAE8 (WheapCreatePerProcessorInfo.c)
 *     WheapInitializeEventing @ 0x1407BD098 (WheapInitializeEventing.c)
 */

__int64 __fastcall WheaInitialize(__int64 a1, unsigned int a2)
{
  ULONG_PTR v2; // r12
  int v4; // eax
  int v5; // eax
  _BYTE *v6; // rax
  signed __int8 v7; // cf
  _BYTE *v8; // rbx
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
    WheapDispatchPtr.DeviceObjectExtension = (struct _DEVOBJ_EXTENSION *)&WheapDispatchPtr.SectorSize;
    *(_QWORD *)&WheapDispatchPtr.SectorSize = &WheapDispatchPtr.SectorSize;
    v4 = PshedInitialize(a1, &v28);
    if ( v4 < 0 )
      KeBugCheckEx(0x122u, 3uLL, v4, 0LL, 0LL);
    WheapInitializeWorkQueue();
    WheapInitializeEventing();
    v5 = WheapQueryPshedForErrorSources(&v26, &Address);
    if ( v5 < 0 )
      KeBugCheckEx(0x122u, 5uLL, v5, v2, 0LL);
    v6 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&WheapDispatchPtr.DeviceLock.Header.WaitListHead, 0LL, 0);
    v7 = _interlockedbittestandset64((volatile signed __int32 *)&WheapDispatchPtr.DeviceLock.Header.WaitListHead, 0LL);
    v8 = v6;
    if ( v7 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&WheapDispatchPtr.DeviceLock.Header.WaitListHead,
        v6,
        (ULONG_PTR)&WheapDispatchPtr.DeviceLock.Header.WaitListHead);
    if ( v8 )
      v8[26] |= 1u;
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
      *(_QWORD *)(*(_QWORD *)(Prcb + 24528) + 16LL) = &WheapDispatchPtr.Reserved;
    }
    for ( j = qword_140329968; (__int64 *)j != &qword_140329968; j = *(_QWORD *)j )
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
    v13 = qword_140329968;
    v14 = 0;
    while ( (__int64 *)v13 != &qword_140329968 )
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
            (volatile signed __int64 *)&WheapDispatchPtr.DeviceLock.Header.WaitListHead.Flink,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&WheapDispatchPtr.DeviceLock.Header.WaitListHead);
    KeAbPostRelease((ULONG_PTR)&WheapDispatchPtr.DeviceLock.Header.WaitListHead);
  }
  else
  {
    WheapStatus = 0LL;
    dword_1402FABD8 = 0;
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
    qword_140329970 = (__int64)&qword_140329968;
    qword_140329968 = (__int64)&qword_140329968;
    v21 = 0;
    WheapErrorSourceTable = 1279410516LL;
    word_140329978 = 1;
    byte_14032997A = 6;
    dword_14032997C = 1;
    qword_140329988 = (__int64)&qword_140329980;
    qword_140329980 = (__int64)&qword_140329980;
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
