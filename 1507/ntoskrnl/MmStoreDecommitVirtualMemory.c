/*
 * XREFs of MmStoreDecommitVirtualMemory @ 0x14014BBEC
 * Callers:
 *     ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x14014753C (-SmStReleaseVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140252EF8 (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiLocateAddress @ 0x1400898F0 (MiLocateAddress.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiDecommitPages @ 0x1400922F0 (MiDecommitPages.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MmStoreDecommitVirtualMemory(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rsi
  _KPROCESS *Process; // r14
  volatile signed __int32 *v5; // rdi
  unsigned __int8 CurrentIrql; // r15
  unsigned int v7; // ebx
  signed __int32 v8; // eax
  _QWORD *Address; // rbx
  _QWORD v11[4]; // [rsp+30h] [rbp-38h] BYREF

  memset(v11, 0, sizeof(v11));
  v3 = a1 + a2 - 1;
  Process = KeGetCurrentThread()->ApcState.Process;
  v5 = (volatile signed __int32 *)&Process[1].IdealNode[8];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&Process[1].IdealNode[8]);
  }
  else
  {
    v7 = 0;
    if ( _interlockedbittestandset(v5, 0x1Fu) )
      v7 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)&Process[1].IdealNode[8]);
    while ( 1 )
    {
      v8 = *v5;
      if ( (*v5 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v8 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v5, v8 | 0x40000000, v8);
      if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v7);
    }
  }
  Address = MiLocateAddress(a1);
  MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[8], CurrentIrql);
  return MiDecommitPages(a1, ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, (__int64)Process, (__int64)Address, 0, v11);
}
