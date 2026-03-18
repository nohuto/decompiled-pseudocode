/*
 * XREFs of MiInsertPrivateVad @ 0x14007CE90
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1404BA9D0 (MiAllocateVirtualMemory.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockVad @ 0x1400894F0 (MiUnlockVad.c)
 *     MiLockVad @ 0x140089660 (MiLockVad.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiInsertVad @ 0x14008AC30 (MiInsertVad.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiCreatePageTablesForPhysicalRange @ 0x1402242B0 (MiCreatePageTablesForPhysicalRange.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiAweViewInserter @ 0x1406A5BEC (MiAweViewInserter.c)
 */

__int64 __fastcall MiInsertPrivateVad(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r15
  volatile signed __int32 *v7; // rbx
  unsigned __int8 CurrentIrql; // r14
  unsigned int v9; // esi
  signed __int32 v10; // eax
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  if ( (*(_BYTE *)(a1 + 48) & 7) == 3 )
    MiLockVad(CurrentThread, a1);
  v7 = (volatile signed __int32 *)(a3 + 1272);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a3 + 1272);
  }
  else
  {
    v9 = 0;
    if ( _interlockedbittestandset(v7, 0x1Fu) )
      v9 = ExpWaitForSpinLockExclusiveAndAcquire(a3 + 1272);
    while ( 1 )
    {
      v10 = *v7;
      if ( (*v7 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v10 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v7, v10 | 0x40000000, v10);
      if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v9);
    }
  }
  MiInsertVad(a1, a3);
  if ( (*(_BYTE *)(a1 + 48) & 7) == 3 )
    MiCreatePageTablesForPhysicalRange(a1, CurrentIrql);
  MiUnlockWorkingSetExclusive(a3 + 1272, CurrentIrql);
  result = *(_DWORD *)(a1 + 48) & 7;
  if ( (*(_BYTE *)(a1 + 48) & 7) == 3 )
  {
    MiAweViewInserter(a3, a2);
    return MiUnlockVad(CurrentThread, a1);
  }
  return result;
}
