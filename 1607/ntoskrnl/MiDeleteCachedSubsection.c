/*
 * XREFs of MiDeleteCachedSubsection @ 0x1401DE3FC
 * Callers:
 *     MiRemoveUnusedSegments @ 0x140141D38 (MiRemoveUnusedSegments.c)
 * Callees:
 *     MiDecrementSubsectionViewCount @ 0x1400223E0 (MiDecrementSubsectionViewCount.c)
 *     MiDereferenceControlAreaFile @ 0x1400261C0 (MiDereferenceControlAreaFile.c)
 *     MiReleaseControlAreaWaiters @ 0x140026868 (MiReleaseControlAreaWaiters.c)
 *     MiRemoveUnusedSegment @ 0x140026894 (MiRemoveUnusedSegment.c)
 *     MiGetControlAreaPartition @ 0x1400268DC (MiGetControlAreaPartition.c)
 *     MiInsertUnusedSubsection @ 0x14002694C (MiInsertUnusedSubsection.c)
 *     MiInsertUnusedSegment @ 0x140026B6C (MiInsertUnusedSegment.c)
 *     MiFlushSectionInternal @ 0x140029930 (MiFlushSectionInternal.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     MiDecrementModifiedWriteCount @ 0x14008E7E4 (MiDecrementModifiedWriteCount.c)
 *     MiReduceUnusedSubsectionCount @ 0x14008FC84 (MiReduceUnusedSubsectionCount.c)
 *     MiDeleteControlArea @ 0x1400A34C8 (MiDeleteControlArea.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400C0DF0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ObFastReferenceObjectLocked @ 0x1400CF3D4 (ObFastReferenceObjectLocked.c)
 *     MiDestroySection @ 0x140112284 (MiDestroySection.c)
 *     MiAllowControlAreaDelete @ 0x1401DE25C (MiAllowControlAreaDelete.c)
 *     MiIsSubsectionClean @ 0x1401DEBCC (MiIsSubsectionClean.c)
 *     MiPurgeSubsection @ 0x1401DEEA0 (MiPurgeSubsection.c)
 *     MiReturnSubsectionCharges @ 0x1401F513C (MiReturnSubsectionCharges.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x14042AAEC (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x14042AD70 (FsRtlReleaseFileForCcFlush.c)
 */

__int64 __fastcall MiDeleteCachedSubsection(__int64 a1)
{
  volatile LONG *v1; // r15
  BOOL v2; // r12d
  __int64 v3; // rdi
  ULONG_PTR v4; // rsi
  _QWORD **v5; // r14
  KIRQL v6; // bp
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *i; // rbx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  __int64 inserted; // rbx
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  void *v22; // r13
  volatile LONG *v23; // r14
  int IsSubsectionClean; // eax
  int v25; // ebx
  KIRQL v26; // al
  struct _FILE_OBJECT *v27; // r15
  ULONG_PTR v28; // r12
  __int64 v29; // rbp
  KIRQL v30; // r9
  KIRQL v31; // al
  int v32; // ecx
  KIRQL v33; // r15
  __int64 *v34; // rbx
  __int64 v35; // rbp
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 *v40; // rsi
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // [rsp+40h] [rbp-38h] BYREF
  __int64 v44; // [rsp+80h] [rbp+8h]

  v1 = (volatile LONG *)(a1 + 1664);
  v2 = 1;
  v3 = 1LL;
  v4 = 1LL;
  v5 = (_QWORD **)(a1 + 1560);
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1664));
  for ( i = *v5; i != v5; i = (_QWORD *)*i )
  {
    v4 = (ULONG_PTR)(i - 10);
    v3 = *(i - 10);
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v3 + 72)) )
      break;
  }
  if ( i == v5 )
  {
    ExReleaseSpinLockExclusive(v1, v6);
    return 3221226021LL;
  }
  v11 = (_QWORD *)(v4 + 80);
  v12 = *(_QWORD *)(v4 + 80);
  v13 = *(__int64 **)(v4 + 88);
  if ( *(_QWORD *)(v12 + 8) != v4 + 80 || (_QWORD *)*v13 != v11 )
    __fastfail(3u);
  *v13 = v12;
  *(_QWORD *)(v12 + 8) = v13;
  *(_WORD *)(v4 + 34) &= ~8u;
  *(_QWORD *)(v4 + 88) = v4 + 80;
  *v11 = v11;
  MiReduceUnusedSubsectionCount((__int64 *)v4, v12, v7, v8);
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
  v16 = *(_DWORD *)(v3 + 56);
  if ( (v16 & 1) != 0 )
  {
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72), v6);
    return 3221225587LL;
  }
  if ( (v16 & 8) != 0 )
  {
    if ( (*(_DWORD *)(v4 + 52) & 0x80000000) != 0 )
    {
      inserted = MiInsertUnusedSubsection(v4, 1LL, v14, v15);
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72), v6);
      if ( inserted )
        MiReturnSubsectionCharges(inserted);
      return 3221225504LL;
    }
    v18 = 1;
  }
  else
  {
    v18 = 0;
  }
  *(_QWORD *)(v4 + 96) = 1LL;
  *(_WORD *)(v4 + 32) &= ~1u;
  MiRemoveUnusedSegment(v3);
  *(_DWORD *)(v3 + 56) |= 0x100u;
  v22 = *(void **)(v4 + 8);
  if ( v18 == 1 )
  {
    ++*(_DWORD *)(v3 + 76);
    v23 = (volatile LONG *)(v3 + 72);
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72), v6);
    IsSubsectionClean = MiIsSubsectionClean(v4);
    if ( IsSubsectionClean )
    {
      if ( IsSubsectionClean == 1 )
      {
        v26 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
        *(_DWORD *)(v4 + 52) |= 0x80000000;
        ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72), v26);
      }
      v25 = -1073741792;
    }
    else
    {
      v25 = 0;
    }
  }
  else
  {
    _InterlockedAdd64((volatile signed __int64 *)(v3 + 112), 1uLL);
    *(_QWORD *)(MiGetControlAreaPartition(v3, v19, v20, v21) + 1528) = v3;
    v23 = (volatile LONG *)(v3 + 72);
    v27 = (struct _FILE_OBJECT *)ObFastReferenceObjectLocked((_QWORD *)(v3 + 64));
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72), v6);
    v28 = *(_QWORD *)(v4 + 8);
    v44 = v28 + 8 * (*(unsigned int *)(v4 + 44) - 1LL);
    v25 = FsRtlAcquireFileForCcFlushEx(v27);
    ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
    v29 = MiAllowControlAreaDelete(v3);
    if ( v25 < 0 || (*(_DWORD *)(v3 + 56) & 1) != 0 )
    {
      if ( v29 )
        ++*(_DWORD *)(v3 + 76);
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72), v30);
      if ( v25 >= 0 )
      {
        FsRtlReleaseFileForCcFlush(v27);
        v25 = -1073741431;
      }
      if ( !v29 )
      {
        MiDeleteControlArea(v3);
        ObfDereferenceObjectWithTag(v27, 0x746C6644u);
        return (unsigned int)v25;
      }
    }
    else
    {
      ++*(_DWORD *)(v3 + 76);
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72), v30);
      KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)1;
      v25 = MiFlushSectionInternal(v28, v44, (__int64 *)v4, v4, 0LL, 2, &v43);
      KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = 0LL;
      FsRtlReleaseFileForCcFlush(v27);
    }
    MiDereferenceControlAreaFile(v3, (unsigned __int64)v27);
    v2 = 1;
  }
  v31 = ExAcquireSpinLockExclusive(v23);
  v32 = *(_DWORD *)(v3 + 56);
  v33 = v31;
  if ( (v32 & 1) == 0 )
  {
    if ( v25 >= 0 )
    {
      if ( *(_QWORD *)(v4 + 96) != 1LL || (*(_BYTE *)(v4 + 32) & 1) != 0 )
      {
        v25 = -1073741823;
      }
      else
      {
        ExReleaseSpinLockExclusive(v23, v31);
        v2 = MiPurgeSubsection(v4) == 0;
        v33 = ExAcquireSpinLockExclusive(v23);
      }
    }
    *(_DWORD *)(v3 + 56) &= ~0x100u;
    if ( (*(_DWORD *)(v3 + 56) & 1) != 0 )
      goto LABEL_43;
    v35 = 0LL;
    if ( v2 || *(_QWORD *)(v4 + 96) != 1LL || *(_DWORD *)(v4 + 104) || (*(_BYTE *)(v4 + 32) & 1) != 0 )
    {
      v25 = -1073741823;
      v35 = MiDecrementSubsectionViewCount(v4, 0);
      if ( !*(_QWORD *)(v4 + 96) )
        v35 += MiInsertUnusedSubsection(v36, 1LL, v37, v38);
      v22 = 0LL;
    }
    else
    {
      *(_QWORD *)(v4 + 8) = 0LL;
      *(_QWORD *)(v4 + 96) = 0LL;
    }
    v40 = MiDecrementModifiedWriteCount(v3, 1);
    if ( !(*(_QWORD *)(v3 + 24) | *(_QWORD *)(v3 + 40)) )
    {
      if ( !*(_QWORD *)(v3 + 32) )
      {
        MiDestroySection(v3, v33, 0LL);
        goto LABEL_59;
      }
      v35 += MiInsertUnusedSegment(v3, v39, v41, v42);
    }
    ExReleaseSpinLockExclusive(v23, v33);
LABEL_59:
    if ( v40 )
      MiReleaseControlAreaWaiters(v40);
    if ( v35 )
      MiReturnSubsectionCharges(v35);
    if ( v22 )
      ExFreePoolWithTag(v22, 0);
    return (unsigned int)v25;
  }
  *(_DWORD *)(v3 + 56) = v32 & 0xFFFFFEFF;
LABEL_43:
  MiDecrementSubsectionViewCount(v4, 0);
  v34 = MiDecrementModifiedWriteCount(v3, 1);
  ExReleaseSpinLockExclusive(v23, v33);
  if ( v34 )
    MiReleaseControlAreaWaiters(v34);
  return 3221225473LL;
}
