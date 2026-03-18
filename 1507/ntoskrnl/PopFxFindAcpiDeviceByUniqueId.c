/*
 * XREFs of PopFxFindAcpiDeviceByUniqueId @ 0x1401671BC
 * Callers:
 *     PopFxAcpiPrepareDevice @ 0x140242EA8 (PopFxAcpiPrepareDevice.c)
 *     PopFxFindDeviceAndAllocateUniqueId @ 0x140461BC4 (PopFxFindDeviceAndAllocateUniqueId.c)
 *     PopFxRegisterDeviceWorker @ 0x1405AC9D0 (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x14002782C (IoAcquireRemoveLockEx.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     RtlCompareUnicodeString @ 0x14043A4D0 (RtlCompareUnicodeString.c)
 */

__int64 __fastcall PopFxFindAcpiDeviceByUniqueId(PCUNICODE_STRING String2, __int64 **a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v7; // rsi
  bool v8; // bp
  NTSTATUS v9; // edi
  __int64 v10; // rbx
  __int64 v11; // r9
  __int64 *i; // rbx
  struct _KTHREAD *v13; // rcx
  __int16 v14; // ax

  CurrentThread = KeGetCurrentThread();
  v7 = 0LL;
  v8 = a2 != 0LL;
  v9 = -1073741275;
  --CurrentThread->KernelApcDisable;
  v10 = KeAbPreAcquire((ULONG_PTR)&PopFxDeviceListLock, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&PopFxDeviceListLock, v10, (ULONG_PTR)&PopFxDeviceListLock, v11);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  for ( i = (__int64 *)PopFxAcpiDeviceList; i != &PopFxAcpiDeviceList; i = (__int64 *)*i )
  {
    v7 = i - 22;
    if ( i[3] && !RtlCompareUnicodeString((PCUNICODE_STRING)v7 + 12, String2, 0) )
    {
      if ( v8 )
        v9 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v7 + 30), (PVOID)0x66466F50, &File, 1u, 0x20u);
      else
        v9 = 0;
      break;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  v13 = KeGetCurrentThread();
  v14 = v13->KernelApcDisable + 1;
  v13->KernelApcDisable = v14;
  if ( !v14
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v13->ApcState.ApcListHead[0].Flink != &v13->152
    && !v13->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( v9 >= 0 && v8 )
    *a2 = v7;
  return (unsigned int)v9;
}
