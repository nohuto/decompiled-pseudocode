/*
 * XREFs of ExpUpdateTimerConfigurationWorker @ 0x14009DDD0
 * Callers:
 *     <none>
 * Callees:
 *     KiSendClockInterruptToClockOwner @ 0x14009DE7C (KiSendClockInterruptToClockOwner.c)
 *     KiSetClockInterval @ 0x14009DEE4 (KiSetClockInterval.c)
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetTimeAdjustment @ 0x140133DCC (KeSetTimeAdjustment.c)
 */

__int64 __fastcall ExpUpdateTimerConfigurationWorker(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  KIRQL v4; // si
  unsigned int *v5; // rax
  char *v6; // rax
  __int64 result; // rax
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx

  v4 = KeAcquireSpinLockRaiseToDpc(&ExpKernelResolutionLock);
  __writecr8(0xFuLL);
  *(_DWORD *)(a2 + 24) = 0;
  if ( *(_QWORD *)a2 )
  {
    LOBYTE(v3) = 1;
    v8 = KiSetClockInterval((unsigned int)ExpLastRequestedTime, v3, &ExpClockIntervalRequest);
    KiSendClockInterruptToClockOwner(v10, v9);
    **(_DWORD **)a2 = v8;
  }
  KeReleaseSpinLock(&ExpKernelResolutionLock, 0xFu);
  v5 = *(unsigned int **)(a2 + 8);
  if ( v5 )
    *(_DWORD *)(a2 + 24) = KeSetTimeAdjustment(*v5);
  v6 = *(char **)(a2 + 16);
  if ( v6 )
    KeTimeSynchronization = *v6;
  result = v4;
  __writecr8(v4);
  return result;
}
