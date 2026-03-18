/*
 * XREFs of MiAppendSubsectionChain @ 0x140077D64
 * Callers:
 *     MiExtendSection @ 0x1404B0DE8 (MiExtendSection.c)
 * Callees:
 *     MiInsertSubsectionNode @ 0x14002EB28 (MiInsertSubsectionNode.c)
 *     MiDecrementSubsectionViewCount @ 0x140054300 (MiDecrementSubsectionViewCount.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiInsertUnusedSubsection @ 0x14010E120 (MiInsertUnusedSubsection.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiReturnSubsectionCharges @ 0x140230538 (MiReturnSubsectionCharges.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiAppendSubsectionChain(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  __int64 v5; // rdi
  __int64 v8; // r14
  volatile signed __int32 *v9; // rbx
  unsigned __int8 CurrentIrql; // bp
  unsigned int v11; // esi
  unsigned int v12; // ebp
  signed __int32 v13; // edx
  __int64 v14; // rdi
  __int64 inserted; // rax
  __int64 v17; // rax
  void *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v19; // [rsp+60h] [rbp+8h]
  unsigned __int8 v20; // [rsp+68h] [rbp+10h]

  v3 = *(_QWORD *)a1;
  v5 = *(_QWORD *)(a2 + 16);
  v19 = *(_QWORD *)a1;
  v8 = 0LL;
  v9 = (volatile signed __int32 *)(*(_QWORD *)a1 + 72LL);
  CurrentIrql = KeGetCurrentIrql();
  v20 = CurrentIrql;
  v11 = 2;
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v3 + 72);
  }
  else
  {
    v12 = 0;
    if ( _interlockedbittestandset(v9, 0x1Fu) )
      v12 = ExpWaitForSpinLockExclusiveAndAcquire(v3 + 72);
    while ( 1 )
    {
      v13 = *v9;
      if ( (*v9 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v13 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v9, v13 | 0x40000000, v13);
      if ( (++v12 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v12);
    }
    CurrentIrql = v20;
  }
  if ( !*(_QWORD *)(v19 + 48) )
  {
    if ( *(_QWORD *)(v5 + 8) )
    {
      do
      {
        if ( *(_DWORD *)(v5 + 48) )
          *(_DWORD *)(v5 + 48) = -1;
        *(_WORD *)(v5 + 34) &= ~1u;
        inserted = MiInsertUnusedSubsection(v5, 1LL);
        v5 = *(_QWORD *)(v5 + 16);
        v8 += inserted;
      }
      while ( v5 );
    }
    else if ( (a3 & 2) != 0 )
    {
      do
      {
        v17 = MiDecrementSubsectionViewCount((unsigned int *)v5, 5);
        v5 = *(_QWORD *)(v5 + 16);
        v8 += v17;
      }
      while ( v5 );
    }
    goto LABEL_9;
  }
  if ( *(_DWORD *)(a1 + 48) && (a3 & 2) == 0 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v9, retaddr);
    else
      *v9 = 0;
LABEL_22:
    __writecr8(CurrentIrql);
    return v11;
  }
  if ( (a3 & 1) == 0 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v9, retaddr);
    else
      *v9 = 0;
    v11 = 1;
    goto LABEL_22;
  }
LABEL_9:
  *(_WORD *)(a1 + 34) &= 0xFu;
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 44) = *(_DWORD *)(a2 + 44);
  *(_DWORD *)(a1 + 52) = *(_DWORD *)(a2 + 52);
  v14 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 16) = v14;
  if ( v14 )
  {
    do
    {
      MiInsertSubsectionNode(v19, v14, 1LL);
      v14 = *(_QWORD *)(v14 + 16);
    }
    while ( v14 );
    CurrentIrql = v20;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v9, retaddr);
  else
    *v9 = 0;
  __writecr8(CurrentIrql);
  if ( v8 )
    MiReturnSubsectionCharges(v8);
  return 0LL;
}
