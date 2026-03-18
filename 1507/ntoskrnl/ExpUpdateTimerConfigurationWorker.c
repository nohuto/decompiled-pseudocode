/*
 * XREFs of ExpUpdateTimerConfigurationWorker @ 0x1400D5EB0
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiSendClockInterruptToClockOwner @ 0x1400D5F78 (KiSendClockInterruptToClockOwner.c)
 *     KiSetClockInterval @ 0x1400D6020 (KiSetClockInterval.c)
 *     KeSetTimeAdjustment @ 0x140200164 (KeSetTimeAdjustment.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall ExpUpdateTimerConfigurationWorker(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // si
  int v5; // ebx
  unsigned int *v6; // rax
  char *v7; // rax
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&ExpKernelResolutionLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpKernelResolutionLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&ExpKernelResolutionLock);
  }
  __writecr8(0xFuLL);
  *(_DWORD *)(a2 + 24) = 0;
  if ( *(_QWORD *)a2 )
  {
    v5 = KiSetClockInterval((unsigned int)ExpLastRequestedTime, &ExpClockIntervalRequest, a3);
    KiSendClockInterruptToClockOwner();
    **(_DWORD **)a2 = v5;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&ExpKernelResolutionLock, retaddr);
  else
    _InterlockedAnd64(&ExpKernelResolutionLock, 0LL);
  __writecr8(0xFuLL);
  v6 = *(unsigned int **)(a2 + 8);
  if ( v6 )
    *(_DWORD *)(a2 + 24) = KeSetTimeAdjustment(*v6);
  v7 = *(char **)(a2 + 16);
  if ( v7 )
    KeTimeSynchronization = *v7;
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
