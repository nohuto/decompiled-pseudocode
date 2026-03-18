/*
 * XREFs of PsRegisterMonitorServerSilo @ 0x140526694
 * Callers:
 *     SepInitializationPhase1 @ 0x1405262AC (SepInitializationPhase1.c)
 *     CmpInitServerSilo @ 0x140526568 (CmpInitServerSilo.c)
 *     EtwpInitialize @ 0x140757334 (EtwpInitialize.c)
 *     ObInitSystem @ 0x140758E84 (ObInitSystem.c)
 *     ExpInitSystemPhase1 @ 0x140759698 (ExpInitSystemPhase1.c)
 *     SeRmInitPhase1 @ 0x140762928 (SeRmInitPhase1.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x140006F80 (RtlFindClearBitsAndSet.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140079E5C (PsIsCurrentThreadInServerSilo.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PspReferenceMonitorServerSilo @ 0x140526A0C (PspReferenceMonitorServerSilo.c)
 */

__int64 __fastcall PsRegisterMonitorServerSilo(char *Object, _WORD *Src, __int64 a3, _QWORD *a4)
{
  SIZE_T v8; // rdx
  __int64 v9; // rsi
  size_t v10; // rsi
  _QWORD *PoolWithTag; // rax
  _QWORD *v12; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // rax
  __int64 v15; // r14
  ULONG ClearBitsAndSet; // eax
  __int64 **v17; // rax
  __int64 result; // rax

  if ( !Object && (!Src || !*Src) || *(_WORD *)a3 != 1 )
    return 3221225485LL;
  if ( PsIsCurrentThreadInServerSilo() )
    return 3221225569LL;
  v8 = 112LL;
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
    v8 = v10 + 112;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v8, 0x4D6C6953u);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x70uLL);
  *((_DWORD *)v12 + 4) = 1298950483;
  *((_BYTE *)v12 + 109) = *(_BYTE *)(a3 + 2) & 1;
  v12[5] = *(_QWORD *)(a3 + 8);
  v12[6] = *(_QWORD *)(a3 + 16);
  v12[7] = *(_QWORD *)(a3 + 24);
  v12[8] = *(_QWORD *)(a3 + 32);
  v12[9] = *(_QWORD *)(a3 + 40);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v14 = KeAbPreAcquire((ULONG_PTR)&PspSiloMonitorLock, 0LL, 0LL);
  v15 = v14;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&PspSiloMonitorLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&PspSiloMonitorLock, v14, (ULONG_PTR)&PspSiloMonitorLock);
  if ( v15 )
    *(_BYTE *)(v15 + 26) |= 1u;
  ClearBitsAndSet = RtlFindClearBitsAndSet(&MonitorContextIndexBitmap, 1u, 0);
  if ( ClearBitsAndSet == -1 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspSiloMonitorLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PspSiloMonitorLock);
    KeAbPostRelease((ULONG_PTR)&PspSiloMonitorLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    ExFreePoolWithTag(v12, 0x4D6C6953u);
    return 3221225626LL;
  }
  *((_DWORD *)v12 + 26) = ClearBitsAndSet;
  if ( Object )
  {
    ObfReferenceObject(Object);
    v12[12] = Object;
    *((_BYTE *)v12 + 108) = 1;
    *((_OWORD *)v12 + 5) = *(_OWORD *)(Object + 56);
  }
  else
  {
    *((_BYTE *)v12 + 108) = 0;
    v12[11] = v12 + 14;
    *((_WORD *)v12 + 40) = v10;
    *((_WORD *)v12 + 41) = v10;
    memmove(v12 + 14, Src, v10);
  }
  *((_DWORD *)v12 + 6) = 1;
  v12[4] = 0LL;
  PspReferenceMonitorServerSilo(v12);
  v17 = (__int64 **)qword_1402DC108;
  *v12 = &PspSiloMonitorList;
  v12[1] = v17;
  if ( *v17 != &PspSiloMonitorList )
    __fastfail(3u);
  *v17 = v12;
  qword_1402DC108 = (__int64)v12;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspSiloMonitorLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspSiloMonitorLock);
  KeAbPostRelease((ULONG_PTR)&PspSiloMonitorLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  result = 0LL;
  *a4 = v12;
  return result;
}
