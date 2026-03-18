/*
 * XREFs of PspStartMonitorDeferred @ 0x1405939AC
 * Callers:
 *     PsStartMonitorServerSilo @ 0x14059391C (PsStartMonitorServerSilo.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140026D98 (PsGetServerSiloGlobals.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     PsGetServerSiloState @ 0x140117518 (PsGetServerSiloState.c)
 *     PspDereferenceSiloObject @ 0x140127C98 (PspDereferenceSiloObject.c)
 *     PspReferenceSiloObject @ 0x14024445C (PspReferenceSiloObject.c)
 */

__int64 __fastcall PspStartMonitorDeferred(__int64 a1)
{
  __int64 v2; // r9
  __int64 v3; // rax
  __int64 v4; // rbx
  unsigned __int8 CurrentIrql; // di
  signed __int8 v6; // cf
  __int64 *v7; // rbx
  __int64 *v8; // rbp
  unsigned __int8 v9; // bl
  signed __int32 v10; // eax
  __int64 *v12; // rdi
  void *v13; // rcx
  _QWORD *ServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // rcx
  _QWORD *v16; // r14
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rax
  char v23; // r14
  struct _KTHREAD *v24; // rcx
  __int16 v25; // ax
  __int64 *v26; // rdx
  unsigned __int8 v27; // si
  signed __int32 v28; // eax
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rdi
  unsigned __int8 v32; // si
  void *v33; // rcx

  (*(void (__fastcall **)(_QWORD))(a1 + 56))(0LL);
  v3 = KeAbPreAcquire((ULONG_PTR)&PspSiloListLock, 0LL, 0LL, v2);
  v4 = v3;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  v6 = _interlockedbittestandreset((volatile signed __int32 *)&PspSiloListLock, 0);
  if ( !v6 )
    ExpAcquireFastMutexContended((ULONG_PTR)&PspSiloListLock, v3);
  if ( v4 )
    *(_BYTE *)(v4 + 26) |= 1u;
  v7 = (__int64 *)PspSiloList;
  v8 = 0LL;
  qword_14032C468 = (__int64)KeGetCurrentThread();
  dword_14032C490 = CurrentIrql;
  if ( (__int64 *)PspSiloList != &PspSiloList )
  {
    while ( 1 )
    {
      v12 = v7 - 4;
      if ( v7 != (__int64 *)32 && v12[32] && (unsigned int)PsGetServerSiloState((__int64)(v7 - 4)) == 1 )
        break;
      v7 = (__int64 *)*v7;
      if ( v7 == &PspSiloList )
        goto LABEL_14;
    }
    PspReferenceSiloObject(v13);
LABEL_14:
    while ( v7 != &PspSiloList )
    {
      ServerSiloGlobals = PsGetServerSiloGlobals(v12);
      CurrentThread = KeGetCurrentThread();
      v16 = ServerSiloGlobals;
      --CurrentThread->KernelApcDisable;
      v18 = KeAbPreAcquire((ULONG_PTR)&SiloMonitorLock, 0LL, 0LL, v17);
      v20 = v18;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&SiloMonitorLock, 0LL) )
        ExfAcquirePushLockExclusiveEx(&SiloMonitorLock, v18, (ULONG_PTR)&SiloMonitorLock, v19);
      if ( v20 )
        *(_BYTE *)(v20 + 26) |= 1u;
      v21 = v16[8];
      v22 = *(unsigned int *)(a1 + 120);
      v23 = *(_QWORD *)(v21 + 8 * v22) & 1;
      if ( !v23 )
        *(_QWORD *)(v21 + 8 * v22) |= 1uLL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&SiloMonitorLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&SiloMonitorLock);
      KeAbPostRelease((ULONG_PTR)&SiloMonitorLock);
      v24 = KeGetCurrentThread();
      v25 = v24->KernelApcDisable + 1;
      v24->KernelApcDisable = v25;
      if ( !v25
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v24->ApcState.ApcListHead[0].Flink != &v24->152
        && !v24->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      v26 = &PspSiloList;
      while ( 1 )
      {
        v7 = (__int64 *)*v7;
        if ( v7 == v26 )
          break;
        v8 = v7 - 4;
        if ( v7 != (__int64 *)32 && v8[32] && (unsigned int)PsGetServerSiloState((__int64)(v7 - 4)) == 1 )
        {
          PspReferenceSiloObject(v33);
          break;
        }
      }
      v27 = dword_14032C490;
      qword_14032C468 = 0LL;
      v28 = _InterlockedCompareExchange((volatile signed __int32 *)&PspSiloListLock, 1, 0);
      if ( v28 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)&PspSiloListLock, v28);
      __writecr8(v27);
      KeAbPostRelease((ULONG_PTR)&PspSiloListLock);
      if ( !v23 )
        (*(void (__fastcall **)(__int64 *))(a1 + 56))(v12);
      if ( v12 )
        PspDereferenceSiloObject(v12);
      v30 = KeAbPreAcquire((ULONG_PTR)&PspSiloListLock, 0LL, 0LL, v29);
      v31 = v30;
      v32 = KeGetCurrentIrql();
      __writecr8(1uLL);
      v6 = _interlockedbittestandreset((volatile signed __int32 *)&PspSiloListLock, 0);
      if ( !v6 )
        ExpAcquireFastMutexContended((ULONG_PTR)&PspSiloListLock, v30);
      if ( v31 )
        *(_BYTE *)(v31 + 26) |= 1u;
      v12 = v8;
      qword_14032C468 = (__int64)KeGetCurrentThread();
      dword_14032C490 = v32;
    }
  }
  v9 = dword_14032C490;
  qword_14032C468 = 0LL;
  v10 = _InterlockedCompareExchange((volatile signed __int32 *)&PspSiloListLock, 1, 0);
  if ( v10 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&PspSiloListLock, v10);
  __writecr8(v9);
  KeAbPostRelease((ULONG_PTR)&PspSiloListLock);
  return 0LL;
}
