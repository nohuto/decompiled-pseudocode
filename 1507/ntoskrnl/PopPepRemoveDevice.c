/*
 * XREFs of PopPepRemoveDevice @ 0x14023C408
 * Callers:
 *     PopPepUnregisterDevice @ 0x1406B72FC (PopPepUnregisterDevice.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

void __fastcall PopPepRemoveDevice(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rsi
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // r9
  signed __int8 v10; // cf
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 *v13; // rax
  struct _KTHREAD *v14; // rcx
  __int16 v15; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire((ULONG_PTR)&PopPepVetoMaskReadyLock, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepVetoMaskReadyLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&PopPepVetoMaskReadyLock, v6, (ULONG_PTR)&PopPepVetoMaskReadyLock, v7);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  v8 = KeAbPreAcquire((ULONG_PTR)&PopPepDeviceListLock, 0LL, 0LL, v7);
  v10 = _interlockedbittestandset64((volatile signed __int32 *)&PopPepDeviceListLock, 0LL);
  v11 = v8;
  if ( v10 )
    ExfAcquirePushLockExclusiveEx(&PopPepDeviceListLock, v8, (ULONG_PTR)&PopPepDeviceListLock, v9);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  if ( PopPepLastCheckedDevice == a1 )
    PopPepLastCheckedDevice = (__int64 *)*a1;
  v12 = *a1;
  v13 = (__int64 *)a1[1];
  if ( *(__int64 **)(*a1 + 8) != a1 || (__int64 *)*v13 != a1 )
    __fastfail(3u);
  *v13 = v12;
  *(_QWORD *)(v12 + 8) = v13;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPepDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopPepDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepVetoMaskReadyLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopPepVetoMaskReadyLock);
  KeAbPostRelease((ULONG_PTR)&PopPepVetoMaskReadyLock);
  v14 = KeGetCurrentThread();
  v15 = v14->KernelApcDisable + 1;
  v14->KernelApcDisable = v15;
  if ( !v15
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v14->ApcState.ApcListHead[0].Flink != &v14->152
    && !v14->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
