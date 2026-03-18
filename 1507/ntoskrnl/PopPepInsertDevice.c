/*
 * XREFs of PopPepInsertDevice @ 0x140166E10
 * Callers:
 *     PopPepRegisterDevice @ 0x1405AD2D0 (PopPepRegisterDevice.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

void __fastcall PopPepInsertDevice(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdi
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // r9
  signed __int8 v10; // cf
  __int64 v11; // rdi
  __int64 **v12; // rax
  struct _KTHREAD *v13; // rcx
  __int16 v14; // ax

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
  if ( PopPepLastCheckedDevice == &PopPepDeviceList )
    PopPepLastCheckedDevice = a2;
  v12 = (__int64 **)qword_14032DD38;
  *a2 = (__int64)&PopPepDeviceList;
  a2[1] = (__int64)v12;
  if ( *v12 != &PopPepDeviceList )
    __fastfail(3u);
  *v12 = a2;
  qword_14032DD38 = (__int64)a2;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPepDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopPepDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepVetoMaskReadyLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopPepVetoMaskReadyLock);
  KeAbPostRelease((ULONG_PTR)&PopPepVetoMaskReadyLock);
  v13 = KeGetCurrentThread();
  v14 = v13->KernelApcDisable + 1;
  v13->KernelApcDisable = v14;
  if ( !v14
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v13->ApcState.ApcListHead[0].Flink != &v13->152
    && !v13->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
