/*
 * XREFs of PopFxCaptureDeviceAccounting @ 0x1401E993C
 * Callers:
 *     PopForceCompleteSleepStudySession @ 0x14011A0AC (PopForceCompleteSleepStudySession.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PopDiagTraceFxDeviceAccounting @ 0x1401EFB50 (PopDiagTraceFxDeviceAccounting.c)
 *     PopDiagTraceFxComponentAccounting @ 0x140639094 (PopDiagTraceFxComponentAccounting.c)
 */

__int64 PopFxCaptureDeviceAccounting()
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // rbx
  unsigned __int64 v3; // rbp
  ULONG_PTR i; // rbx
  __int64 v5; // r14
  KIRQL v6; // dl
  __int64 v7; // rsi
  unsigned __int64 v8; // rcx
  unsigned int j; // r15d
  __int64 v10; // r13
  KIRQL v11; // dl
  __int64 v12; // rdi
  unsigned __int64 v13; // rcx

  result = (unsigned int)PopFxDeviceAccountingLevel;
  if ( PopFxDeviceAccountingLevel )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v2 = KeAbPreAcquire((ULONG_PTR)&PopFxDeviceListLock, 0LL, 0LL);
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
          v7 = *(_QWORD *)(i + 600);
          if ( (PopFxDeviceAccountingLevel & 1) != 0 || !PopFxDeviceAccountingPaused )
          {
            v7 += *(_QWORD *)(i + 608);
            v8 = *(_QWORD *)(i + 592);
            if ( *(_BYTE *)(i + 576) )
            {
              if ( v3 > v8 )
                v7 += v3 - v8;
            }
          }
          KeReleaseSpinLock((PKSPIN_LOCK)(i + 568), v6);
          PopDiagTraceFxDeviceAccounting(v5, v7);
        }
        for ( j = 0; j < *(_DWORD *)(i + 620); ++j )
        {
          v10 = *(_QWORD *)(*(_QWORD *)(i + 624) + 8LL * j);
          v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 200));
          v12 = *(_QWORD *)(v10 + 232);
          if ( (PopFxDeviceAccountingLevel & 1) != 0 || !PopFxDeviceAccountingPaused )
          {
            v12 += *(_QWORD *)(v10 + 240);
            v13 = *(_QWORD *)(v10 + 224);
            if ( *(_BYTE *)(v10 + 208) )
            {
              if ( v3 > v13 )
                v12 += v3 - v13;
            }
          }
          KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 200), v11);
          PopDiagTraceFxComponentAccounting(v5, *(unsigned int *)(v10 + 16), v12);
        }
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
    return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return result;
}
