/*
 * XREFs of IopDisableTimer @ 0x1401F2028
 * Callers:
 *     IoStopTimer @ 0x1401F67F0 (IoStopTimer.c)
 * Callees:
 *     KeCancelTimer @ 0x140066860 (KeCancelTimer.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     EtwTraceIoTimerEvent @ 0x14025D0D0 (EtwTraceIoTimerEvent.c)
 */

BOOLEAN __fastcall IopDisableTimer(__int64 a1)
{
  int v2; // edi
  unsigned __int8 CurrentIrql; // si
  BOOLEAN result; // al
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0;
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
  if ( *(_WORD *)(a1 + 2) )
  {
    *(_WORD *)(a1 + 2) = 0;
    if ( !--IopTimerCount )
      v2 = 1;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&IopTimerLock, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)&IopTimerLock, 0LL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( (DWORD2(PerfGlobalGroupMask) & 0x800000) != 0 )
    result = EtwTraceIoTimerEvent(3934LL, *(_QWORD *)(a1 + 40), *(_QWORD *)(a1 + 24));
  if ( v2 )
    return KeCancelTimer(&IopTimer);
  return result;
}
