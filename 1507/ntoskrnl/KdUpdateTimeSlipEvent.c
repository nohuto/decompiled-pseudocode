/*
 * XREFs of KdUpdateTimeSlipEvent @ 0x140131C74
 * Callers:
 *     NtSetSystemInformation @ 0x140453DF8 (NtSetSystemInformation.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall KdUpdateTimeSlipEvent(void *a1)
{
  unsigned __int8 CurrentIrql; // di
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !KdPitchDebugger )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(&KdpTimeSlipEventLock);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)&KdpTimeSlipEventLock, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&KdpTimeSlipEventLock);
    }
    if ( KdpTimeSlipEvent )
      ObfDereferenceObjectWithTag(KdpTimeSlipEvent, 0x746C6644u);
    KdpTimeSlipEvent = a1;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&KdpTimeSlipEventLock, retaddr);
    else
      _InterlockedAnd64(&KdpTimeSlipEventLock, 0LL);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
