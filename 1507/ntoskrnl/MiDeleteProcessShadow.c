/*
 * XREFs of MiDeleteProcessShadow @ 0x1402252C0
 * Callers:
 *     MiDeleteFinalPageTables @ 0x1400EEEC4 (MiDeleteFinalPageTables.c)
 *     MmCreateProcessAddressSpace @ 0x1404A2834 (MmCreateProcessAddressSpace.c)
 *     MmSynchronizeAddressPolicy @ 0x1406A85EC (MmSynchronizeAddressPolicy.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiReleasePtes @ 0x1400B1800 (MiReleasePtes.c)
 *     KeFlushProcessTb @ 0x1400EF5C4 (KeFlushProcessTb.c)
 *     MiReleaseNonPagedResources @ 0x1400FC2A8 (MiReleaseNonPagedResources.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeMakeUserDirectoryTableBase @ 0x14020ACD0 (KeMakeUserDirectoryTableBase.c)
 *     MiDeleteTopLevelPage @ 0x14020F0E8 (MiDeleteTopLevelPage.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

void __fastcall MiDeleteProcessShadow(__int64 a1)
{
  unsigned __int64 v2; // rdi
  volatile signed __int32 *v3; // rbx
  __int16 *v4; // r12
  int v5; // r8d
  unsigned __int8 CurrentIrql; // r14
  unsigned int v7; // edi
  signed __int32 i; // edx
  __int64 v9; // r10
  unsigned __int64 v10; // r9
  unsigned __int64 *v11; // rdi
  unsigned __int64 PteShadow; // rsi
  __int64 v13; // rsi
  __int64 v14; // rcx
  unsigned __int64 v15; // [rsp+60h] [rbp+18h] BYREF

  if ( (MiFlags & 0x600000) != 0 )
  {
    v2 = *(_QWORD *)(a1 + 1520);
    if ( v2 )
    {
      v3 = (volatile signed __int32 *)(a1 + 1272);
      v4 = MiPartitionIdToPointer(*(_WORD *)(a1 + 1452));
      if ( v5 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1 + 1272);
        }
        else
        {
          v7 = 0;
          if ( _interlockedbittestandset(v3, 0x1Fu) )
            v7 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(a1 + 1272));
          for ( i = *v3; (*v3 & 0xBFFFFFFF) != 0x80000000; i = *v3 )
          {
            if ( (i & 0x40000000) == 0 )
              _InterlockedCompareExchange(v3, i | 0x40000000, i);
            if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v7);
          }
        }
        v2 = *(_QWORD *)(a1 + 1520);
        if ( !v2 )
        {
          MiUnlockWorkingSetExclusive(a1 + 1272, CurrentIrql);
          return;
        }
      }
      else
      {
        CurrentIrql = 17;
      }
      v9 = 0x90482413000LL;
      v10 = 2040LL;
      v11 = (unsigned __int64 *)(((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      PteShadow = *v11;
      if ( (unsigned __int64)(v11 + 0x12090482600LL) <= 0x7F8 )
        PteShadow = MiReadPteShadow(v11, *v11);
      v15 = PteShadow;
      if ( (unsigned __int64)&v15 + v9 <= v10 )
        PteShadow = MiReadPteShadow(&v15, PteShadow);
      *(_QWORD *)(a1 + 1520) = 0LL;
      v13 = (PteShadow >> 12) & 0xFFFFFFFFFLL;
      *(_QWORD *)(a1 + 632) = KeMakeUserDirectoryTableBase(0LL);
      if ( CurrentIrql != 17 )
        MiUnlockWorkingSetExclusive(a1 + 1272, CurrentIrql);
      MiReleasePtes((__int64)&qword_14034FC70, v11, 1u);
      KeFlushProcessTb(v13 << 12);
      if ( (unsigned int)MiDeleteTopLevelPage(v14, v13) != 3 )
        MiReleaseNonPagedResources((__int64)v4, 1uLL);
    }
  }
}
