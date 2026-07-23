/*
 * XREFs of PopFxStartDeviceAccounting @ 0x140203BF8
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x14054849C (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 PopFxStartDeviceAccounting()
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // rbx
  __int64 v3; // rbp
  ULONG_PTR i; // rbx
  KIRQL v5; // al
  unsigned int j; // esi
  __int64 v7; // rdi
  KIRQL v8; // al
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9

  result = (unsigned int)PopFxDeviceAccountingLevel;
  if ( PopFxDeviceAccountingLevel )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v2 = KeAbPreAcquire((ULONG_PTR)&PopFxDeviceListLock, 0LL, 0);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&PopFxDeviceListLock, v2, (ULONG_PTR)&PopFxDeviceListLock);
    if ( v2 )
      *(_BYTE *)(v2 + 26) |= 1u;
    v3 = MEMORY[0xFFFFF78000000008];
    for ( i = PopFxDeviceList; (ULONG_PTR *)i != &PopFxDeviceList; i = *(_QWORD *)i )
    {
      if ( *(_QWORD *)(i + 48) )
      {
        if ( PopFxDeviceAccountingLevel < 0 )
        {
          v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(i + 568));
          *(_QWORD *)(i + 600) = 0LL;
          *(_QWORD *)(i + 608) = 0LL;
          if ( *(_BYTE *)(i + 576) )
            *(_QWORD *)(i + 592) = v3;
          KeReleaseSpinLock((PKSPIN_LOCK)(i + 568), v5);
        }
        for ( j = 0; j < *(_DWORD *)(i + 620); ++j )
        {
          v7 = *(_QWORD *)(*(_QWORD *)(i + 624) + 8LL * j) + 200LL;
          v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v7);
          *(_QWORD *)(v7 + 32) = 0LL;
          *(_QWORD *)(v7 + 40) = 0LL;
          if ( *(_BYTE *)(v7 + 8) )
            *(_QWORD *)(v7 + 24) = v3;
          KeReleaseSpinLock((PKSPIN_LOCK)v7, v8);
        }
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
    return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v9, v10, v11);
  }
  return result;
}
