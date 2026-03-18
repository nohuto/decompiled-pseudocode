/*
 * XREFs of PsRegisterMonitorServerSilo @ 0x1405936B8
 * Callers:
 *     SepInitializationPhase1 @ 0x1405931F0 (SepInitializationPhase1.c)
 *     ExpWnfInitServerSilo @ 0x1405934AC (ExpWnfInitServerSilo.c)
 *     SeRmInitPhase1 @ 0x1407BC118 (SeRmInitPhase1.c)
 *     EtwpInitialize @ 0x1407C0848 (EtwpInitialize.c)
 *     ObInitSystem @ 0x1407C266C (ObInitSystem.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140016968 (PsIsCurrentThreadInServerSilo.c)
 *     RtlFindClearBitsAndSet @ 0x14002D488 (RtlFindClearBitsAndSet.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PspReferenceMonitorServerSilo @ 0x140593A94 (PspReferenceMonitorServerSilo.c)
 */

__int64 __fastcall PsRegisterMonitorServerSilo(char *Object, _WORD *Src, __int64 a3, _QWORD *a4)
{
  SIZE_T v8; // rdx
  __int64 v9; // rsi
  size_t v10; // rsi
  _QWORD *PoolWithTag; // rax
  _QWORD *v12; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // r14
  ULONG ClearBitsAndSet; // eax
  __int64 **v19; // rax
  struct _KTHREAD *v20; // rcx
  __int16 v21; // ax
  struct _KTHREAD *v23; // rcx
  __int16 v24; // ax

  if ( !Object && (!Src || !*Src) || *(_WORD *)a3 != 1 )
    return 3221225485LL;
  if ( PsIsCurrentThreadInServerSilo() )
    return 3221225569LL;
  v8 = 128LL;
  if ( Object )
  {
    v10 = 0LL;
  }
  else
  {
    v9 = -1LL;
    do
      ++v9;
    while ( Src[v9] );
    v10 = 2 * v9;
    v8 = v10 + 128;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v8, 0x4D6C6953u);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x80uLL);
  *((_DWORD *)v12 + 8) = 1298950483;
  v12[3] = v12 + 2;
  v12[2] = v12 + 2;
  *((_BYTE *)v12 + 125) = *(_BYTE *)(a3 + 2) & 1;
  v12[7] = *(_QWORD *)(a3 + 8);
  v12[8] = *(_QWORD *)(a3 + 16);
  v12[9] = *(_QWORD *)(a3 + 24);
  v12[10] = *(_QWORD *)(a3 + 32);
  v12[11] = *(_QWORD *)(a3 + 40);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v15 = KeAbPreAcquire((ULONG_PTR)&SiloMonitorLock, 0LL, 0LL, v14);
  v17 = v15;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&SiloMonitorLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&SiloMonitorLock, v15, (ULONG_PTR)&SiloMonitorLock, v16);
  if ( v17 )
    *(_BYTE *)(v17 + 26) |= 1u;
  ClearBitsAndSet = RtlFindClearBitsAndSet(&MonitorContextIndexBitmap, 1u, 0);
  if ( ClearBitsAndSet == -1 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&SiloMonitorLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&SiloMonitorLock);
    KeAbPostRelease((ULONG_PTR)&SiloMonitorLock);
    v23 = KeGetCurrentThread();
    v24 = v23->KernelApcDisable + 1;
    v23->KernelApcDisable = v24;
    if ( !v24
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v23->ApcState.ApcListHead[0].Flink != &v23->152
      && !v23->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    ExFreePoolWithTag(v12, 0x4D6C6953u);
    return 3221225507LL;
  }
  else
  {
    *((_DWORD *)v12 + 30) = ClearBitsAndSet;
    if ( Object )
    {
      ObfReferenceObject(Object);
      v12[14] = Object;
      *((_BYTE *)v12 + 124) = 1;
      *((_OWORD *)v12 + 6) = *(_OWORD *)(Object + 56);
    }
    else
    {
      *((_BYTE *)v12 + 124) = 0;
      v12[13] = v12 + 16;
      *((_WORD *)v12 + 48) = v10;
      *((_WORD *)v12 + 49) = v10;
      memmove(v12 + 16, Src, v10);
    }
    *((_DWORD *)v12 + 10) = 1;
    v12[6] = 0LL;
    PspReferenceMonitorServerSilo(v12);
    v19 = (__int64 **)qword_14032C4A8;
    *v12 = &SiloMonitorList;
    v12[1] = v19;
    if ( *v19 != &SiloMonitorList )
      __fastfail(3u);
    *v19 = v12;
    qword_14032C4A8 = (__int64)v12;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&SiloMonitorLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&SiloMonitorLock);
    KeAbPostRelease((ULONG_PTR)&SiloMonitorLock);
    v20 = KeGetCurrentThread();
    v21 = v20->KernelApcDisable + 1;
    v20->KernelApcDisable = v21;
    if ( !v21
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v20->ApcState.ApcListHead[0].Flink != &v20->152
      && !v20->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    *a4 = v12;
    return 0LL;
  }
}
