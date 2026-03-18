/*
 * XREFs of PopFxDeviceAccountingWatchdog @ 0x140237B18
 * Callers:
 *     PopDripsWatchdogTakeAction @ 0x1406BD01C (PopDripsWatchdogTakeAction.c)
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

void __fastcall PopFxDeviceAccountingWatchdog(unsigned __int64 a1, ULONG_PTR *a2, unsigned int *a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rbx
  __int64 v9; // r9
  __int64 v10; // r12
  ULONG_PTR i; // rdi
  volatile signed __int32 *v12; // rbx
  unsigned __int8 CurrentIrql; // si
  unsigned int v14; // esi
  __int64 v15; // rbx
  unsigned __int8 v16; // bp
  bool v17; // zf
  struct _KTHREAD *v18; // rcx
  __int16 v19; // ax
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( PopFxDeviceAccountingLevel )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v8 = KeAbPreAcquire((ULONG_PTR)&PopFxDeviceListLock, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&PopFxDeviceListLock, v8, (ULONG_PTR)&PopFxDeviceListLock, v9);
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    v10 = MEMORY[0xFFFFF78000000008];
    for ( i = PopFxDeviceList; (ULONG_PTR *)i != &PopFxDeviceList; i = *(_QWORD *)i )
    {
      if ( *(_QWORD *)(i + 48) )
      {
        if ( PopFxDeviceAccountingLevel < 0 )
        {
          v12 = (volatile signed __int32 *)(i + 568);
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            KiAcquireSpinLockInstrumented((volatile signed __int32 *)(i + 568));
          }
          else if ( _interlockedbittestandset64(v12, 0LL) )
          {
            KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(i + 568));
          }
          if ( ((PopFxDeviceAccountingLevel & 1) != 0 || !PopFxDeviceAccountingPaused)
            && *(_BYTE *)(i + 576)
            && v10 - *(_QWORD *)(i + 592) >= a1 )
          {
            *a3 = -1;
            v17 = (BYTE6(PerfGlobalGroupMask) & 1) == 0;
            *a2 = i;
            if ( v17 )
              _InterlockedAnd64((volatile signed __int64 *)v12, 0LL);
            else
              KiReleaseSpinLockInstrumented((volatile signed __int64 *)(i + 568), retaddr);
            __writecr8(CurrentIrql);
            break;
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            KiReleaseSpinLockInstrumented((volatile signed __int64 *)(i + 568), retaddr);
          else
            _InterlockedAnd64((volatile signed __int64 *)v12, 0LL);
          __writecr8(CurrentIrql);
        }
        v14 = 0;
        if ( *(_DWORD *)(i + 620) )
        {
          while ( 1 )
          {
            v15 = *(_QWORD *)(*(_QWORD *)(i + 624) + 8LL * v14) + 200LL;
            v16 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              KiAcquireSpinLockInstrumented((volatile signed __int32 *)v15);
            }
            else if ( _interlockedbittestandset64((volatile signed __int32 *)v15, 0LL) )
            {
              KxWaitForSpinLockAndAcquire((volatile signed __int32 *)v15);
            }
            if ( ((PopFxDeviceAccountingLevel & 1) != 0 || !PopFxDeviceAccountingPaused)
              && *(_BYTE *)(v15 + 8)
              && v10 - *(_QWORD *)(v15 + 24) >= a1 )
            {
              break;
            }
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
              KiReleaseSpinLockInstrumented((volatile signed __int64 *)v15, retaddr);
            else
              _InterlockedAnd64((volatile signed __int64 *)v15, 0LL);
            __writecr8(v16);
            if ( ++v14 >= *(_DWORD *)(i + 620) )
              goto LABEL_35;
          }
          v17 = (BYTE6(PerfGlobalGroupMask) & 1) == 0;
          *a2 = i;
          *a3 = v14;
          if ( v17 )
            _InterlockedAnd64((volatile signed __int64 *)v15, 0LL);
          else
            KiReleaseSpinLockInstrumented((volatile signed __int64 *)v15, retaddr);
          __writecr8(v16);
          break;
        }
      }
LABEL_35:
      ;
    }
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
}
