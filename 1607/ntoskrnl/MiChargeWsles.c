/*
 * XREFs of MiChargeWsles @ 0x1400DF9C0
 * Callers:
 *     MiReleaseSystemCacheView @ 0x140017EF4 (MiReleaseSystemCacheView.c)
 *     MiObtainSystemCacheView @ 0x1400196F0 (MiObtainSystemCacheView.c)
 *     MiFreePagedPoolPages @ 0x14004B720 (MiFreePagedPoolPages.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1400AB9B4 (MmAdjustWorkingSetSizeEx.c)
 *     MiAllocatePagedPoolPages @ 0x1400DC810 (MiAllocatePagedPoolPages.c)
 *     MiInsertInSystemSpace @ 0x1400FD020 (MiInsertInSystemSpace.c)
 *     MiRemoveFromSystemSpace @ 0x1400FDE10 (MiRemoveFromSystemSpace.c)
 *     MiCleanWorkingSet @ 0x1400FF31C (MiCleanWorkingSet.c)
 *     MmAllocateSpecialPool @ 0x1401EB90C (MmAllocateSpecialPool.c)
 *     MmFreeSpecialPool @ 0x1401EBED0 (MmFreeSpecialPool.c)
 *     MiCleanEmbryonicProcess @ 0x14045DED8 (MiCleanEmbryonicProcess.c)
 *     MiConstructLoaderEntry @ 0x14048115C (MiConstructLoaderEntry.c)
 *     MiUnloadSystemImage @ 0x1404821BC (MiUnloadSystemImage.c)
 *     MmCreateProcessAddressSpace @ 0x14050921C (MmCreateProcessAddressSpace.c)
 *     MmFreeBootRegistry @ 0x14054E4B0 (MmFreeBootRegistry.c)
 *     MmFreeLoaderBlock @ 0x140791ED4 (MmFreeLoaderBlock.c)
 *     MiInitializeBootProcess @ 0x1407B7300 (MiInitializeBootProcess.c)
 * Callees:
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14002EA80 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14004ED60 (MiReturnResidentAvailable.c)
 *     MiRemoveWorkingSetPages @ 0x1400FC4D0 (MiRemoveWorkingSetPages.c)
 *     MiChargeResident @ 0x1401011D0 (MiChargeResident.c)
 *     HvlNotifyLongSpinWait @ 0x1401BAD4C (HvlNotifyLongSpinWait.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1401F2898 (MiPreUnlockWorkingSetExclusive.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14022DB5C (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14022DCC8 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiChargeWsles(ULONG_PTR a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  char v7; // dl
  LONG *v8; // r13
  LONG *v9; // r14
  unsigned __int16 v10; // ax
  int *v11; // r12
  unsigned __int8 CurrentIrql; // bp
  LONG *v13; // rbx
  unsigned int v14; // edi
  signed __int32 v15; // edx
  bool v16; // zf
  signed __int32 v17; // eax
  unsigned __int8 v18; // r11
  __int64 v19; // rcx
  __int64 v20; // rdx
  ULONG_PTR v21; // rax
  ULONG_PTR v22; // r8
  ULONG_PTR v23; // r10
  int v24; // edi
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // r9
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rax
  char v36; // cl
  void *retaddr; // [rsp+48h] [rbp+0h]
  ULONG_PTR *v38; // [rsp+50h] [rbp+8h]

  v3 = *(_QWORD *)(a1 + 16);
  if ( !v3 )
    return 1LL;
  v7 = *(_BYTE *)(a1 + 184) & 7;
  v8 = &dword_140327CC0;
  v9 = &dword_140327CC0;
  if ( v7 == 2 )
  {
    v38 = &BugCheckParameter2;
  }
  else
  {
    v9 = (LONG *)(a1 + 192);
    v38 = (ULONG_PTR *)(v3 + 416);
  }
  v10 = *(_WORD *)(a1 + 164);
  if ( v10 == 1023 )
    v11 = MiSystemPartition;
  else
    v11 = *(int **)(qword_140327038 + 8LL * v10);
  if ( a3 == 1 )
  {
    CurrentIrql = 17;
  }
  else
  {
    v13 = &dword_140327CC0;
    if ( v7 != 2 )
      v13 = (LONG *)(a1 + 192);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v13, CurrentIrql);
    }
    else
    {
      v14 = 0;
      if ( _interlockedbittestandset(v13, 0x1Fu) )
        v14 = ExpWaitForSpinLockExclusiveAndAcquire(v13, CurrentIrql);
      v15 = *v13;
      while ( (v15 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (v15 & 0x40000000) == 0 )
        {
          v17 = _InterlockedCompareExchange(v13, v15 | 0x40000000, v15);
          v16 = v15 == v17;
          v15 = v17;
          if ( !v16 )
            continue;
        }
        if ( (++v14 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v14);
        v15 = *v13;
      }
    }
    v13[1] = 0;
  }
  v18 = *(_BYTE *)(a1 + 184) & 7;
  if ( v18 < 2u )
  {
    v19 = *(_QWORD *)(a1 + 104);
    if ( v19 )
    {
      if ( v19 + a2 )
        v19 += 6LL;
      else
        a2 -= 6LL;
    }
    else
    {
      a2 += 6LL;
    }
  }
  else
  {
    v19 = MiState[(*(_BYTE *)(a1 + 184) & 7) + 298] + MiState[(*(_BYTE *)(a1 + 184) & 7) + 293];
  }
  if ( a2 <= 0 )
  {
    v20 = v19;
    v19 += a2;
  }
  else
  {
    v20 = v19 + a2;
  }
  v21 = v38[10];
  v22 = v21 + v19 * *((unsigned int *)v38 + 8);
  v23 = v21 + v20 * *((unsigned int *)v38 + 8);
  if ( v22 >= v23 )
    goto LABEL_51;
  v24 = 4;
  v25 = 0LL;
  v26 = 4096LL;
  do
  {
    v27 = v26 - 1;
    if ( ((v26 - 1) & v22) != 0 && ((v22 ^ (v23 - 1)) & ~v27) == 0 )
      break;
    v28 = ((~v27 & (v26 + v23 - 1)) - (~v27 & (v26 + v22 - 1))) / v26;
    v26 <<= 9;
    v25 += v28;
    --v24;
  }
  while ( v24 );
  if ( a2 <= 0 )
  {
    if ( v25 )
    {
      if ( v18 >= 2u && *((_QWORD *)v9 + 6) - v25 < *((_QWORD *)v9 + 7) )
        MiRemoveWorkingSetPages(a1);
      v33 = *((_QWORD *)v9 + 6);
      v34 = *((_QWORD *)v9 + 7);
      v35 = v33 - v25;
      if ( v33 - v25 < v34 )
      {
        if ( v33 < v34 )
          v25 = 0LL;
        else
          v25 = v33 - v34;
      }
      *((_QWORD *)v9 + 6) = v35;
      if ( v25 )
      {
        MiReturnCommit((__int64)v11, v25);
        if ( v11 == MiSystemPartition )
          MiReturnResidentAvailable(v25);
        else
          _InterlockedExchangeAdd64((volatile signed __int64 *)v11 + 816, v25);
      }
    }
    goto LABEL_67;
  }
  if ( v25 )
  {
    v29 = *((_QWORD *)v9 + 7);
    v30 = v25;
    v31 = *((_QWORD *)v9 + 6);
    if ( v29 > v31 )
    {
      v32 = v29 - v31;
      if ( v32 >= v25 )
      {
LABEL_54:
        *((_QWORD *)v9 + 6) += v25;
        goto LABEL_67;
      }
      v30 = v25 - v32;
    }
    if ( v30 )
    {
      if ( !(unsigned int)MiChargeCommit((__int64)v11, v30, 0) )
      {
LABEL_51:
        if ( CurrentIrql != 17 )
          MiUnlockWorkingSetExclusive(a1, CurrentIrql);
        return 0LL;
      }
      if ( !(unsigned int)MiChargeResident(v11, v30, 0LL) )
      {
        MiReturnCommit((__int64)v11, v30);
        goto LABEL_51;
      }
    }
    goto LABEL_54;
  }
LABEL_67:
  v36 = *(_BYTE *)(a1 + 184);
  if ( (v36 & 7u) >= 2 )
    MiState[(v36 & 7) + 298] += a2;
  if ( CurrentIrql != 17 )
  {
    MiPreUnlockWorkingSetExclusive(a1, CurrentIrql);
    if ( (*(_BYTE *)(a1 + 184) & 7) != 2 )
      v8 = (LONG *)(a1 + 192);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v8, retaddr);
    else
      *v8 = 0;
    __writecr8(CurrentIrql);
  }
  return 1LL;
}
