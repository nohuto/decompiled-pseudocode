/*
 * XREFs of MiInsertAweInfo @ 0x140224760
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1404BA9D0 (MiAllocateVirtualMemory.c)
 *     NtAllocateUserPhysicalPages @ 0x1406A6328 (NtAllocateUserPhysicalPages.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiFreeAweInfo @ 0x1406A6124 (MiFreeAweInfo.c)
 */

__int64 __fastcall MiInsertAweInfo(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v3; // rbx
  unsigned __int8 CurrentIrql; // r14
  __int64 v6; // rdi
  unsigned int v8; // edi
  signed __int32 v9; // eax

  v3 = (volatile signed __int32 *)(a1 + 1272);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1 + 1272);
  }
  else
  {
    v8 = 0;
    if ( _interlockedbittestandset(v3, 0x1Fu) )
      v8 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(a1 + 1272));
    while ( 1 )
    {
      v9 = *v3;
      if ( (*v3 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v9 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v3, v9 | 0x40000000, v9);
      if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v8);
    }
  }
  v6 = *(_QWORD *)(a1 + 1032);
  if ( !v6 )
    *(_QWORD *)(a1 + 1032) = a2;
  MiUnlockWorkingSetExclusive((__int64)v3, CurrentIrql);
  if ( v6 )
  {
    MiFreeAweInfo(a2);
    return v6;
  }
  return a2;
}
