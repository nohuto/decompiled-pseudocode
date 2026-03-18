/*
 * XREFs of PopFxRemoveDevice @ 0x140238E00
 * Callers:
 *     PopFxUnregisterDevice @ 0x1406B4870 (PopFxUnregisterDevice.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

void __fastcall PopFxRemoveDevice(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rax
  __int64 v7; // r9
  signed __int8 v8; // cf
  __int64 v9; // rdi
  __int64 v10; // rdx
  _QWORD *v11; // rax
  struct _KTHREAD *v12; // rcx
  __int16 v13; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire((ULONG_PTR)&PopFxDeviceListLock, 0LL, 0LL, a4);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&PopFxDeviceListLock, 0LL);
  v9 = v6;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(&PopFxDeviceListLock, v6, (ULONG_PTR)&PopFxDeviceListLock, v7);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  v10 = *a2;
  v11 = (_QWORD *)a2[1];
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (_QWORD *)*v11 != a2 )
    __fastfail(3u);
  *v11 = v10;
  *(_QWORD *)(v10 + 8) = v11;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
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
