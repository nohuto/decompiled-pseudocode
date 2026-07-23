/*
 * XREFs of PopFxStopDeviceAccounting @ 0x140203D7C
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
 *     PopDiagTraceFxDeviceAccounting @ 0x140208620 (PopDiagTraceFxDeviceAccounting.c)
 *     PopDiagTraceFxComponentAccounting @ 0x140671258 (PopDiagTraceFxComponentAccounting.c)
 */

__int64 PopFxStopDeviceAccounting()
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // rbx
  unsigned __int64 v3; // rsi
  ULONG_PTR i; // rbx
  __int64 v5; // rbp
  KIRQL v6; // al
  __int64 v7; // rdx
  unsigned __int64 v8; // r8
  unsigned int j; // r14d
  __int64 v10; // r15
  KIRQL v11; // al
  __int64 v12; // r8
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9

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
      v5 = *(_QWORD *)(i + 48);
      if ( v5 )
      {
        if ( PopFxDeviceAccountingLevel < 0 )
        {
          v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(i + 568));
          v7 = *(_QWORD *)(i + 608);
          if ( (PopFxDeviceAccountingLevel & 1) != 0 )
          {
            v8 = *(_QWORD *)(i + 592);
            if ( *(_BYTE *)(i + 576) && v3 > v8 )
              v7 += v3 - v8;
            *(_QWORD *)(i + 600) = v7;
          }
          KeReleaseSpinLock((PKSPIN_LOCK)(i + 568), v6);
          PopDiagTraceFxDeviceAccounting(v5, *(_QWORD *)(i + 600));
        }
        for ( j = 0; j < *(_DWORD *)(i + 620); ++j )
        {
          v10 = *(_QWORD *)(*(_QWORD *)(i + 624) + 8LL * j);
          v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 200));
          v12 = *(_QWORD *)(v10 + 240);
          if ( (PopFxDeviceAccountingLevel & 1) != 0 )
          {
            v13 = *(_QWORD *)(v10 + 224);
            if ( *(_BYTE *)(v10 + 208) && v3 > v13 )
              v12 += v3 - v13;
            *(_QWORD *)(v10 + 232) = v12;
          }
          KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 200), v11);
          PopDiagTraceFxComponentAccounting(v5, *(unsigned int *)(v10 + 16), *(_QWORD *)(v10 + 232));
        }
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
    return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v14, v15, v16);
  }
  return result;
}
