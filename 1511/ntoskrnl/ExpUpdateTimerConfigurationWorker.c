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
  __int64 v4; // r8
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int *v8; // rax
  char *v9; // rax
  __int64 result; // rax

  v3 = KeAcquireSpinLockRaiseToDpc(&ExpKernelResolutionLock);
  __writecr8(0xFuLL);
  *(_DWORD *)(a2 + 24) = 0;
  if ( *(_QWORD *)a2 )
  {
    v5 = KiSetClockInterval(ExpLastRequestedTime, (__int64)&ExpClockIntervalRequest, v4);
    KiSendClockInterruptToClockOwner(v7, v6);
    **(_DWORD **)a2 = v5;
  }
  KeReleaseSpinLock(&ExpKernelResolutionLock, 0xFu);
  v8 = *(unsigned int **)(a2 + 8);
  if ( v8 )
    *(_DWORD *)(a2 + 24) = KeSetTimeAdjustment(*v8);
  v9 = *(char **)(a2 + 16);
  if ( v9 )
    KeTimeSynchronization = *v9;
  result = v3;
  __writecr8(v3);
  return result;
}
