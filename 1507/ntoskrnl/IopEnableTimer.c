/*
 * XREFs of IopEnableTimer @ 0x1401F2290
 * Callers:
 *     IoStartTimer @ 0x1401F67CC (IoStartTimer.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x1400662B0 (KeSetCoalescableTimer.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     EtwTraceIoTimerEvent @ 0x14025D0D0 (EtwTraceIoTimerEvent.c)
 */

__int64 __fastcall IopEnableTimer(__int64 a1)
{
  unsigned __int8 CurrentIrql; // di
  int v3; // eax
  __int64 result; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&IopTimerLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&IopTimerLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&IopTimerLock);
  }
  if ( !*(_WORD *)(a1 + 2) )
  {
    v3 = IopTimerCount;
    if ( !IopTimerCount )
    {
      KeSetCoalescableTimer(&IopTimer, (LARGE_INTEGER)-10000000LL, 0x3E8u, 0x23u, &IopTimerDpc);
      v3 = IopTimerCount;
    }
    IopTimerCount = v3 + 1;
    *(_WORD *)(a1 + 2) = 1;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&IopTimerLock, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)&IopTimerLock, 0LL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( (DWORD2(PerfGlobalGroupMask) & 0x800000) != 0 )
    return EtwTraceIoTimerEvent(3933LL, *(_QWORD *)(a1 + 40), *(_QWORD *)(a1 + 24));
  return result;
}
