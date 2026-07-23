/*
 * XREFs of PopFxDeviceAccountingWatchdog @ 0x140202778
 * Callers:
 *     PopDripsWatchdogTakeAction @ 0x1406752EC (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall PopFxDeviceAccountingWatchdog(unsigned __int64 a1, ULONG_PTR *a2, unsigned int *a3)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rbx
  __int64 v9; // rbp
  ULONG_PTR i; // rbx
  __int64 v11; // rdi
  KIRQL v12; // al
  unsigned int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9

  result = (unsigned int)PopFxDeviceAccountingLevel;
  if ( PopFxDeviceAccountingLevel )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v8 = KeAbPreAcquire((ULONG_PTR)&PopFxDeviceListLock, 0LL, 0);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&PopFxDeviceListLock, v8, (ULONG_PTR)&PopFxDeviceListLock);
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    v9 = MEMORY[0xFFFFF78000000008];
    for ( i = PopFxDeviceList; (ULONG_PTR *)i != &PopFxDeviceList; i = *(_QWORD *)i )
    {
      if ( *(_QWORD *)(i + 48) )
      {
        if ( PopFxDeviceAccountingLevel < 0 )
        {
          v11 = i + 568;
          v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(i + 568));
          if ( ((PopFxDeviceAccountingLevel & 1) != 0 || !PopFxDeviceAccountingPaused)
            && *(_BYTE *)(i + 576)
            && v9 - *(_QWORD *)(i + 592) >= a1 )
          {
            *a3 = -1;
LABEL_25:
            *a2 = i;
            KeReleaseSpinLock((PKSPIN_LOCK)v11, v12);
            break;
          }
          KeReleaseSpinLock((PKSPIN_LOCK)(i + 568), v12);
        }
        v13 = 0;
        if ( *(_DWORD *)(i + 620) )
        {
          while ( 1 )
          {
            v11 = *(_QWORD *)(*(_QWORD *)(i + 624) + 8LL * v13) + 200LL;
            v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v11);
            if ( ((PopFxDeviceAccountingLevel & 1) != 0 || !PopFxDeviceAccountingPaused)
              && *(_BYTE *)(v11 + 8)
              && v9 - *(_QWORD *)(v11 + 24) >= a1 )
            {
              break;
            }
            KeReleaseSpinLock((PKSPIN_LOCK)v11, v12);
            if ( ++v13 >= *(_DWORD *)(i + 620) )
              goto LABEL_20;
          }
          *a3 = v13;
          goto LABEL_25;
        }
      }
LABEL_20:
      ;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
    return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v14, v15, v16);
  }
  return result;
}
