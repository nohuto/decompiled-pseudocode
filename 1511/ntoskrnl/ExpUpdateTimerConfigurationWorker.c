/*
 * XREFs of ExpUpdateTimerConfigurationWorker @ 0x1400EC220
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KiSetClockInterval @ 0x140032C70 (KiSetClockInterval.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSendClockInterruptToClockOwner @ 0x1400EC2C0 (KiSendClockInterruptToClockOwner.c)
 *     KeSetTimeAdjustment @ 0x1401C3FD8 (KeSetTimeAdjustment.c)
 */

__int64 __fastcall ExpUpdateTimerConfigurationWorker(__int64 a1, __int64 a2)
{
  KIRQL v3; // si
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int *v7; // rax
  char *v8; // rax
  __int64 result; // rax

  v3 = KeAcquireSpinLockRaiseToDpc(&ExpKernelResolutionLock);
  __writecr8(0xFuLL);
  *(_DWORD *)(a2 + 24) = 0;
  if ( *(_QWORD *)a2 )
  {
    v4 = KiSetClockInterval(ExpLastRequestedTime, (__int64)&ExpClockIntervalRequest);
    KiSendClockInterruptToClockOwner(v6, v5);
    **(_DWORD **)a2 = v4;
  }
  KeReleaseSpinLock(&ExpKernelResolutionLock, 0xFu);
  v7 = *(unsigned int **)(a2 + 8);
  if ( v7 )
    *(_DWORD *)(a2 + 24) = KeSetTimeAdjustment(*v7);
  v8 = *(char **)(a2 + 16);
  if ( v8 )
    KeTimeSynchronization = *v8;
  result = v3;
  __writecr8(v3);
  return result;
}
