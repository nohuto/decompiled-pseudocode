/*
 * XREFs of PopFxSetDeviceAccountingCsPlatformState @ 0x14023914C
 * Callers:
 *     PopFxEnablePlatformStates @ 0x140237ED4 (PopFxEnablePlatformStates.c)
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
 *     PopPepGetMinimumComponentIdleState @ 0x14023B754 (PopPepGetMinimumComponentIdleState.c)
 *     PopPepGetMinimumDevicePowerState @ 0x14023B858 (PopPepGetMinimumDevicePowerState.c)
 */

void __fastcall PopFxSetDeviceAccountingCsPlatformState(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebp
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v7; // rbx
  __int64 v8; // r9
  ULONG_PTR v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r13
  char MinimumDevicePowerState; // si
  volatile signed __int32 *v13; // rbx
  unsigned __int8 CurrentIrql; // r14
  unsigned int v15; // esi
  __int64 v16; // rbx
  char MinimumComponentIdleState; // r14
  __int64 v18; // rbx
  unsigned __int8 v19; // r15
  struct _KTHREAD *v20; // rcx
  __int16 v21; // ax
  __int64 retaddr; // [rsp+58h] [rbp+0h]
  int v23; // [rsp+68h] [rbp+10h] BYREF
  __int64 v24; // [rsp+70h] [rbp+18h]

  v5 = _InterlockedCompareExchange(&PopFxDeviceAccountingLevel, 0, 0);
  if ( v5 <= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v7 = KeAbPreAcquire((ULONG_PTR)&PopFxDeviceListLock, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&PopFxDeviceListLock, v7, (ULONG_PTR)&PopFxDeviceListLock, v8);
    if ( v7 )
      *(_BYTE *)(v7 + 26) |= 1u;
    v9 = PopFxDeviceList;
    for ( PopFxDeviceAccountingVetoMask = 1 << a1; (ULONG_PTR *)v9 != &PopFxDeviceList; v9 = *(_QWORD *)v9 )
    {
      v10 = *(_QWORD *)(v9 + 48);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 32);
        v24 = v11;
        PopFxActivateDevice(v11, 0);
        MinimumDevicePowerState = PopPepGetMinimumDevicePowerState(*(_QWORD *)(v9 + 56), a1, &v23);
        v13 = (volatile signed __int32 *)(v9 + 568);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireSpinLockInstrumented((volatile signed __int32 *)(v9 + 568));
        }
        else if ( _interlockedbittestandset64(v13, 0LL) )
        {
          KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(v9 + 568));
        }
        *(_QWORD *)(v9 + 600) = 0LL;
        *(_QWORD *)(v9 + 608) = 0LL;
        *(_DWORD *)(v9 + 584) = v5;
        if ( MinimumDevicePowerState && v23 > 1 )
        {
          *(_DWORD *)(v9 + 580) = v23;
          *(_BYTE *)(v9 + 576) = 1;
          *(_QWORD *)(v9 + 592) = MEMORY[0xFFFFF78000000008];
        }
        else
        {
          *(_BYTE *)(v9 + 576) = 0;
          *(_QWORD *)(v9 + 592) = 0LL;
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented((volatile signed __int64 *)(v9 + 568), retaddr);
        else
          _InterlockedAnd64((volatile signed __int64 *)v13, 0LL);
        __writecr8(CurrentIrql);
        v15 = 0;
        if ( *(_DWORD *)(v9 + 620) )
        {
          do
          {
            v16 = *(_QWORD *)(*(_QWORD *)(v9 + 624) + 8LL * v15);
            MinimumComponentIdleState = PopPepGetMinimumComponentIdleState(*(_QWORD *)(v9 + 56), v15, a1, &v23);
            v18 = v16 + 200;
            v19 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              KiAcquireSpinLockInstrumented((volatile signed __int32 *)v18);
            }
            else if ( _interlockedbittestandset64((volatile signed __int32 *)v18, 0LL) )
            {
              KxWaitForSpinLockAndAcquire((volatile signed __int32 *)v18);
            }
            *(_DWORD *)(v18 + 16) = v5;
            *(_QWORD *)(v18 + 32) = 0LL;
            *(_QWORD *)(v18 + 40) = 0LL;
            if ( MinimumComponentIdleState && v23 )
            {
              *(_DWORD *)(v18 + 12) = v23;
              *(_BYTE *)(v18 + 8) = 1;
              *(_QWORD *)(v18 + 24) = MEMORY[0xFFFFF78000000008];
            }
            else
            {
              *(_BYTE *)(v18 + 8) = 0;
              *(_QWORD *)(v18 + 24) = 0LL;
            }
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
              KiReleaseSpinLockInstrumented((volatile signed __int64 *)v18, retaddr);
            else
              _InterlockedAnd64((volatile signed __int64 *)v18, 0LL);
            __writecr8(v19);
            ++v15;
          }
          while ( v15 < *(_DWORD *)(v9 + 620) );
          v11 = v24;
        }
        PoFxIdleDevice(v11);
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
    v20 = KeGetCurrentThread();
    v21 = v20->KernelApcDisable + 1;
    v20->KernelApcDisable = v21;
    if ( !v21
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v20->ApcState.ApcListHead[0].Flink != &v20->152
      && !v20->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
}
