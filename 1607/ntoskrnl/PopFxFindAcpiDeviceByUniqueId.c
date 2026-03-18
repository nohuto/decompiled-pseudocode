/*
 * XREFs of PopFxFindAcpiDeviceByUniqueId @ 0x140142420
 * Callers:
 *     PopFxAcpiPrepareDevice @ 0x14020E608 (PopFxAcpiPrepareDevice.c)
 *     PopFxFindDeviceAndAllocateUniqueId @ 0x1404E2614 (PopFxFindDeviceAndAllocateUniqueId.c)
 *     PopFxRegisterDeviceWorker @ 0x140566D28 (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     IoAcquireRemoveLockEx @ 0x1400C1730 (IoAcquireRemoveLockEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C8280 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C8640 (ExfReleasePushLockShared.c)
 *     RtlCompareUnicodeString @ 0x1404FF850 (RtlCompareUnicodeString.c)
 */

__int64 __fastcall PopFxFindAcpiDeviceByUniqueId(PCUNICODE_STRING String2, __int64 **a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v5; // rdi
  bool v6; // bp
  NTSTATUS v7; // esi
  __int64 v8; // rbx
  __int64 *i; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  v6 = a2 != 0LL;
  v7 = -1073741275;
  --CurrentThread->KernelApcDisable;
  v8 = KeAbPreAcquire((ULONG_PTR)&PopFxDeviceListLock, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&PopFxDeviceListLock, v8, (ULONG_PTR)&PopFxDeviceListLock);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  for ( i = (__int64 *)PopFxAcpiDeviceList; i != &PopFxAcpiDeviceList; i = (__int64 *)*i )
  {
    v5 = i - 22;
    if ( i[3] && !RtlCompareUnicodeString((PCUNICODE_STRING)v5 + 12, String2, 0) )
    {
      if ( v6 )
        v7 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 30), (PVOID)0x66466F50, &File, 1u, 0x20u);
      else
        v7 = 0;
      break;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v10, v11, v12);
  if ( v7 >= 0 && v6 )
    *a2 = v5;
  return (unsigned int)v7;
}
