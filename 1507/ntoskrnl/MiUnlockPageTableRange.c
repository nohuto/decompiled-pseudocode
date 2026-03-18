/*
 * XREFs of MiUnlockPageTableRange @ 0x14014BA28
 * Callers:
 *     MiLockPageTableRange @ 0x14014A398 (MiLockPageTableRange.c)
 *     MmStoreFreeVirtualMemory @ 0x1405686EC (MmStoreFreeVirtualMemory.c)
 * Callees:
 *     MiUnlockPageTableCharges @ 0x14007CC10 (MiUnlockPageTableCharges.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiUnlockPageTableRange(unsigned __int64 a1, unsigned __int64 a2)
{
  volatile signed __int32 *v2; // rbx
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rbp
  unsigned __int8 CurrentIrql; // r14
  __int64 v6; // rcx
  unsigned int v7; // edi
  signed __int32 v8; // edx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax

  v2 = (volatile signed __int32 *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[8];
  v3 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v4 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v2);
  }
  else
  {
    v7 = 0;
    if ( _interlockedbittestandset(v2, 0x1Fu) )
      v7 = ExpWaitForSpinLockExclusiveAndAcquire(v2);
    v8 = *v2;
    v6 = *(unsigned int *)v2;
    LODWORD(v6) = v6 & 0xBFFFFFFF;
    if ( (_DWORD)v6 != 0x80000000 )
    {
      do
      {
        if ( (v8 & 0x40000000) == 0 )
        {
          v6 = v8 | 0x40000000u;
          _InterlockedCompareExchange(v2, v6, v8);
        }
        if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v7);
        v8 = *v2;
      }
      while ( (*v2 & 0xBFFFFFFF) != 0x80000000 );
    }
  }
  if ( v3 <= v4 )
  {
    v9 = v3 + 0x90482413000LL;
    do
    {
      v10 = *(_QWORD *)v3;
      if ( v9 <= 0x7F8
        && (unsigned int)MiPteHasShadow(v6, v10)
        && (v10 & 1) != 0
        && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
      {
        v11 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v11 )
        {
          v12 = *(_QWORD *)(v11 + 8 * ((v3 >> 3) & 0x1FF));
          if ( (v12 & 0x20) != 0 )
            v10 |= 0x20uLL;
          if ( (v12 & 0x42) != 0 )
            v10 |= 0x42uLL;
        }
      }
      MiUnlockPageTableCharges(48 * ((v10 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL, 2u, 1);
      v3 += 8LL;
      v9 += 8LL;
    }
    while ( v3 <= v4 );
  }
  return MiUnlockWorkingSetExclusive((__int64)v2, CurrentIrql);
}
