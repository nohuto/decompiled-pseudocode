/*
 * XREFs of PsUpdateActiveProcessAffinity @ 0x14067D654
 * Callers:
 *     KeStartDynamicProcessor @ 0x14064FB2C (KeStartDynamicProcessor.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     KeIsSubsetAffinityEx @ 0x1401D3D04 (KeIsSubsetAffinityEx.c)
 *     PsGetNextProcess @ 0x1404EBF8C (PsGetNextProcess.c)
 *     PspUpdateSingleProcessAffinity @ 0x14067DE70 (PspUpdateSingleProcessAffinity.c)
 */

__int64 PsUpdateActiveProcessAffinity()
{
  struct _KTHREAD *CurrentThread; // rsi
  _BYTE *v1; // rax
  signed __int8 v2; // cf
  _BYTE *v3; // rdi
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int64 v12; // rax
  _QWORD *v13; // rcx
  unsigned __int64 NextProcess; // rax
  _QWORD *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&PspAffinityUpdateLock, 0LL, 0);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&PspAffinityUpdateLock, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&PspAffinityUpdateLock, v1, (ULONG_PTR)&PspAffinityUpdateLock);
  if ( v3 )
    v3[26] |= 1u;
  if ( !(unsigned int)KeIsSubsetAffinityEx((__int16 *)KeActiveProcessors, PspLastUpdateAffinityMask) )
  {
    v4 = *(_OWORD *)&KeActiveProcessors[4];
    *(_OWORD *)PspLastUpdateAffinityMask = *(_OWORD *)KeActiveProcessors;
    v5 = *(_OWORD *)&KeActiveProcessors[8];
    *(_OWORD *)&PspLastUpdateAffinityMask[8] = v4;
    v6 = *(_OWORD *)&KeActiveProcessors[12];
    *(_OWORD *)&PspLastUpdateAffinityMask[16] = v5;
    v7 = *(_OWORD *)&KeActiveProcessors[16];
    *(_OWORD *)&PspLastUpdateAffinityMask[24] = v6;
    v8 = *(_OWORD *)&KeActiveProcessors[20];
    *(_OWORD *)&PspLastUpdateAffinityMask[32] = v7;
    v9 = *(_OWORD *)&KeActiveProcessors[24];
    *(_OWORD *)&PspLastUpdateAffinityMask[40] = v8;
    v10 = *(_OWORD *)&KeActiveProcessors[32];
    *(_OWORD *)&PspLastUpdateAffinityMask[48] = v9;
    *(_OWORD *)&PspLastUpdateAffinityMask[56] = *(_OWORD *)&KeActiveProcessors[28];
    v11 = *(_OWORD *)&KeActiveProcessors[36];
    v12 = *(_QWORD *)&KeActiveProcessors[40];
    v13 = 0LL;
    *(_OWORD *)&PspLastUpdateAffinityMask[64] = v10;
    *(_OWORD *)&PspLastUpdateAffinityMask[72] = v11;
    *(_QWORD *)&PspLastUpdateAffinityMask[80] = v12;
    while ( 1 )
    {
      NextProcess = PsGetNextProcess(v13);
      v15 = (_QWORD *)NextProcess;
      if ( !NextProcess )
        break;
      PspUpdateSingleProcessAffinity(CurrentThread, NextProcess, KeActiveProcessors);
      v13 = v15;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspAffinityUpdateLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspAffinityUpdateLock);
  KeAbPostRelease((ULONG_PTR)&PspAffinityUpdateLock);
  return KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v16, v17, v18);
}
