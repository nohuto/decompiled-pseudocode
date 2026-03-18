/*
 * XREFs of PspUnregisterMonitorDeferred @ 0x1406C2E94
 * Callers:
 *     PsUnregisterMonitorServerSilo @ 0x1406C16A8 (PsUnregisterMonitorServerSilo.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140026D98 (PsGetServerSiloGlobals.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     PsGetMonitorContextServerSilo @ 0x1400CEAC0 (PsGetMonitorContextServerSilo.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400F0720 (PsDereferenceMonitorContextServerSilo.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     PspDereferenceSiloObject @ 0x140127C98 (PspDereferenceSiloObject.c)
 *     PsDeleteMonitorContextServerSilo @ 0x140243B90 (PsDeleteMonitorContextServerSilo.c)
 *     PspReferenceSiloObject @ 0x14024445C (PspReferenceSiloObject.c)
 */

__int64 __fastcall PspUnregisterMonitorDeferred(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // r14
  int MonitorContextServerSilo; // eax
  __int64 v7; // r9
  void (__fastcall *v8)(_QWORD, __int64); // r8
  int v9; // edi
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rbx
  unsigned __int8 CurrentIrql; // di
  signed __int8 v14; // cf
  __int64 *v15; // rbx
  __int64 *v16; // rdi
  __int64 v17; // r9
  int v18; // r12d
  unsigned __int8 v19; // si
  signed __int32 v20; // eax
  __int64 v21; // r9
  _QWORD *ServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // rcx
  _QWORD *v24; // r15
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // r9
  __int64 v28; // rsi
  __int64 v29; // rcx
  __int64 v30; // rdx
  char v31; // si
  struct _KTHREAD *v32; // rcx
  __int16 v33; // ax
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rdi
  unsigned __int8 v37; // si
  unsigned __int8 v38; // bl
  signed __int32 v39; // eax
  __int64 v41; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0LL;
  MonitorContextServerSilo = PsGetMonitorContextServerSilo(a1, 0LL, &v41, a4);
  v8 = *(void (__fastcall **)(_QWORD, __int64))(a1 + 64);
  v9 = MonitorContextServerSilo;
  v10 = v41;
  if ( v8 )
    v8(0LL, v41);
  if ( v9 >= 0 )
  {
    PsDeleteMonitorContextServerSilo(v10);
    PsDereferenceMonitorContextServerSilo(v10);
  }
  v11 = KeAbPreAcquire((ULONG_PTR)&PspSiloListLock, 0LL, 0LL, v7);
  v12 = v11;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  v14 = _interlockedbittestandreset((volatile signed __int32 *)&PspSiloListLock, 0);
  if ( !v14 )
    ExpAcquireFastMutexContended((ULONG_PTR)&PspSiloListLock, v11);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  v15 = (__int64 *)PspSiloList;
  qword_14032C468 = (__int64)KeGetCurrentThread();
  dword_14032C490 = CurrentIrql;
  while ( v15 != &PspSiloList )
  {
    v16 = v15 - 4;
    if ( v15 != (__int64 *)32 && v16[32] )
    {
      PspReferenceSiloObject(v15 - 4);
      while ( v15 != &PspSiloList )
      {
        v18 = PsGetMonitorContextServerSilo(a1, v16, &v41, v17);
        while ( 1 )
        {
          v15 = (__int64 *)*v15;
          if ( v15 == &PspSiloList )
            break;
          v4 = v15 - 4;
          if ( v15 != (__int64 *)32 && v4[32] )
          {
            PspReferenceSiloObject(v15 - 4);
            break;
          }
        }
        v19 = dword_14032C490;
        qword_14032C468 = 0LL;
        v20 = _InterlockedCompareExchange((volatile signed __int32 *)&PspSiloListLock, 1, 0);
        if ( v20 )
          ExpReleaseFastMutexContended((volatile signed __int32 *)&PspSiloListLock, v20);
        __writecr8(v19);
        KeAbPostRelease((ULONG_PTR)&PspSiloListLock);
        if ( !*(_QWORD *)(a1 + 64) )
          goto LABEL_41;
        ServerSiloGlobals = PsGetServerSiloGlobals(v16);
        CurrentThread = KeGetCurrentThread();
        v24 = ServerSiloGlobals;
        --CurrentThread->KernelApcDisable;
        v26 = KeAbPreAcquire((ULONG_PTR)&SiloMonitorLock, 0LL, 0LL, v25);
        v28 = v26;
        if ( _interlockedbittestandset64((volatile signed __int32 *)&SiloMonitorLock, 0LL) )
          ExfAcquirePushLockExclusiveEx(&SiloMonitorLock, v26, (ULONG_PTR)&SiloMonitorLock, v27);
        if ( v28 )
          *(_BYTE *)(v28 + 26) |= 1u;
        v29 = *(unsigned int *)(a1 + 120);
        v30 = v24[8];
        if ( (*(_QWORD *)(v30 + 8 * v29) & 1) == 0 || (*(_QWORD *)(v30 + 8 * v29) & 2) != 0 )
        {
          v31 = 1;
        }
        else
        {
          *(_QWORD *)(v30 + 8 * v29) |= 2uLL;
          v31 = 0;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&SiloMonitorLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&SiloMonitorLock);
        KeAbPostRelease((ULONG_PTR)&SiloMonitorLock);
        v32 = KeGetCurrentThread();
        v33 = v32->KernelApcDisable + 1;
        v32->KernelApcDisable = v33;
        if ( !v33
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v32->ApcState.ApcListHead[0].Flink != &v32->152
          && !v32->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        if ( v31 )
        {
LABEL_41:
          v34 = v41;
        }
        else
        {
          v34 = v41;
          (*(void (__fastcall **)(__int64 *, __int64))(a1 + 64))(v16, v41);
        }
        if ( v18 >= 0 )
        {
          PsDeleteMonitorContextServerSilo(v34);
          PsDereferenceMonitorContextServerSilo(v34);
        }
        if ( v16 )
          PspDereferenceSiloObject(v16);
        v35 = KeAbPreAcquire((ULONG_PTR)&PspSiloListLock, 0LL, 0LL, v21);
        v36 = v35;
        v37 = KeGetCurrentIrql();
        __writecr8(1uLL);
        v14 = _interlockedbittestandreset((volatile signed __int32 *)&PspSiloListLock, 0);
        if ( !v14 )
          ExpAcquireFastMutexContended((ULONG_PTR)&PspSiloListLock, v35);
        if ( v36 )
          *(_BYTE *)(v36 + 26) |= 1u;
        v16 = v4;
        qword_14032C468 = (__int64)KeGetCurrentThread();
        dword_14032C490 = v37;
      }
      break;
    }
    v15 = (__int64 *)*v15;
  }
  v38 = dword_14032C490;
  qword_14032C468 = 0LL;
  v39 = _InterlockedCompareExchange((volatile signed __int32 *)&PspSiloListLock, 1, 0);
  if ( v39 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&PspSiloListLock, v39);
  __writecr8(v38);
  KeAbPostRelease((ULONG_PTR)&PspSiloListLock);
  return 0LL;
}
