/*
 * XREFs of PsUpdateActiveProcessAffinity @ 0x1406BFE5C
 * Callers:
 *     KeStartDynamicProcessor @ 0x140698E60 (KeStartDynamicProcessor.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PsGetNextProcess @ 0x14050D584 (PsGetNextProcess.c)
 *     PspUpdateSingleProcessAffinity @ 0x1406C085C (PspUpdateSingleProcessAffinity.c)
 */

void __fastcall PsUpdateActiveProcessAffinity(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v5; // rax
  __int64 v6; // r9
  signed __int8 v7; // cf
  __int64 v8; // rsi
  __int64 v9; // r8
  unsigned __int16 v10; // ax
  unsigned __int16 i; // dx
  __int64 v12; // rcx
  __int64 v13; // rax
  int *v14; // r9
  __int64 v15; // rdx
  __int128 v16; // xmm1
  __int64 v17; // rax
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  _QWORD *v25; // rcx
  unsigned __int64 NextProcess; // rax
  _QWORD *v27; // rsi
  __int16 v28; // ax
  unsigned __int16 v29; // [rsp+20h] [rbp-D8h] BYREF
  unsigned __int16 v30; // [rsp+22h] [rbp-D6h]
  int v31; // [rsp+24h] [rbp-D4h]
  _QWORD v32[21]; // [rsp+28h] [rbp-D0h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((ULONG_PTR)&PspAffinityUpdateLock, 0LL, 0LL, a4);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&PspAffinityUpdateLock, 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&PspAffinityUpdateLock, v5, (ULONG_PTR)&PspAffinityUpdateLock, v6);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v9 = LOWORD(KeActiveProcessors[0]);
  v10 = PspLastUpdateAffinityMask[0];
  if ( LOWORD(KeActiveProcessors[0]) < (unsigned int)PspLastUpdateAffinityMask[0] )
    v10 = KeActiveProcessors[0];
  v29 = v10;
  for ( i = 0; i < v29; v10 = v29 )
  {
    v12 = i++;
    v32[v12] = *(_QWORD *)&KeActiveProcessors[2 * v12 + 2] & *(_QWORD *)&PspLastUpdateAffinityMask[4 * v12 + 4];
  }
  v31 = 0;
  v30 = 20;
  if ( i < 0x14u )
  {
    do
    {
      v13 = i++;
      v32[v13] = 0LL;
    }
    while ( i < v30 );
    v10 = v29;
  }
  if ( (unsigned __int16)v9 >= v10 )
  {
    v14 = KeActiveProcessors;
    v9 = v10;
  }
  else
  {
    v14 = (int *)&v29;
  }
  v15 = 0LL;
  if ( (_WORD)v9 )
  {
    while ( *(_QWORD *)&KeActiveProcessors[2 * (unsigned __int16)v15 + 2] == v32[(unsigned __int16)v15] )
    {
      LOWORD(v15) = v15 + 1;
      if ( (unsigned __int16)v15 >= (unsigned __int16)v9 )
        goto LABEL_21;
    }
LABEL_23:
    v16 = *(_OWORD *)&KeActiveProcessors[4];
    *(_OWORD *)PspLastUpdateAffinityMask = *(_OWORD *)KeActiveProcessors;
    v17 = *(_QWORD *)&KeActiveProcessors[40];
    v18 = *(_OWORD *)&KeActiveProcessors[8];
    *(_OWORD *)&PspLastUpdateAffinityMask[8] = v16;
    v19 = *(_OWORD *)&KeActiveProcessors[12];
    *(_OWORD *)&PspLastUpdateAffinityMask[16] = v18;
    v20 = *(_OWORD *)&KeActiveProcessors[16];
    *(_OWORD *)&PspLastUpdateAffinityMask[24] = v19;
    v21 = *(_OWORD *)&KeActiveProcessors[20];
    *(_OWORD *)&PspLastUpdateAffinityMask[32] = v20;
    v22 = *(_OWORD *)&KeActiveProcessors[24];
    *(_OWORD *)&PspLastUpdateAffinityMask[40] = v21;
    v23 = *(_OWORD *)&KeActiveProcessors[32];
    *(_OWORD *)&PspLastUpdateAffinityMask[48] = v22;
    *(_OWORD *)&PspLastUpdateAffinityMask[56] = *(_OWORD *)&KeActiveProcessors[28];
    v24 = *(_OWORD *)&KeActiveProcessors[36];
    v25 = 0LL;
    *(_OWORD *)&PspLastUpdateAffinityMask[64] = v23;
    *(_OWORD *)&PspLastUpdateAffinityMask[72] = v24;
    *(_QWORD *)&PspLastUpdateAffinityMask[80] = v17;
    while ( 1 )
    {
      NextProcess = PsGetNextProcess(v25, v15, v9, (__int64)v14);
      v27 = (_QWORD *)NextProcess;
      if ( !NextProcess )
        break;
      PspUpdateSingleProcessAffinity(CurrentThread, NextProcess, KeActiveProcessors);
      v25 = v27;
    }
  }
  else
  {
LABEL_21:
    while ( (unsigned __int16)v15 < *(_WORD *)v14 )
    {
      if ( *(_QWORD *)&v14[2 * (unsigned __int16)v15 + 2] )
        goto LABEL_23;
      LOWORD(v15) = v15 + 1;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspAffinityUpdateLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspAffinityUpdateLock);
  KeAbPostRelease((ULONG_PTR)&PspAffinityUpdateLock);
  v28 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v28;
  if ( !v28
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
