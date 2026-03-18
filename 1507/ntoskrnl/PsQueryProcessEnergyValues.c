/*
 * XREFs of PsQueryProcessEnergyValues @ 0x1406BFAB8
 * Callers:
 *     PspFoldProcessAccountingIntoJob @ 0x140506568 (PspFoldProcessAccountingIntoJob.c)
 *     PspQueryProcessAccountingInformationCallback @ 0x14054B990 (PspQueryProcessAccountingInformationCallback.c)
 * Callees:
 *     PoEnergyEstimationEnabled @ 0x140021210 (PoEnergyEstimationEnabled.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     memset @ 0x140195A80 (memset.c)
 */

void __fastcall PsQueryProcessEnergyValues(unsigned __int64 *a1, __int64 a2)
{
  __int64 v4; // r9
  struct _KTHREAD *CurrentThread; // rdi
  signed __int64 *v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // r9
  unsigned __int64 v9; // r8
  _QWORD *v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  _QWORD *v15; // r14
  _QWORD *i; // rdx
  _QWORD *v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r10
  __int64 v20; // r9
  __int16 v21; // ax

  if ( !PoEnergyEstimationEnabled() || a1 == PsIdleProcess )
  {
    memset((void *)a2, 0, 0x90uLL);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v6 = (signed __int64 *)(a1 + 211);
    v7 = KeAbPreAcquire((ULONG_PTR)(a1 + 211), 0LL, 0LL, v4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)a1 + 211, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(a1 + 211, v7, (ULONG_PTR)(a1 + 211), v8);
    if ( v7 )
      *(_BYTE *)(v7 + 26) |= 1u;
    v9 = a1[227];
    v10 = (_QWORD *)a2;
    v11 = 4LL;
    *(_QWORD *)(a2 + 64) = *(_QWORD *)(v9 + 64);
    *(_QWORD *)(a2 + 72) = *(_QWORD *)(v9 + 72);
    *(_QWORD *)(a2 + 80) = *(_QWORD *)(v9 + 80);
    *(_QWORD *)(a2 + 88) = *(_QWORD *)(v9 + 88);
    *(_QWORD *)(a2 + 96) = *(_QWORD *)(v9 + 96);
    *(_DWORD *)(a2 + 104) = *(_DWORD *)(v9 + 104);
    *(_DWORD *)(a2 + 108) = *(_DWORD *)(v9 + 108);
    *(_QWORD *)(a2 + 112) = *(_QWORD *)(v9 + 112);
    *(_QWORD *)(a2 + 120) = *(_QWORD *)(v9 + 120);
    *(_QWORD *)(a2 + 128) = *(_QWORD *)(v9 + 128);
    v12 = *(_QWORD *)(v9 + 136);
    v13 = v9 - a2;
    *(_QWORD *)(a2 + 136) = v12;
    do
    {
      v14 = 2LL;
      do
      {
        *v10 = *(_QWORD *)((char *)v10 + v13);
        ++v10;
        --v14;
      }
      while ( v14 );
      --v11;
    }
    while ( v11 );
    v15 = a1 + 144;
    for ( i = (_QWORD *)*v15; i != v15; i = (_QWORD *)*i )
    {
      v17 = (_QWORD *)a2;
      v18 = i[34] - a2;
      v19 = 4LL;
      do
      {
        v20 = 2LL;
        do
        {
          *v17 += *(_QWORD *)((char *)v17 + v18);
          ++v17;
          --v20;
        }
        while ( v20 );
        --v19;
      }
      while ( v19 );
    }
    if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v6);
    KeAbPostRelease((ULONG_PTR)v6);
    v21 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v21;
    if ( !v21
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
}
