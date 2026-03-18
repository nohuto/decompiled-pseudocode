/*
 * XREFs of MiWriteLargePde @ 0x1402302C0
 * Callers:
 *     MiMapViewOfDataSection @ 0x1404B64E0 (MiMapViewOfDataSection.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x14005E6FC (MiMakeSystemAddressValid.c)
 *     MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER @ 0x14005E830 (MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiWriteLargePde(__int64 a1, ULONG_PTR a2, __int64 a3, unsigned int a4)
{
  volatile signed __int32 *v5; // rbx
  unsigned __int8 CurrentIrql; // r15
  unsigned int v8; // esi
  unsigned int v9; // edi
  signed __int32 i; // edx
  __int64 *v11; // rcx
  unsigned __int64 PteShadow; // rax
  __int64 v13; // rdi

  v5 = (volatile signed __int32 *)(a1 + 1272);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v8 = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1 + 1272);
  }
  else
  {
    v9 = 0;
    if ( _interlockedbittestandset(v5, 0x1Fu) )
      v9 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(a1 + 1272));
    for ( i = *v5; (*v5 & 0xBFFFFFFF) != 0x80000000; i = *v5 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange(v5, i | 0x40000000, i);
      if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v9);
    }
  }
  MiMakeSystemAddressValid(a2, 0LL, a4, CurrentIrql, 1);
  v11 = (__int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  PteShadow = *v11;
  if ( (unsigned __int64)(v11 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow((__int64)v11, *v11);
  v13 = 48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v8);
    }
    while ( *(__int64 *)(v13 + 24) < 0 );
  }
  *(_QWORD *)(v13 + 24) ^= (*(_QWORD *)(v13 + 24) ^ (*(_QWORD *)(v13 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER(v13, 1u);
  *(_QWORD *)a2 = a3;
  if ( a2 + 0x90482413000LL <= 0x7F8 )
    MiWritePteShadow(a2, a3);
  return MiUnlockWorkingSetExclusive((__int64)v5, CurrentIrql);
}
