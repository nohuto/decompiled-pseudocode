/*
 * XREFs of PfSnUpdatePrefetcherFlags @ 0x140130784
 * Callers:
 *     PfSnEnablePrefetcherTimerRoutine @ 0x14013075C (PfSnEnablePrefetcherTimerRoutine.c)
 *     PfSnBeginBootPhase @ 0x1403F6FE8 (PfSnBeginBootPhase.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall PfSnUpdatePrefetcherFlags(int a1, int a2)
{
  unsigned __int8 CurrentIrql; // bp
  unsigned int v5; // edi
  void *retaddr; // [rsp+28h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&qword_140353640);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140353640, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&qword_140353640);
  }
  v5 = dword_140353740;
  if ( a2 )
    dword_140353740 |= a1;
  else
    dword_140353740 &= ~a1;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&qword_140353640, retaddr);
  else
    _InterlockedAnd64(&qword_140353640, 0LL);
  __writecr8(CurrentIrql);
  return v5;
}
