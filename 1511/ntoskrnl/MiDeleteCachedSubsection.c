/*
 * XREFs of MiDeleteCachedSubsection @ 0x1401D0BA0
 * Callers:
 *     MiRemoveUnusedSegments @ 0x140138B1C (MiRemoveUnusedSegments.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiDeleteControlArea @ 0x14000BB08 (MiDeleteControlArea.c)
 *     MiReleaseControlAreaWaiters @ 0x14000C640 (MiReleaseControlAreaWaiters.c)
 *     ObFastReferenceObjectLocked @ 0x14000D5AC (ObFastReferenceObjectLocked.c)
 *     MiDecrementModifiedWriteCount @ 0x140038E48 (MiDecrementModifiedWriteCount.c)
 *     MI_UNUSED_SUBSECTIONS_COUNT_REMOVE @ 0x14003A580 (MI_UNUSED_SUBSECTIONS_COUNT_REMOVE.c)
 *     MiRemoveUnusedSegment @ 0x14003AB30 (MiRemoveUnusedSegment.c)
 *     MI_DEREFERENCE_CONTROL_AREA_FILE @ 0x14003AD10 (MI_DEREFERENCE_CONTROL_AREA_FILE.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiFlushSectionInternal @ 0x140063C80 (MiFlushSectionInternal.c)
 *     MiInsertUnusedSegment @ 0x1400A8590 (MiInsertUnusedSegment.c)
 *     MiInsertUnusedSubsection @ 0x1400A86E0 (MiInsertUnusedSubsection.c)
 *     MiDecrementSubsectionViewCount @ 0x1400A8DA0 (MiDecrementSubsectionViewCount.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400DAD80 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiDestroySection @ 0x1401070FC (MiDestroySection.c)
 *     MiIsSubsectionClean @ 0x1401D12F4 (MiIsSubsectionClean.c)
 *     MiPurgeSubsection @ 0x1401D1590 (MiPurgeSubsection.c)
 *     MiReturnSubsectionCharges @ 0x1401E3170 (MiReturnSubsectionCharges.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1404556F4 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x140455928 (FsRtlAcquireFileForCcFlushEx.c)
 */

__int64 __fastcall MiDeleteCachedSubsection(__int64 a1)
{
  volatile LONG *v1; // r15
  BOOL v2; // r12d
  __int64 v3; // rdi
  ULONG_PTR v4; // rsi
  _QWORD **v5; // r14
  KIRQL v6; // bp
  _QWORD *i; // rbx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  int v12; // eax
  __int64 inserted; // rbx
  int v14; // ebx
  void *v15; // r13
  volatile LONG *v16; // r14
  int IsSubsectionClean; // eax
  int v18; // ebx
  KIRQL v19; // al
  struct _FILE_OBJECT *v20; // r15
  ULONG_PTR v21; // r12
  KIRQL v22; // al
  signed __int64 v23; // rbp
  KIRQL v24; // al
  int v25; // ecx
  KIRQL v26; // r15
  int v27; // r11d
  _QWORD *v28; // rbx
  __int64 v29; // rbp
  _QWORD *v30; // rsi
  _DWORD v31[4]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v32; // [rsp+80h] [rbp+8h]

  v1 = (volatile LONG *)(a1 + 1536);
  v2 = 1;
  v3 = 1LL;
  v4 = 1LL;
  v5 = (_QWORD **)(a1 + 1424);
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1536));
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
  v9 = (_QWORD *)(v4 + 80);
  v10 = *(_QWORD *)(v4 + 80);
  v11 = *(_QWORD **)(v4 + 88);
  if ( *(_QWORD *)(v10 + 8) != v4 + 80 || (_QWORD *)*v11 != v9 )
    __fastfail(3u);
  *v11 = v10;
  *(_QWORD *)(v10 + 8) = v11;
  *(_WORD *)(v4 + 34) &= ~8u;
  *(_QWORD *)(v4 + 88) = v4 + 80;
  *v9 = v9;
  MI_UNUSED_SUBSECTIONS_COUNT_REMOVE(v4);
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
  v12 = *(_DWORD *)(v3 + 56);
  if ( (v12 & 1) != 0 )
  {
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72), v6);
    return 3221225587LL;
  }
  if ( (v12 & 8) != 0 )
  {
    if ( (*(_DWORD *)(v4 + 52) & 0x80000000) != 0 )
    {
      inserted = MiInsertUnusedSubsection(v4, 1);
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72), v6);
      if ( inserted )
        MiReturnSubsectionCharges(inserted);
      return 3221225504LL;
    }
    v14 = 1;
  }
  else
  {
    v14 = 0;
  }
  *(_QWORD *)(v4 + 96) = 1LL;
  *(_WORD *)(v4 + 32) &= ~1u;
  MiRemoveUnusedSegment(v3);
  *(_DWORD *)(v3 + 56) |= 0x100u;
  v15 = *(void **)(v4 + 8);
  if ( v14 == 1 )
  {
    ++*(_DWORD *)(v3 + 76);
    v16 = (volatile LONG *)(v3 + 72);
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72), v6);
    IsSubsectionClean = MiIsSubsectionClean(v4);
    if ( IsSubsectionClean )
    {
      if ( IsSubsectionClean == 1 )
      {
        v19 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
        *(_DWORD *)(v4 + 52) |= 0x80000000;
        ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72), v19);
      }
      v18 = -1073741792;
    }
    else
    {
      v18 = 0;
    }
  }
  else
  {
    _InterlockedAdd64((volatile signed __int64 *)(v3 + 104), 1uLL);
    v16 = (volatile LONG *)(v3 + 72);
    v20 = (struct _FILE_OBJECT *)ObFastReferenceObjectLocked((_QWORD *)(v3 + 64));
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72), v6);
    v21 = *(_QWORD *)(v4 + 8);
    v32 = v21 + 8 * (*(unsigned int *)(v4 + 44) - 1LL);
    v18 = FsRtlAcquireFileForCcFlushEx(v20);
    v22 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
    v23 = _InterlockedDecrement64((volatile signed __int64 *)(v3 + 104));
    if ( v18 < 0 || (*(_DWORD *)(v3 + 56) & 1) != 0 )
    {
      if ( v23 )
        ++*(_DWORD *)(v3 + 76);
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72), v22);
      if ( v18 >= 0 )
      {
        FsRtlReleaseFileForCcFlush(v20);
        v18 = -1073741431;
      }
      if ( !v23 )
      {
        MiDeleteControlArea(v3);
        ObfDereferenceObjectWithTag(v20, 0x746C6644u);
        return (unsigned int)v18;
      }
    }
    else
    {
      ++*(_DWORD *)(v3 + 76);
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72), v22);
      KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)1;
      v18 = MiFlushSectionInternal(v21, v32, (__int64 *)v4, v4, 0LL, 2, v31);
      KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = 0LL;
      FsRtlReleaseFileForCcFlush(v20);
    }
    MI_DEREFERENCE_CONTROL_AREA_FILE(v3, (unsigned __int64)v20);
    v2 = 1;
  }
  v24 = ExAcquireSpinLockExclusive(v16);
  v25 = *(_DWORD *)(v3 + 56);
  v26 = v24;
  if ( (v25 & 1) == 0 )
  {
    if ( v18 >= 0 )
    {
      if ( *(_QWORD *)(v4 + 96) != 1LL || (*(_BYTE *)(v4 + 32) & 1) != 0 )
      {
        v18 = -1073741823;
      }
      else
      {
        ExReleaseSpinLockExclusive(v16, v24);
        v2 = MiPurgeSubsection(v4) == 0;
        v26 = ExAcquireSpinLockExclusive(v16);
      }
    }
    *(_DWORD *)(v3 + 56) &= ~0x100u;
    v27 = 1;
    if ( (*(_DWORD *)(v3 + 56) & 1) != 0 )
      goto LABEL_43;
    v29 = 0LL;
    if ( v2 || *(_QWORD *)(v4 + 96) != 1LL || *(_DWORD *)(v4 + 104) || (*(_BYTE *)(v4 + 32) & 1) != 0 )
    {
      v18 = -1073741823;
      v29 = MiDecrementSubsectionViewCount(v4, 0LL);
      if ( !*(_QWORD *)(v4 + 96) )
      {
        v29 += MiInsertUnusedSubsection(v4, v27);
        v27 = 1;
      }
      v15 = 0LL;
    }
    else
    {
      *(_QWORD *)(v4 + 8) = 0LL;
      *(_QWORD *)(v4 + 96) = 0LL;
    }
    v30 = (_QWORD *)MiDecrementModifiedWriteCount(v3, v27);
    if ( !(*(_QWORD *)(v3 + 24) | *(_QWORD *)(v3 + 40)) )
    {
      if ( !*(_QWORD *)(v3 + 32) )
      {
        MiDestroySection(v3, v26, 0LL);
        goto LABEL_59;
      }
      v29 += MiInsertUnusedSegment(v3);
    }
    ExReleaseSpinLockExclusive(v16, v26);
LABEL_59:
    if ( v30 )
      MiReleaseControlAreaWaiters(v30);
    if ( v29 )
      MiReturnSubsectionCharges(v29);
    if ( v15 )
      ExFreePoolWithTag(v15, 0);
    return (unsigned int)v18;
  }
  *(_DWORD *)(v3 + 56) = v25 & 0xFFFFFEFF;
LABEL_43:
  MiDecrementSubsectionViewCount(v4, 0LL);
  v28 = (_QWORD *)MiDecrementModifiedWriteCount(v3, 1);
  ExReleaseSpinLockExclusive(v16, v26);
  if ( v28 )
    MiReleaseControlAreaWaiters(v28);
  return 3221225473LL;
}
