/*
 * XREFs of KdpTimeSlipWork @ 0x14072C8E0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KiSetTimerEx @ 0x140068414 (KiSetTimerEx.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExUpdateSystemTimeFromCmos @ 0x1403F6BAC (ExUpdateSystemTimeFromCmos.c)
 *     ExAcquireTimeRefreshLock @ 0x14042DB58 (ExAcquireTimeRefreshLock.c)
 *     ExReleaseTimeRefreshLock @ 0x140559DEC (ExReleaseTimeRefreshLock.c)
 */

char KdpTimeSlipWork()
{
  unsigned __int8 CurrentIrql; // bl
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  if ( ExAcquireTimeRefreshLock(0) )
  {
    ExUpdateSystemTimeFromCmos(0, 0);
    ExReleaseTimeRefreshLock();
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)&KdpTimeSlipEventLock);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)&KdpTimeSlipEventLock, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&KdpTimeSlipEventLock);
    }
    if ( KdpTimeSlipEvent )
      KeSetEvent((PRKEVENT)KdpTimeSlipEvent, 0, 0);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&KdpTimeSlipEventLock, retaddr);
    else
      _InterlockedAnd64(&KdpTimeSlipEventLock, 0LL);
    __writecr8(CurrentIrql);
  }
  return KiSetTimerEx((__int64)&KdpTimeSlipTimer, -1800000000LL, 0, 0, (__int64)&KdpTimeSlipDpc);
}
