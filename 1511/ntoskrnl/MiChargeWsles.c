/*
 * XREFs of MiChargeWsles @ 0x140061CF0
 * Callers:
 *     MiInsertInSystemSpace @ 0x14000A670 (MiInsertInSystemSpace.c)
 *     MiRemoveFromSystemSpace @ 0x14000B73C (MiRemoveFromSystemSpace.c)
 *     MiCleanWorkingSet @ 0x14001C2D0 (MiCleanWorkingSet.c)
 *     MiFreePagedPoolPages @ 0x14003B820 (MiFreePagedPoolPages.c)
 *     MiAllocatePagedPoolPages @ 0x14005F630 (MiAllocatePagedPoolPages.c)
 *     MmAdjustWorkingSetSizeEx @ 0x140096B2C (MmAdjustWorkingSetSizeEx.c)
 *     MiReleaseSystemCacheView @ 0x1400AE7E8 (MiReleaseSystemCacheView.c)
 *     MiObtainSystemCacheView @ 0x1400B1590 (MiObtainSystemCacheView.c)
 *     MmAllocateSpecialPool @ 0x1401DAD04 (MmAllocateSpecialPool.c)
 *     MmFreeSpecialPool @ 0x1401DB2D8 (MmFreeSpecialPool.c)
 *     MmCreateProcessAddressSpace @ 0x1403CB7AC (MmCreateProcessAddressSpace.c)
 *     MiConstructLoaderEntry @ 0x1403CE188 (MiConstructLoaderEntry.c)
 *     MiUnloadSystemImage @ 0x1403CF92C (MiUnloadSystemImage.c)
 *     MmCleanProcessAddressSpace @ 0x1403E7980 (MmCleanProcessAddressSpace.c)
 *     MmFreeBootRegistry @ 0x140521B08 (MmFreeBootRegistry.c)
 *     MmFreeLoaderBlock @ 0x14074E52C (MmFreeLoaderBlock.c)
 *     MiInitializeBootProcess @ 0x14076CFE4 (MiInitializeBootProcess.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14000A380 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 *     MiChargeResident @ 0x1400AA260 (MiChargeResident.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiRemoveWorkingSetPages @ 0x1400B94A0 (MiRemoveWorkingSetPages.c)
 *     HvlNotifyLongSpinWait @ 0x1401AE950 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402140C0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiChargeWsles(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v4; // rsi
  int *v6; // r12
  unsigned __int8 CurrentIrql; // r14
  unsigned int v8; // edi
  signed __int32 v9; // eax
  unsigned __int8 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r10
  __int64 v13; // rax
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rbp
  int v18; // r15d
  __int64 v19; // rdx
  unsigned __int64 v20; // rax
  char v21; // cl
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rbp
  unsigned __int64 v28; // rcx
  signed __int32 v29; // ett
  unsigned __int64 v30; // rax

  v3 = *(_QWORD *)(BugCheckParameter2 + 184);
  v4 = a2;
  if ( !v3 )
    return 1LL;
  v6 = &MiSystemPartition;
  if ( (*(_BYTE *)(BugCheckParameter2 + 216) & 7) == 0 )
    v6 = (int *)MiPartitionIdToPointer(*(unsigned __int16 *)(BugCheckParameter2 + 180));
  if ( (_DWORD)a3 == 1 )
  {
    CurrentIrql = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(BugCheckParameter2, CurrentIrql);
    }
    else
    {
      v8 = 0;
      if ( _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 0x1Fu) )
        v8 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)BugCheckParameter2, CurrentIrql, a3);
      v9 = *(_DWORD *)BugCheckParameter2;
      while ( (v9 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (v9 & 0x40000000) == 0 )
        {
          v29 = v9;
          v9 = _InterlockedCompareExchange((volatile signed __int32 *)BugCheckParameter2, v9 | 0x40000000, v9);
          if ( v29 != v9 )
            continue;
        }
        if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v8, a2, a3);
        v9 = *(_DWORD *)BugCheckParameter2;
      }
    }
  }
  v10 = *(_BYTE *)(BugCheckParameter2 + 216) & 7;
  if ( v10 < 2u )
  {
    v11 = *(_QWORD *)(BugCheckParameter2 + 96);
    if ( v11 )
    {
      if ( v11 + v4 )
        v11 += 6LL;
      else
        v4 -= 6LL;
    }
    else
    {
      v4 += 6LL;
    }
  }
  else
  {
    v11 = MiState[(*(_BYTE *)(BugCheckParameter2 + 216) & 7) + 275]
        + MiState[(*(_BYTE *)(BugCheckParameter2 + 216) & 7) + 270];
  }
  if ( v4 <= 0 )
  {
    v12 = v11;
    v11 += v4;
  }
  else
  {
    v12 = v11 + v4;
  }
  v13 = *(_QWORD *)(v3 + 496);
  v14 = v13 + v11 * *(unsigned int *)(v3 + 64);
  v15 = v13 + v12 * *(unsigned int *)(v3 + 64);
  if ( v14 >= v15 )
    goto LABEL_53;
  v16 = 0LL;
  v17 = 4096LL;
  v18 = 4;
  do
  {
    v19 = ~(v17 - 1);
    if ( (v19 & (v14 ^ (v15 - 1))) == 0 && ((v17 - 1) & v14) != 0 )
      break;
    v20 = ((v19 & (v15 - 1 + v17)) - (v19 & (v14 + v17 - 1))) / v17;
    v17 <<= 9;
    v16 += v20;
    --v18;
  }
  while ( v18 );
  if ( v4 <= 0 )
  {
    if ( v16 )
    {
      if ( v10 >= 2u && *(_QWORD *)(BugCheckParameter2 + 144) - v16 < *(_QWORD *)(BugCheckParameter2 + 152) )
        MiRemoveWorkingSetPages(BugCheckParameter2);
      v23 = *(_QWORD *)(BugCheckParameter2 + 144);
      v24 = *(_QWORD *)(BugCheckParameter2 + 152);
      v25 = v23 - v16;
      if ( v23 - v16 < v24 )
      {
        if ( v23 < v24 )
          v16 = 0LL;
        else
          v16 = v23 - v24;
      }
      *(_QWORD *)(BugCheckParameter2 + 144) = v25;
      if ( v16 )
      {
        MiReturnCommit(v6, v16);
        if ( v6 == &MiSystemPartition )
        {
          MiReturnResidentAvailable(v16);
          _InterlockedExchangeAdd64(&qword_1402FF4E8, v16);
        }
        else
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)v6 + 744, v16);
        }
      }
    }
    goto LABEL_19;
  }
  if ( !v16 )
  {
LABEL_19:
    v21 = *(_BYTE *)(BugCheckParameter2 + 216);
    if ( (v21 & 7u) >= 2 )
      MiState[(v21 & 7) + 275] += v4;
    if ( CurrentIrql != 17 )
      MiUnlockWorkingSetExclusive(BugCheckParameter2, CurrentIrql, v14);
    return 1LL;
  }
  v26 = *(_QWORD *)(BugCheckParameter2 + 152);
  v27 = v16;
  v28 = *(_QWORD *)(BugCheckParameter2 + 144);
  if ( v26 > v28 )
  {
    v30 = v26 - v28;
    if ( v30 >= v16 )
      goto LABEL_39;
    v27 = v16 - v30;
  }
  if ( !v27 )
  {
LABEL_39:
    *(_QWORD *)(BugCheckParameter2 + 144) += v16;
    goto LABEL_19;
  }
  if ( (unsigned int)MiChargeCommit(v6, v27, 0LL) )
  {
    if ( (unsigned int)MiChargeResident(v6, v27, 0LL) )
    {
      if ( v6 == &MiSystemPartition )
        _InterlockedExchangeAdd64(&qword_1402FF4E0, v27);
      goto LABEL_39;
    }
    MiReturnCommit(v6, v27);
  }
LABEL_53:
  if ( CurrentIrql != 17 )
    MiUnlockWorkingSetExclusive(BugCheckParameter2, CurrentIrql, v14);
  return 0LL;
}
