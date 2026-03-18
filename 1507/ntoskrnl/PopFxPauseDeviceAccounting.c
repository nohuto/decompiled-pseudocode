/*
 * XREFs of PopFxPauseDeviceAccounting @ 0x14023835C
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1406B7540 (PdcPoCurrentPdcPhase.c)
 *     PdcPoResiliencyClient @ 0x1406B76EC (PdcPoResiliencyClient.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

void __fastcall PopFxPauseDeviceAccounting(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rbx
  __int64 v6; // r9
  unsigned __int64 v7; // rbp
  ULONG_PTR i; // rdi
  volatile signed __int32 *v9; // rbx
  unsigned __int8 CurrentIrql; // si
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned int j; // esi
  __int64 v14; // rbx
  unsigned __int8 v15; // r14
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  struct _KTHREAD *v18; // rcx
  __int16 v19; // ax
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((ULONG_PTR)&PopFxDeviceListLock, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&PopFxDeviceListLock, v5, (ULONG_PTR)&PopFxDeviceListLock, v6);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  v7 = MEMORY[0xFFFFF78000000008];
  for ( i = PopFxDeviceList; (ULONG_PTR *)i != &PopFxDeviceList; i = *(_QWORD *)i )
  {
    if ( *(_QWORD *)(i + 48) )
    {
      if ( PopFxDeviceAccountingLevel < 0 )
      {
        v9 = (volatile signed __int32 *)(i + 568);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireSpinLockInstrumented((volatile signed __int32 *)(i + 568));
        }
        else if ( _interlockedbittestandset64(v9, 0LL) )
        {
          KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(i + 568));
        }
        v11 = *(_QWORD *)(i + 608);
        v12 = *(_QWORD *)(i + 592);
        if ( *(_BYTE *)(i + 576) && v7 > v12 )
          v11 += v7 - v12;
        *(_QWORD *)(i + 600) += v11;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented((volatile signed __int64 *)(i + 568), retaddr);
        else
          _InterlockedAnd64((volatile signed __int64 *)v9, 0LL);
        __writecr8(CurrentIrql);
      }
      for ( j = 0; j < *(_DWORD *)(i + 620); ++j )
      {
        v14 = *(_QWORD *)(*(_QWORD *)(i + 624) + 8LL * j) + 200LL;
        v15 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireSpinLockInstrumented((volatile signed __int32 *)v14);
        }
        else if ( _interlockedbittestandset64((volatile signed __int32 *)v14, 0LL) )
        {
          KxWaitForSpinLockAndAcquire((volatile signed __int32 *)v14);
        }
        v16 = *(_QWORD *)(v14 + 40);
        v17 = *(_QWORD *)(v14 + 24);
        if ( *(_BYTE *)(v14 + 8) && v7 > v17 )
          v16 += v7 - v17;
        *(_QWORD *)(v14 + 32) += v16;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented((volatile signed __int64 *)v14, retaddr);
        else
          _InterlockedAnd64((volatile signed __int64 *)v14, 0LL);
        __writecr8(v15);
      }
    }
  }
  PopFxDeviceAccountingPaused = 1;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  v18 = KeGetCurrentThread();
  v19 = v18->KernelApcDisable + 1;
  v18->KernelApcDisable = v19;
  if ( !v19
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v18->ApcState.ApcListHead[0].Flink != &v18->152
    && !v18->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
