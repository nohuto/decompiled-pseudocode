/*
 * XREFs of KiTryToAcquireSpinLockInstrumented @ 0x140201108
 * Callers:
 *     KeTryToAcquireSpinLockAtDpcLevel @ 0x14000631C (KeTryToAcquireSpinLockAtDpcLevel.c)
 *     KdPollBreakIn @ 0x1401FE5E0 (KdPollBreakIn.c)
 *     KiAcquireSpinLockCheckForFreeze @ 0x140200EF4 (KiAcquireSpinLockCheckForFreeze.c)
 *     KeFreezeExecution @ 0x140205F0C (KeFreezeExecution.c)
 *     EtwpTraceStackKey @ 0x140260B00 (EtwpTraceStackKey.c)
 * Callees:
 *     PerfLogSpinLockAcquire @ 0x14025FBDC (PerfLogSpinLockAcquire.c)
 */

char __fastcall KiTryToAcquireSpinLockInstrumented(volatile signed __int32 *a1)
{
  struct _KPRCB *CurrentPrcb; // r8
  char v2; // bl
  char v3; // r9
  unsigned __int64 v4; // rax
  unsigned int InterruptCount; // r11d
  unsigned int v6; // r10d
  unsigned __int64 v7; // rax
  unsigned int v9; // [rsp+48h] [rbp+10h]

  CurrentPrcb = KeGetCurrentPrcb();
  v2 = 1;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v3 = 1;
    v4 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v6 = v4;
  }
  else
  {
    v6 = v9;
    v3 = 0;
    InterruptCount = v9;
  }
  if ( _interlockedbittestandset64(a1, 0LL) )
  {
    v2 = 0;
    _mm_pause();
  }
  else
  {
    ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
    if ( v3 )
    {
      v7 = __rdtsc();
      PerfLogSpinLockAcquire((_DWORD)a1, v7, v7 - v6, 0, InterruptCount, 0);
    }
  }
  return v2;
}
