/*
 * XREFs of PopPepResetDeviceAccountingLevel @ 0x14023C580
 * Callers:
 *     PopPepInitializeVetoMasks @ 0x14023BA2C (PopPepInitializeVetoMasks.c)
 * Callees:
 *     PoFxIdleDevice @ 0x140026DEC (PoFxIdleDevice.c)
 *     PopFxActivateDevice @ 0x140026F98 (PopFxActivateDevice.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

void __fastcall PopPepResetDeviceAccountingLevel(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed __int32 v4; // eax
  struct _KTHREAD *CurrentThread; // rcx
  signed __int32 v6; // r12d
  __int64 v7; // rbx
  __int64 v8; // r9
  __int64 i; // rdi
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // r15
  volatile signed __int32 *v13; // rbx
  unsigned __int8 CurrentIrql; // si
  bool v15; // zf
  unsigned int j; // esi
  __int64 v17; // rbx
  unsigned __int8 v18; // r14
  struct _KTHREAD *v19; // rcx
  __int16 v20; // ax
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v4 = _InterlockedCompareExchange(&PopFxDeviceAccountingLevel, 0, 0);
  CurrentThread = KeGetCurrentThread();
  v6 = v4;
  --CurrentThread->KernelApcDisable;
  v7 = KeAbPreAcquire((ULONG_PTR)&PopPepDeviceListLock, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&PopPepDeviceListLock, v7, (ULONG_PTR)&PopPepDeviceListLock, v8);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  for ( i = PopPepDeviceList; (__int64 *)i != &PopPepDeviceList; i = *(_QWORD *)i )
  {
    v10 = *(_QWORD *)(i + 32);
    v11 = *(_QWORD *)(v10 + 48);
    if ( v11 )
    {
      v12 = *(_QWORD *)(v11 + 32);
      PopFxActivateDevice(v12, 0);
      v13 = (volatile signed __int32 *)(v10 + 568);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented((volatile signed __int32 *)(v10 + 568));
      }
      else if ( _interlockedbittestandset64(v13, 0LL) )
      {
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(v10 + 568));
      }
      v15 = *(_DWORD *)(v10 + 580) == 5;
      *(_DWORD *)(v10 + 584) = v6;
      *(_QWORD *)(v10 + 600) = 0LL;
      *(_QWORD *)(v10 + 608) = 0LL;
      if ( v15 )
      {
        *(_BYTE *)(v10 + 576) = 0;
        *(_QWORD *)(v10 + 592) = 0LL;
      }
      else
      {
        *(_BYTE *)(v10 + 576) = 1;
        *(_QWORD *)(v10 + 592) = MEMORY[0xFFFFF78000000008];
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented((volatile signed __int64 *)(v10 + 568), retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v13, 0LL);
      __writecr8(CurrentIrql);
      for ( j = 0; j < *(_DWORD *)(i + 168); ++j )
      {
        v17 = *(_QWORD *)(*(_QWORD *)(v10 + 624) + 8LL * j) + 200LL;
        v18 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireSpinLockInstrumented((volatile signed __int32 *)v17);
        }
        else if ( _interlockedbittestandset64((volatile signed __int32 *)v17, 0LL) )
        {
          KxWaitForSpinLockAndAcquire((volatile signed __int32 *)v17);
        }
        v15 = *(_DWORD *)(v17 + 12) == -1;
        *(_DWORD *)(v17 + 16) = v6;
        *(_QWORD *)(v17 + 32) = 0LL;
        *(_QWORD *)(v17 + 40) = 0LL;
        if ( v15 )
        {
          *(_BYTE *)(v17 + 8) = 0;
          *(_QWORD *)(v17 + 24) = 0LL;
        }
        else
        {
          *(_BYTE *)(v17 + 8) = 1;
          *(_QWORD *)(v17 + 24) = MEMORY[0xFFFFF78000000008];
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented((volatile signed __int64 *)v17, retaddr);
        else
          _InterlockedAnd64((volatile signed __int64 *)v17, 0LL);
        __writecr8(v18);
      }
      PoFxIdleDevice(v12);
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopPepDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
  v19 = KeGetCurrentThread();
  v20 = v19->KernelApcDisable + 1;
  v19->KernelApcDisable = v20;
  if ( !v20
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v19->ApcState.ApcListHead[0].Flink != &v19->152
    && !v19->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
