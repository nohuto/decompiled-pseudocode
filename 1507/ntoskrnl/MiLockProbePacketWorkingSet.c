/*
 * XREFs of MiLockProbePacketWorkingSet @ 0x14011B678
 * Callers:
 *     MiProbeLeafFrame @ 0x140034440 (MiProbeLeafFrame.c)
 *     MiInitializeProbePacketVm @ 0x14011B520 (MiInitializeProbePacketVm.c)
 *     MiSplitReducedCommitClonePage @ 0x1402141F4 (MiSplitReducedCommitClonePage.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

void __fastcall MiLockProbePacketWorkingSet(__int64 a1)
{
  volatile signed __int32 *v1; // rbx
  unsigned __int8 v3; // si
  signed __int32 v4; // ett
  unsigned __int8 CurrentIrql; // bp
  unsigned int v6; // esi
  signed __int32 v7; // eax

  v1 = *(volatile signed __int32 **)(a1 + 88);
  if ( v1 == MmBadPointer )
  {
    *(_BYTE *)(a1 + 80) = 17;
  }
  else if ( *(_BYTE *)(a1 + 60) == 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v1);
    }
    else
    {
      v6 = 0;
      if ( _interlockedbittestandset(v1, 0x1Fu) )
        v6 = ExpWaitForSpinLockExclusiveAndAcquire(v1);
      while ( 1 )
      {
        v7 = *v1;
        if ( (*v1 & 0xBFFFFFFF) == 0x80000000 )
          break;
        if ( (v7 & 0x40000000) == 0 )
          _InterlockedCompareExchange(v1, v7 | 0x40000000, v7);
        if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v6);
      }
    }
    *(_BYTE *)(a1 + 80) = CurrentIrql;
  }
  else
  {
    v3 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v1);
    }
    else
    {
      _m_prefetchw((const void *)v1);
      v4 = *v1 & 0x7FFFFFFF;
      if ( v4 != _InterlockedCompareExchange(v1, v4 + 1, v4) )
        ExpWaitForSpinLockSharedAndAcquire(v1);
    }
    *(_BYTE *)(a1 + 80) = v3;
  }
}
