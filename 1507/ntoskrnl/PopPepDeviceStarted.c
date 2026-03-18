/*
 * XREFs of PopPepDeviceStarted @ 0x14016991C
 * Callers:
 *     PoFxStartDevicePowerManagement @ 0x140169748 (PoFxStartDevicePowerManagement.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     PopPepInitializeVetoMasks @ 0x14023BA2C (PopPepInitializeVetoMasks.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

void __fastcall PopPepDeviceStarted(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  volatile signed __int32 *v5; // rbx
  unsigned __int8 CurrentIrql; // bp
  unsigned int v7; // edi
  signed __int32 v8; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rbx
  __int64 v11; // r9
  struct _KTHREAD *v12; // rcx
  __int16 v13; // ax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v5 = (volatile signed __int32 *)(a1 + 64);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1 + 64);
  }
  else
  {
    v7 = 0;
    if ( _interlockedbittestandset(v5, 0x1Fu) )
      v7 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(a1 + 64));
    while ( 1 )
    {
      v8 = *v5;
      if ( (*v5 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v8 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v5, v8 | 0x40000000, v8);
      if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v7);
    }
  }
  *(_DWORD *)(a1 + 160) = 1;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v5, retaddr);
  else
    *v5 = 0;
  __writecr8(CurrentIrql);
  if ( *(_BYTE *)(a1 + 124) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v10 = KeAbPreAcquire((ULONG_PTR)&PopPepDeviceListLock, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&PopPepDeviceListLock, v10, (ULONG_PTR)&PopPepDeviceListLock, v11);
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
    if ( PopPepPlatformState )
      PopPepInitializeVetoMasks(a1, *(unsigned int *)PpmPlatformStates);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopPepDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
    v12 = KeGetCurrentThread();
    v13 = v12->KernelApcDisable + 1;
    v12->KernelApcDisable = v13;
    if ( !v13
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v12->ApcState.ApcListHead[0].Flink != &v12->152
      && !v12->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
}
