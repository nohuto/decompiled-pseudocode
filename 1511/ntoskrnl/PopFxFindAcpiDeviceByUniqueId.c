/*
 * XREFs of PopFxFindAcpiDeviceByUniqueId @ 0x1401302E0
 * Callers:
 *     PopFxAcpiPrepareDevice @ 0x1401F4B44 (PopFxAcpiPrepareDevice.c)
 *     PopFxFindDeviceAndAllocateUniqueId @ 0x1404F2B84 (PopFxFindDeviceAndAllocateUniqueId.c)
 *     PopFxRegisterDeviceWorker @ 0x14051BB30 (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     IoAcquireRemoveLockEx @ 0x1400DAFE0 (IoAcquireRemoveLockEx.c)
 *     RtlCompareUnicodeString @ 0x14043D980 (RtlCompareUnicodeString.c)
 */

__int64 __fastcall PopFxFindAcpiDeviceByUniqueId(PCUNICODE_STRING String2, __int64 **a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v5; // rdi
  bool v6; // bp
  NTSTATUS v7; // esi
  __int64 v8; // rbx
  __int64 *i; // rbx

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  v6 = a2 != 0LL;
  v7 = -1073741275;
  --CurrentThread->KernelApcDisable;
  v8 = KeAbPreAcquire((ULONG_PTR)&PopFxDeviceListLock, 0LL, 0LL);
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
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v7 >= 0 && v6 )
    *a2 = v5;
  return (unsigned int)v7;
}
