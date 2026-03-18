/*
 * XREFs of PspInitializeServerSiloDeferred @ 0x1406C1E74
 * Callers:
 *     PsSetSiloObjectServerPropertyByPointer @ 0x14024411C (PsSetSiloObjectServerPropertyByPointer.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140026D98 (PsGetServerSiloGlobals.c)
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     PsGetMonitorContextServerSilo @ 0x1400CEAC0 (PsGetMonitorContextServerSilo.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400F0720 (PsDereferenceMonitorContextServerSilo.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     PsDeleteMonitorContextServerSilo @ 0x140243B90 (PsDeleteMonitorContextServerSilo.c)
 *     PspReferenceMonitorServerSilo @ 0x140593A94 (PspReferenceMonitorServerSilo.c)
 */

__int64 __fastcall PspInitializeServerSiloDeferred(_QWORD *a1)
{
  _QWORD *v1; // r12
  _QWORD *ServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // rdx
  _QWORD *v4; // r15
  struct _EX_RUNDOWN_REF *v5; // r13
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // r9
  signed __int8 v9; // cf
  __int64 v10; // rdi
  struct _EX_RUNDOWN_REF *Count; // rdi
  struct _EX_RUNDOWN_REF *v12; // r14
  int v13; // ebp
  __int64 (__fastcall *v14)(_QWORD *, _QWORD); // rbp
  char v15; // si
  __int64 Count_low; // rax
  __int64 v17; // rcx
  __int64 v18; // r9
  struct _KTHREAD *v19; // rcx
  __int16 v20; // ax
  unsigned __int64 v21; // rtt
  unsigned __int64 v22; // rtt
  struct _KTHREAD *v23; // rax
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // rsi
  struct _EX_RUNDOWN_REF *v27; // rdi
  __int64 v28; // r15
  void (__fastcall *v29)(_QWORD *, __int64); // r13
  bool v30; // si
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r9
  struct _KTHREAD *v34; // rcx
  __int16 v35; // ax
  int MonitorContextServerSilo; // eax
  __int64 v37; // r9
  __int64 v38; // r14
  int v39; // r12d
  struct _EX_RUNDOWN_REF *v40; // rcx
  unsigned __int64 v41; // rtt
  struct _KTHREAD *v42; // rax
  __int64 v43; // rax
  __int64 v44; // r9
  __int64 v45; // rsi
  struct _KTHREAD *v46; // rcx
  __int16 v47; // ax
  unsigned __int64 v48; // rtt
  __int64 v50[11]; // [rsp+20h] [rbp-58h] BYREF
  int v52; // [rsp+88h] [rbp+10h]
  struct _EX_RUNDOWN_REF *v53; // [rsp+90h] [rbp+18h]
  _QWORD *v54; // [rsp+98h] [rbp+20h]

  v1 = a1;
  ServerSiloGlobals = PsGetServerSiloGlobals(a1);
  CurrentThread = KeGetCurrentThread();
  v54 = ServerSiloGlobals;
  v4 = ServerSiloGlobals;
  v53 = 0LL;
  v5 = 0LL;
  --CurrentThread->KernelApcDisable;
  v7 = KeAbPreAcquire((ULONG_PTR)&SiloMonitorLock, 0LL, 0LL, v6);
  v9 = _interlockedbittestandset64((volatile signed __int32 *)&SiloMonitorLock, 0LL);
  v10 = v7;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx(&SiloMonitorLock, v7, (ULONG_PTR)&SiloMonitorLock, v8);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  Count = (struct _EX_RUNDOWN_REF *)SiloMonitorList;
  if ( (__int64 *)SiloMonitorList == &SiloMonitorList )
    goto LABEL_42;
  do
  {
    v12 = Count;
    v52 = PspReferenceMonitorServerSilo(Count);
    v13 = v52;
    if ( v52 >= 0 )
      break;
    Count = (struct _EX_RUNDOWN_REF *)Count->Count;
  }
  while ( Count != (struct _EX_RUNDOWN_REF *)&SiloMonitorList );
  v1 = a1;
  while ( Count != (struct _EX_RUNDOWN_REF *)&SiloMonitorList )
  {
    v14 = (__int64 (__fastcall *)(_QWORD *, _QWORD))v12[7].Count;
    if ( (HIDWORD(v12[4].Ptr) & 1) != 0 && v14 )
    {
      Count_low = LODWORD(v12[15].Count);
      v17 = v4[8];
      v15 = *(_QWORD *)(v17 + 8 * Count_low) & 1;
      if ( !v15 )
        *(_QWORD *)(v17 + 8 * Count_low) |= 1uLL;
    }
    else
    {
      v15 = 1;
    }
    Count = (struct _EX_RUNDOWN_REF *)Count->Count;
    if ( Count != (struct _EX_RUNDOWN_REF *)&SiloMonitorList )
    {
      do
      {
        v53 = Count;
        v5 = Count;
        if ( (int)PspReferenceMonitorServerSilo(Count) >= 0 )
          break;
        Count = (struct _EX_RUNDOWN_REF *)Count->Count;
      }
      while ( Count != (struct _EX_RUNDOWN_REF *)&SiloMonitorList );
      v4 = v54;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&SiloMonitorLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&SiloMonitorLock);
    KeAbPostRelease((ULONG_PTR)&SiloMonitorLock);
    v19 = KeGetCurrentThread();
    v20 = v19->KernelApcDisable + 1;
    v19->KernelApcDisable = v20;
    if ( !v20
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v19->ApcState.ApcListHead[0].Flink != &v19->152
      && !v19->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    v13 = v15 ? 0 : v14(a1, 0LL);
    v52 = v13;
    if ( v13 < 0 )
    {
      if ( Count != (struct _EX_RUNDOWN_REF *)&SiloMonitorList )
      {
        _m_prefetchw(&v5[6]);
        v22 = v5[6].Count & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v22 != _InterlockedCompareExchange64((volatile signed __int64 *)&v5[6], v22 - 2, v22) )
          ExfReleaseRundownProtection(v5 + 6);
      }
      v5 = v12;
      v53 = v12;
      Count = v12;
    }
    else
    {
      _m_prefetchw(&v12[6]);
      v21 = v12[6].Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v21 != _InterlockedCompareExchange64((volatile signed __int64 *)&v12[6], v21 - 2, v21) )
        ExfReleaseRundownProtection(v12 + 6);
      v12 = v5;
    }
    v23 = KeGetCurrentThread();
    --v23->KernelApcDisable;
    v24 = KeAbPreAcquire((ULONG_PTR)&SiloMonitorLock, 0LL, 0LL, v18);
    v26 = v24;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&SiloMonitorLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&SiloMonitorLock, v24, (ULONG_PTR)&SiloMonitorLock, v25);
    if ( v26 )
      *(_BYTE *)(v26 + 26) |= 1u;
    if ( v13 < 0 )
      goto LABEL_43;
  }
  if ( v13 >= 0 )
  {
LABEL_42:
    v13 = PspTestErrorOnServerSiloInitialize;
    v52 = PspTestErrorOnServerSiloInitialize;
    if ( PspTestErrorOnServerSiloInitialize >= 0 )
      goto LABEL_73;
  }
LABEL_43:
  *((_DWORD *)v4 + 28) = 2;
  v27 = (struct _EX_RUNDOWN_REF *)Count[1].Count;
  if ( v27 != (struct _EX_RUNDOWN_REF *)&SiloMonitorList )
  {
    do
    {
      v28 = (__int64)v27;
      if ( (int)PspReferenceMonitorServerSilo(v27) >= 0 )
        break;
      v27 = (struct _EX_RUNDOWN_REF *)v27[1].Count;
    }
    while ( v27 != (struct _EX_RUNDOWN_REF *)&SiloMonitorList );
    if ( v27 != (struct _EX_RUNDOWN_REF *)&SiloMonitorList )
    {
      do
      {
        v29 = *(void (__fastcall **)(_QWORD *, __int64))(v28 + 64);
        if ( (*(_DWORD *)(v28 + 36) & 1) != 0 && v29 )
        {
          v31 = *(unsigned int *)(v28 + 120);
          v32 = v54[8];
          v30 = (*(_QWORD *)(v32 + 8 * v31) & 2) != 0;
          if ( (*(_QWORD *)(v32 + 8 * v31) & 2) == 0 )
            *(_QWORD *)(v32 + 8 * v31) |= 2uLL;
        }
        else
        {
          v30 = 1;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&SiloMonitorLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&SiloMonitorLock);
        KeAbPostRelease((ULONG_PTR)&SiloMonitorLock);
        v34 = KeGetCurrentThread();
        v35 = v34->KernelApcDisable + 1;
        v34->KernelApcDisable = v35;
        if ( !v35
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v34->ApcState.ApcListHead[0].Flink != &v34->152
          && !v34->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        MonitorContextServerSilo = PsGetMonitorContextServerSilo(v28, v1, v50, v33);
        v38 = v50[0];
        v39 = MonitorContextServerSilo;
        if ( !v30 )
          v29(a1, v50[0]);
        if ( v39 >= 0 )
        {
          PsDeleteMonitorContextServerSilo(v38);
          PsDereferenceMonitorContextServerSilo(v38);
        }
        v40 = v53 + 6;
        _m_prefetchw(&v53[6]);
        v41 = v40->Count & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v41 != _InterlockedCompareExchange64((volatile signed __int64 *)v40, v41 - 2, v41) )
          ExfReleaseRundownProtection(v40);
        v42 = KeGetCurrentThread();
        v5 = (struct _EX_RUNDOWN_REF *)v28;
        v53 = (struct _EX_RUNDOWN_REF *)v28;
        --v42->KernelApcDisable;
        v43 = KeAbPreAcquire((ULONG_PTR)&SiloMonitorLock, 0LL, 0LL, v37);
        v45 = v43;
        if ( _interlockedbittestandset64((volatile signed __int32 *)&SiloMonitorLock, 0LL) )
          ExfAcquirePushLockExclusiveEx(&SiloMonitorLock, v43, (ULONG_PTR)&SiloMonitorLock, v44);
        if ( v45 )
          *(_BYTE *)(v45 + 26) |= 1u;
        v27 = (struct _EX_RUNDOWN_REF *)v27[1].Count;
        if ( v27 == (struct _EX_RUNDOWN_REF *)&SiloMonitorList )
          break;
        do
        {
          v28 = (__int64)v27;
          if ( (int)PspReferenceMonitorServerSilo(v27) >= 0 )
            break;
          v27 = (struct _EX_RUNDOWN_REF *)v27[1].Count;
        }
        while ( v27 != (struct _EX_RUNDOWN_REF *)&SiloMonitorList );
        v1 = a1;
      }
      while ( v27 != (struct _EX_RUNDOWN_REF *)&SiloMonitorList );
      v13 = v52;
    }
  }
LABEL_73:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&SiloMonitorLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&SiloMonitorLock);
  KeAbPostRelease((ULONG_PTR)&SiloMonitorLock);
  v46 = KeGetCurrentThread();
  v47 = v46->KernelApcDisable + 1;
  v46->KernelApcDisable = v47;
  if ( !v47
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v46->ApcState.ApcListHead[0].Flink != &v46->152
    && !v46->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( v5 )
  {
    _m_prefetchw(&v5[6]);
    v48 = v5[6].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v48 != _InterlockedCompareExchange64((volatile signed __int64 *)&v5[6], v48 - 2, v48) )
      ExfReleaseRundownProtection(v5 + 6);
  }
  return (unsigned int)v13;
}
