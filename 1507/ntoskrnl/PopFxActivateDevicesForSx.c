/*
 * XREFs of PopFxActivateDevicesForSx @ 0x140149310
 * Callers:
 *     PopFxPrepareDevicesForShutdown @ 0x1402386A0 (PopFxPrepareDevicesForShutdown.c)
 *     PoBroadcastSystemState @ 0x1403EE2D4 (PoBroadcastSystemState.c)
 * Callees:
 *     PopFxActivateDevice @ 0x140026F98 (PopFxActivateDevice.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 */

void __fastcall PopFxActivateDevicesForSx(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rbx
  __int64 v7; // r9
  ULONG_PTR i; // rbx
  __int64 v9; // rdi
  struct _KTHREAD *v10; // rcx
  __int16 v11; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire((ULONG_PTR)&PopFxDeviceListLock, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&PopFxDeviceListLock, v6, (ULONG_PTR)&PopFxDeviceListLock, v7);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  for ( i = PopFxDeviceList; (ULONG_PTR *)i != &PopFxDeviceList; i = *(_QWORD *)i )
  {
    v9 = *(_QWORD *)(i + 48);
    if ( v9 && *(unsigned __int8 *)(v9 + 200) < a1 && (*(_DWORD *)(i + 616) & 1) == 0 )
    {
      PopFxActivateDevice(*(_QWORD *)(v9 + 32), 0);
      *(_DWORD *)(v9 + 296) |= 0x1000u;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  v10 = KeGetCurrentThread();
  v11 = v10->KernelApcDisable + 1;
  v10->KernelApcDisable = v11;
  if ( !v11
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v10->ApcState.ApcListHead[0].Flink != &v10->152
    && !v10->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
