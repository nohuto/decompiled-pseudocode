/*
 * XREFs of PopFxFindAndReferenceAcpiDevice @ 0x140237F18
 * Callers:
 *     PopFxAcpiForwardPepAcpiNotifyRequest @ 0x140242D14 (PopFxAcpiForwardPepAcpiNotifyRequest.c)
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x14002782C (IoAcquireRemoveLockEx.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall PopFxFindAndReferenceAcpiDevice(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v6; // edi
  __int64 v7; // rbx
  __int64 v8; // r9
  __int64 *i; // rax
  struct _KTHREAD *v10; // rcx
  __int16 v11; // ax

  CurrentThread = KeGetCurrentThread();
  v6 = -1073741810;
  --CurrentThread->KernelApcDisable;
  v7 = KeAbPreAcquire((ULONG_PTR)&PopFxDeviceListLock, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&PopFxDeviceListLock, v7, (ULONG_PTR)&PopFxDeviceListLock, v8);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  for ( i = (__int64 *)PopFxAcpiDeviceList; i != &PopFxAcpiDeviceList; i = (__int64 *)*i )
  {
    if ( i - 22 == a1 )
    {
      v6 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)i + 2, (PVOID)0x66466F50, &File, 1u, 0x20u);
      break;
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
  return v6;
}
