/*
 * XREFs of PspNotifySeverSiloDeletion @ 0x1406C2388
 * Callers:
 *     PspServerSiloDelete @ 0x1406C2868 (PspServerSiloDelete.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     PsGetMonitorContextServerSilo @ 0x1400CEAC0 (PsGetMonitorContextServerSilo.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400F0720 (PsDereferenceMonitorContextServerSilo.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     PsDeleteMonitorContextServerSilo @ 0x140243B90 (PsDeleteMonitorContextServerSilo.c)
 *     PspReferenceMonitorServerSilo @ 0x140593A94 (PspReferenceMonitorServerSilo.c)
 */

void __fastcall PspNotifySeverSiloDeletion(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r13
  __int64 v7; // rbx
  __int64 v8; // r9
  struct _EX_RUNDOWN_REF *Count; // rbx
  __int64 v10; // r14
  void (__fastcall *v11)(_QWORD *, __int64); // r15
  __int64 v12; // rcx
  __int64 v13; // rdx
  char v14; // si
  __int64 v15; // r9
  struct _KTHREAD *v16; // rcx
  __int16 v17; // ax
  int MonitorContextServerSilo; // eax
  __int64 v19; // r9
  __int64 v20; // rdi
  int v21; // ebp
  unsigned __int64 v22; // rtt
  struct _KTHREAD *v23; // rax
  __int64 v24; // rdi
  __int64 v25; // r9
  struct _KTHREAD *v26; // rcx
  __int16 v27; // ax
  struct _EX_RUNDOWN_REF *v28; // [rsp+60h] [rbp+8h]
  __int64 v29; // [rsp+68h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = a1[32];
  v28 = 0LL;
  --CurrentThread->KernelApcDisable;
  v7 = KeAbPreAcquire((ULONG_PTR)&SiloMonitorLock, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&SiloMonitorLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&SiloMonitorLock, v7, (ULONG_PTR)&SiloMonitorLock, v8);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  Count = (struct _EX_RUNDOWN_REF *)qword_14032C4A8;
  if ( (__int64 *)qword_14032C4A8 != &SiloMonitorList )
  {
    do
    {
      if ( (int)PspReferenceMonitorServerSilo(Count) >= 0 )
        break;
      Count = (struct _EX_RUNDOWN_REF *)Count[1].Count;
    }
    while ( Count != (struct _EX_RUNDOWN_REF *)&SiloMonitorList );
    if ( Count != (struct _EX_RUNDOWN_REF *)&SiloMonitorList )
    {
      v10 = (__int64)Count;
      PspReferenceMonitorServerSilo(Count);
      do
      {
        v11 = *(void (__fastcall **)(_QWORD *, __int64))(v10 + 64);
        if ( (*(_DWORD *)(v10 + 36) & 1) != 0
          && v11
          && (v12 = *(unsigned int *)(v10 + 120), v13 = *(_QWORD *)(v5 + 64), (*(_QWORD *)(v13 + 8 * v12) & 1) != 0)
          && (*(_QWORD *)(v13 + 8 * v12) & 2) == 0 )
        {
          *(_QWORD *)(v13 + 8 * v12) |= 2uLL;
          v14 = 0;
        }
        else
        {
          v14 = 1;
        }
        for ( Count = (struct _EX_RUNDOWN_REF *)Count[1].Count;
              Count != (struct _EX_RUNDOWN_REF *)&SiloMonitorList;
              Count = (struct _EX_RUNDOWN_REF *)Count[1].Count )
        {
          v28 = Count;
          if ( (int)PspReferenceMonitorServerSilo(Count) >= 0 )
            break;
        }
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&SiloMonitorLock, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&SiloMonitorLock);
        KeAbPostRelease((ULONG_PTR)&SiloMonitorLock);
        v16 = KeGetCurrentThread();
        v17 = v16->KernelApcDisable + 1;
        v16->KernelApcDisable = v17;
        if ( !v17
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v16->ApcState.ApcListHead[0].Flink != &v16->152
          && !v16->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        MonitorContextServerSilo = PsGetMonitorContextServerSilo(v10, a1, &v29, v15);
        v20 = v29;
        v21 = MonitorContextServerSilo;
        if ( !v14 )
          v11(a1, v29);
        if ( v21 >= 0 )
        {
          PsDeleteMonitorContextServerSilo(v20);
          PsDereferenceMonitorContextServerSilo(v20);
        }
        _m_prefetchw((const void *)(v10 + 48));
        v22 = *(_QWORD *)(v10 + 48) & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v22 != _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 48), v22 - 2, v22) )
          ExfReleaseRundownProtection((PEX_RUNDOWN_REF)(v10 + 48));
        v23 = KeGetCurrentThread();
        v10 = (__int64)v28;
        --v23->KernelApcDisable;
        v24 = KeAbPreAcquire((ULONG_PTR)&SiloMonitorLock, 0LL, 0LL, v19);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&SiloMonitorLock, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(&SiloMonitorLock, v24, (ULONG_PTR)&SiloMonitorLock, v25);
        if ( v24 )
          *(_BYTE *)(v24 + 26) |= 1u;
      }
      while ( Count != (struct _EX_RUNDOWN_REF *)&SiloMonitorList );
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&SiloMonitorLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&SiloMonitorLock);
  KeAbPostRelease((ULONG_PTR)&SiloMonitorLock);
  v26 = KeGetCurrentThread();
  v27 = v26->KernelApcDisable + 1;
  v26->KernelApcDisable = v27;
  if ( !v27
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v26->ApcState.ApcListHead[0].Flink != &v26->152
    && !v26->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  *(_DWORD *)(v5 + 112) = 3;
}
