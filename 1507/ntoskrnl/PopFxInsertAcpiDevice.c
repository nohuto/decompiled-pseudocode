/*
 * XREFs of PopFxInsertAcpiDevice @ 0x14023804C
 * Callers:
 *     PopFxAcpiRegisterDevice @ 0x140243010 (PopFxAcpiRegisterDevice.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

void __fastcall PopFxInsertAcpiDevice(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rax
  __int64 v7; // r9
  signed __int8 v8; // cf
  __int64 v9; // rdi
  __int64 **v10; // rcx
  struct _KTHREAD *v11; // rcx
  __int16 v12; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire((ULONG_PTR)&PopFxDeviceListLock, 0LL, 0LL, a4);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&PopFxDeviceListLock, 0LL);
  v9 = v6;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(&PopFxDeviceListLock, v6, (ULONG_PTR)&PopFxDeviceListLock, v7);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  v10 = (__int64 **)qword_14032F298;
  *(_QWORD *)(a3 + 184) = qword_14032F298;
  *(_QWORD *)(a3 + 176) = &PopFxAcpiDeviceList;
  if ( *v10 != &PopFxAcpiDeviceList )
    __fastfail(3u);
  *v10 = (__int64 *)(a3 + 176);
  qword_14032F298 = a3 + 176;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  v11 = KeGetCurrentThread();
  v12 = v11->KernelApcDisable + 1;
  v11->KernelApcDisable = v12;
  if ( !v12
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v11->ApcState.ApcListHead[0].Flink != &v11->152
    && !v11->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
