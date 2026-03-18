/*
 * XREFs of KiAcquireProcessLockExclusive @ 0x14000FB0C
 * Callers:
 *     KeSetDisableQuantumProcess @ 0x140009814 (KeSetDisableQuantumProcess.c)
 *     KeSetQuantumProcess @ 0x14000ABF8 (KeSetQuantumProcess.c)
 *     KeTerminateThread @ 0x14000F218 (KeTerminateThread.c)
 *     KeStartThread @ 0x14000F67C (KeStartThread.c)
 *     KeSetExecuteOptions @ 0x14012D660 (KeSetExecuteOptions.c)
 *     KeSetCpuSetsProcess @ 0x140205964 (KeSetCpuSetsProcess.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall KiAcquireProcessLockExclusive(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 CurrentIrql; // al
  bool v3; // zf
  volatile signed __int32 *v4; // rbx
  unsigned int v5; // edi
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v3 = (BYTE6(PerfGlobalGroupMask) & 0x21) == 0;
  v4 = (volatile signed __int32 *)(a1 + 64);
  *a2 = CurrentIrql;
  if ( !v3 )
    return ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1 + 64);
  v5 = 0;
  if ( _interlockedbittestandset(v4, 0x1Fu) )
    v5 = ExpWaitForSpinLockExclusiveAndAcquire(a1 + 64);
  while ( 1 )
  {
    result = *(unsigned int *)v4;
    if ( (*v4 & 0xBFFFFFFF) == 0x80000000 )
      break;
    if ( (result & 0x40000000) == 0 )
      _InterlockedCompareExchange(v4, result | 0x40000000, result);
    if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
      _mm_pause();
    else
      HvlNotifyLongSpinWait(v5);
  }
  return result;
}
