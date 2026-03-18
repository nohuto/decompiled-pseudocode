/*
 * XREFs of MiChargeWsles @ 0x14003EE30
 * Callers:
 *     MiObtainSystemCacheView @ 0x14003DD60 (MiObtainSystemCacheView.c)
 *     MiFreePagedPoolPages @ 0x14003E5F0 (MiFreePagedPoolPages.c)
 *     MiReleaseSystemCacheView @ 0x14006B8A0 (MiReleaseSystemCacheView.c)
 *     MiAllocatePagedPoolPages @ 0x1400AC600 (MiAllocatePagedPoolPages.c)
 *     MiInsertInSystemSpace @ 0x1400F8C80 (MiInsertInSystemSpace.c)
 *     MiRemoveFromSystemSpace @ 0x1400FA0D0 (MiRemoveFromSystemSpace.c)
 *     MiCleanWorkingSet @ 0x1401088D4 (MiCleanWorkingSet.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14012B124 (MmAdjustWorkingSetSizeEx.c)
 *     MmAllocateSpecialPool @ 0x14021F6C4 (MmAllocateSpecialPool.c)
 *     MmFreeSpecialPool @ 0x14021FC4C (MmFreeSpecialPool.c)
 *     MiUnloadSystemImage @ 0x140452B74 (MiUnloadSystemImage.c)
 *     MmCreateProcessAddressSpace @ 0x1404A2834 (MmCreateProcessAddressSpace.c)
 *     MmCleanProcessAddressSpace @ 0x1404B2FA4 (MmCleanProcessAddressSpace.c)
 *     MiConstructLoaderEntry @ 0x140576044 (MiConstructLoaderEntry.c)
 *     MmFreeBootRegistry @ 0x140598AF8 (MmFreeBootRegistry.c)
 *     MmFreeLoaderBlock @ 0x1407CFF0C (MmFreeLoaderBlock.c)
 *     MiInitializeBootProcess @ 0x1407E2258 (MiInitializeBootProcess.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiGetVmPartition @ 0x14003C15C (MiGetVmPartition.c)
 *     MiChargeResident @ 0x14003C6D0 (MiChargeResident.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MiAgeWorkingSet @ 0x140095760 (MiAgeWorkingSet.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MiRemoveWorkingSetPages @ 0x1401089A0 (MiRemoveWorkingSetPages.c)
 *     MiReduceWs @ 0x14012F17C (MiReduceWs.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiChargeWsles(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r14
  __int16 *v6; // r12
  unsigned __int8 CurrentIrql; // bp
  unsigned int v8; // edi
  signed __int32 v9; // eax
  unsigned __int8 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r10
  unsigned __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r9
  int v16; // r15d
  unsigned __int64 v17; // r11
  __int64 v18; // r14
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  char v23; // cl
  char v24; // al
  char v25; // al
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // r14
  unsigned __int64 v32; // rcx
  __int64 v33; // r9
  unsigned __int64 v34; // rax
  __int16 *VmPartition; // rax
  __int64 v36; // r8
  void *retaddr; // [rsp+48h] [rbp+0h]

  v3 = *(_QWORD *)(a1 + 184);
  if ( !v3 )
    return 1LL;
  v6 = MiSystemPartition;
  if ( (*(_BYTE *)(a1 + 216) & 7) == 0 )
    v6 = (__int16 *)MiPartitionIdToPointer(*(unsigned __int16 *)(a1 + 180));
  if ( a3 == 1 )
  {
    CurrentIrql = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1);
    }
    else
    {
      v8 = 0;
      if ( _interlockedbittestandset((volatile signed __int32 *)a1, 0x1Fu) )
        v8 = ExpWaitForSpinLockExclusiveAndAcquire(a1);
      while ( 1 )
      {
        v9 = *(_DWORD *)a1;
        if ( (*(_DWORD *)a1 & 0xBFFFFFFF) == 0x80000000 )
          break;
        if ( (v9 & 0x40000000) == 0 )
          _InterlockedCompareExchange((volatile signed __int32 *)a1, v9 | 0x40000000, v9);
        if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v8);
      }
    }
  }
  v10 = *(_BYTE *)(a1 + 216) & 7;
  if ( v10 < 2u )
  {
    v11 = *(_QWORD *)(a1 + 96);
    if ( v11 )
    {
      if ( v11 + a2 )
        v11 += 6LL;
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
    v11 = MiState[(*(_BYTE *)(a1 + 216) & 7) + 275] + MiState[(*(_BYTE *)(a1 + 216) & 7) + 270];
  }
  if ( a2 <= 0 )
  {
    v12 = v11;
    v11 += a2;
  }
  else
  {
    v12 = v11 + a2;
  }
  v13 = 0LL;
  v14 = *(_QWORD *)(v3 + 496);
  v15 = v11 * *(unsigned int *)(v3 + 64);
  v16 = 4;
  v17 = 4096LL;
  v18 = v14 + v12 * *(unsigned int *)(v3 + 64) - 1;
  v19 = v14 + v15;
  do
  {
    v20 = ~(v17 - 1);
    if ( ((v17 - 1) & v19) != 0 && (v20 & (v19 ^ v18)) == 0 )
      break;
    v21 = v20 & (v17 + v19 - 1);
    v22 = ((v20 & (v18 + v17)) - v21) / v17;
    v20 = ((v20 & (v18 + v17)) - v21) % v17;
    v17 <<= 9;
    v13 += v22;
    --v16;
  }
  while ( v16 );
  if ( a2 <= 0 )
  {
    if ( v13 )
    {
      if ( v10 >= 2u && *(_QWORD *)(a1 + 144) - v13 < *(_QWORD *)(a1 + 152) )
        MiRemoveWorkingSetPages(a1, v20);
      v27 = *(_QWORD *)(a1 + 144);
      v28 = *(_QWORD *)(a1 + 152);
      v29 = v27 - v13;
      if ( v27 - v13 < v28 )
      {
        if ( v27 < v28 )
          v13 = 0LL;
        else
          v13 = v27 - v28;
      }
      *(_QWORD *)(a1 + 144) = v29;
      if ( v13 )
      {
        MiReturnCommit(v6, v13);
        if ( v6 == MiSystemPartition )
        {
          MiReturnResidentAvailable(v13);
          _InterlockedExchangeAdd64(&qword_14034F968, v13);
        }
        else
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)v6 + 696, v13);
        }
      }
    }
    goto LABEL_23;
  }
  if ( !v13 )
  {
LABEL_23:
    v23 = *(_BYTE *)(a1 + 216);
    if ( (v23 & 7u) >= 2 )
      MiState[(v23 & 7) + 275] += a2;
    if ( CurrentIrql != 17 )
    {
      v24 = *(_BYTE *)(a1 + 219);
      if ( (v24 & 0x10) != 0 )
      {
        *(_BYTE *)(a1 + 219) = v24 & 0xEF;
        VmPartition = MiGetVmPartition(a1);
        MiAgeWorkingSet(a1, CurrentIrql, 1LL, *(unsigned __int16 *)(*((_QWORD *)VmPartition + 657) + 2358LL));
      }
      v25 = *(_BYTE *)(a1 + 219);
      if ( (v25 & 0x20) != 0 )
      {
        v36 = *(_QWORD *)(a1 + 136);
        *(_BYTE *)(a1 + 219) = v25 & 0xDF;
        MiReduceWs(a1, CurrentIrql, v36);
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1, retaddr);
      else
        *(_DWORD *)a1 = 0;
      __writecr8(CurrentIrql);
    }
    return 1LL;
  }
  v30 = *(_QWORD *)(a1 + 152);
  v31 = v13;
  v32 = *(_QWORD *)(a1 + 144);
  if ( v30 > v32 )
  {
    v34 = v30 - v32;
    if ( v34 >= v13 )
      goto LABEL_49;
    v31 = v13 - v34;
  }
  if ( !v31 )
  {
LABEL_49:
    *(_QWORD *)(a1 + 144) += v13;
    goto LABEL_23;
  }
  if ( (unsigned int)MiChargeCommit(v6, v31, 0LL) )
  {
    if ( (unsigned int)MiChargeResident(v6, v31, 0LL, v33) )
    {
      if ( v6 == MiSystemPartition )
        _InterlockedExchangeAdd64(&qword_14034F960, v31);
      goto LABEL_49;
    }
    MiReturnCommit(v6, v31);
  }
  if ( CurrentIrql != 17 )
    MiUnlockWorkingSetExclusive(a1, CurrentIrql);
  return 0LL;
}
