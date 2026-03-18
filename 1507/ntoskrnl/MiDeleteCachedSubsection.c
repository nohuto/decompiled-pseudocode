/*
 * XREFs of MiDeleteCachedSubsection @ 0x140210AF8
 * Callers:
 *     MiRemoveUnusedSegments @ 0x140167F4C (MiRemoveUnusedSegments.c)
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140028FE0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     MiDecrementSubsectionViewCount @ 0x140054300 (MiDecrementSubsectionViewCount.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MI_UNUSED_SUBSECTIONS_COUNT_REMOVE @ 0x140082CB0 (MI_UNUSED_SUBSECTIONS_COUNT_REMOVE.c)
 *     MiDeleteControlArea @ 0x140083920 (MiDeleteControlArea.c)
 *     ObFastReferenceObjectLocked @ 0x140085588 (ObFastReferenceObjectLocked.c)
 *     MiDecrementModifiedWriteCount @ 0x14008563C (MiDecrementModifiedWriteCount.c)
 *     MiRemoveUnusedSegment @ 0x1400886B0 (MiRemoveUnusedSegment.c)
 *     MiReleaseControlAreaWaiters @ 0x1400887AC (MiReleaseControlAreaWaiters.c)
 *     MI_DEREFERENCE_CONTROL_AREA_FILE @ 0x140088A90 (MI_DEREFERENCE_CONTROL_AREA_FILE.c)
 *     MiInsertUnusedSegment @ 0x140089B00 (MiInsertUnusedSegment.c)
 *     MiFlushSectionInternal @ 0x14008D1E0 (MiFlushSectionInternal.c)
 *     MiInsertUnusedSubsection @ 0x14010E120 (MiInsertUnusedSubsection.c)
 *     MiDestroySection @ 0x140158E20 (MiDestroySection.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiIsSubsectionClean @ 0x140211890 (MiIsSubsectionClean.c)
 *     MiPurgeSubsection @ 0x140211C88 (MiPurgeSubsection.c)
 *     MiReturnSubsectionCharges @ 0x140230538 (MiReturnSubsectionCharges.c)
 *     MiDeleteFileExtents @ 0x140230578 (MiDeleteFileExtents.c)
 *     MiMarkFileExtentsDeleted @ 0x140230CE4 (MiMarkFileExtentsDeleted.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1404B1FB8 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1404B2240 (FsRtlReleaseFileForCcFlush.c)
 */

__int64 __fastcall MiDeleteCachedSubsection(__int64 a1)
{
  __int64 v2; // rdi
  ULONG_PTR v3; // rsi
  unsigned __int8 CurrentIrql; // bp
  _QWORD **v5; // r14
  _QWORD *i; // rbx
  unsigned int v7; // ebx
  __int64 result; // rax
  _QWORD *v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  char v12; // dl
  int v13; // eax
  __int64 inserted; // rbx
  int v15; // ebx
  volatile signed __int32 *v16; // rbx
  int IsSubsectionClean; // eax
  int v18; // r14d
  unsigned __int8 v19; // r14
  unsigned int v20; // ebp
  signed __int32 v21; // eax
  struct _FILE_OBJECT *v22; // r15
  unsigned __int64 v23; // r12
  unsigned __int8 v24; // r13
  unsigned int v25; // ebp
  signed __int32 v26; // eax
  signed __int64 v27; // rbp
  unsigned __int8 v28; // r12
  int v29; // eax
  unsigned int v30; // ebp
  signed __int32 v31; // eax
  int v32; // eax
  unsigned int v33; // ebp
  signed __int32 v34; // eax
  int v35; // ecx
  _QWORD *v36; // rdi
  int v37; // r8d
  __int64 v38; // rbp
  void *v39; // r15
  __int64 v40; // rdx
  __int64 v41; // rcx
  _QWORD *v42; // rsi
  bool v43; // zf
  _DWORD v44[18]; // [rsp+40h] [rbp-48h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  struct _FILE_OBJECT *v46; // [rsp+90h] [rbp+8h]
  BOOL v47; // [rsp+90h] [rbp+8h]
  PVOID P; // [rsp+98h] [rbp+10h]
  __int64 v49; // [rsp+A0h] [rbp+18h]

  v2 = 0LL;
  v3 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_14034E740);
  }
  else
  {
    v7 = 0;
    if ( _interlockedbittestandset(&dword_14034E740, 0x1Fu) )
      v7 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_14034E740);
    while ( (dword_14034E740 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (dword_14034E740 & 0x40000000) == 0 )
        _InterlockedCompareExchange(&dword_14034E740, dword_14034E740 | 0x40000000, dword_14034E740);
      if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v7);
    }
  }
  v5 = (_QWORD **)(a1 + 1376);
  for ( i = *v5; i != v5; i = (_QWORD *)*i )
  {
    v3 = (ULONG_PTR)(i - 10);
    v2 = *(i - 10);
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v2 + 72)) )
      break;
  }
  if ( i == v5 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E740, retaddr);
    else
      dword_14034E740 = 0;
    result = 3221226021LL;
LABEL_31:
    __writecr8(CurrentIrql);
    return result;
  }
  v9 = (_QWORD *)(v3 + 80);
  v10 = *(_QWORD *)(v3 + 80);
  v11 = *(_QWORD **)(v3 + 88);
  if ( *(_QWORD *)(v10 + 8) != v3 + 80 || (_QWORD *)*v11 != v9 )
    __fastfail(3u);
  *v11 = v10;
  *(_QWORD *)(v10 + 8) = v11;
  *(_WORD *)(v3 + 34) &= ~8u;
  *(_QWORD *)(v3 + 88) = v3 + 80;
  *v9 = v9;
  MI_UNUSED_SUBSECTIONS_COUNT_REMOVE(v3);
  v12 = BYTE6(PerfGlobalGroupMask);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E740, retaddr);
    v12 = BYTE6(PerfGlobalGroupMask);
  }
  else
  {
    dword_14034E740 = 0;
  }
  v13 = *(_DWORD *)(v2 + 56);
  if ( (v13 & 1) != 0 )
  {
    if ( (v12 & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v2 + 72, retaddr);
    else
      *(_DWORD *)(v2 + 72) = 0;
    result = 3221225587LL;
    goto LABEL_31;
  }
  if ( (v13 & 8) != 0 )
  {
    if ( (*(_BYTE *)(v3 + 34) & 4) != 0 )
    {
      inserted = MiInsertUnusedSubsection(v3, 1);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v2 + 72, retaddr);
      else
        *(_DWORD *)(v2 + 72) = 0;
      __writecr8(CurrentIrql);
      if ( inserted )
        MiReturnSubsectionCharges(inserted);
      return 3221225504LL;
    }
    v15 = 1;
  }
  else
  {
    v15 = 0;
  }
  *(_QWORD *)(v3 + 96) = 1LL;
  *(_WORD *)(v3 + 32) &= ~1u;
  MiRemoveUnusedSegment(v2);
  *(_DWORD *)(v2 + 56) |= 0x100u;
  P = *(PVOID *)(v3 + 8);
  if ( v15 == 1 )
  {
    ++*(_DWORD *)(v2 + 76);
    v16 = (volatile signed __int32 *)(v2 + 72);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v2 + 72, retaddr);
    else
      *v16 = 0;
    __writecr8(CurrentIrql);
    IsSubsectionClean = MiIsSubsectionClean(v3);
    if ( IsSubsectionClean )
    {
      if ( IsSubsectionClean == 1 )
      {
        v19 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v2 + 72);
        }
        else
        {
          v20 = 0;
          if ( _interlockedbittestandset(v16, 0x1Fu) )
            v20 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(v2 + 72));
          while ( 1 )
          {
            v21 = *v16;
            if ( (*v16 & 0xBFFFFFFF) == 0x80000000 )
              break;
            if ( (v21 & 0x40000000) == 0 )
              _InterlockedCompareExchange(v16, v21 | 0x40000000, v21);
            if ( (++v20 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v20);
          }
        }
        *(_WORD *)(v3 + 34) |= 4u;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v2 + 72, retaddr);
        else
          *v16 = 0;
        __writecr8(v19);
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
    _InterlockedAdd64((volatile signed __int64 *)(v2 + 104), 1uLL);
    v46 = (struct _FILE_OBJECT *)ObFastReferenceObjectLocked((_QWORD *)(v2 + 64));
    v16 = (volatile signed __int32 *)(v2 + 72);
    v22 = v46;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v2 + 72, retaddr);
    else
      *v16 = 0;
    __writecr8(CurrentIrql);
    v23 = *(_QWORD *)(v3 + 8);
    v49 = v23 + 8 * (*(unsigned int *)(v3 + 44) - 1LL);
    v18 = FsRtlAcquireFileForCcFlushEx(v46);
    v24 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v2 + 72);
    }
    else
    {
      v25 = 0;
      if ( _interlockedbittestandset(v16, 0x1Fu) )
        v25 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(v2 + 72));
      while ( 1 )
      {
        v26 = *v16;
        if ( (*v16 & 0xBFFFFFFF) == 0x80000000 )
          break;
        if ( (v26 & 0x40000000) == 0 )
          _InterlockedCompareExchange(v16, v26 | 0x40000000, v26);
        if ( (++v25 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v25);
      }
      v22 = v46;
    }
    v27 = _InterlockedDecrement64((volatile signed __int64 *)(v2 + 104));
    if ( v18 < 0 || (*(_DWORD *)(v2 + 56) & 1) != 0 )
    {
      if ( v27 )
        ++*(_DWORD *)(v2 + 76);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v2 + 72, retaddr);
      else
        *v16 = 0;
      __writecr8(v24);
      if ( v18 >= 0 )
      {
        FsRtlReleaseFileForCcFlush(v22);
        v18 = -1073741431;
      }
      if ( !v27 )
      {
        MiDeleteControlArea(v2);
        ObfDereferenceObjectWithTag(v22, 0x746C6644u);
        return (unsigned int)v18;
      }
    }
    else
    {
      ++*(_DWORD *)(v2 + 76);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v2 + 72, retaddr);
      else
        *v16 = 0;
      __writecr8(v24);
      KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)1;
      v18 = MiFlushSectionInternal(v23, v49, (__int64 *)v3, v3, 0LL, 2, v44);
      KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = 0LL;
      FsRtlReleaseFileForCcFlush(v22);
    }
    MI_DEREFERENCE_CONTROL_AREA_FILE(v2, (unsigned __int64)v22);
  }
  v28 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v16);
  }
  else
  {
    v30 = 0;
    if ( _interlockedbittestandset(v16, 0x1Fu) )
      v30 = ExpWaitForSpinLockExclusiveAndAcquire(v16);
    while ( 1 )
    {
      v31 = *v16;
      if ( (*v16 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v31 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v16, v31 | 0x40000000, v31);
      if ( (++v30 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v30);
    }
  }
  v29 = *(_DWORD *)(v2 + 56);
  if ( (v29 & 1) == 0 )
  {
    if ( v18 >= 0 )
    {
      if ( *(_QWORD *)(v3 + 96) == 1LL && (*(_BYTE *)(v3 + 32) & 1) == 0 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v16, retaddr);
        else
          *v16 = 0;
        __writecr8(v28);
        v47 = MiPurgeSubsection(v3) == 0;
        v28 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v16);
        }
        else
        {
          v33 = 0;
          if ( _interlockedbittestandset(v16, 0x1Fu) )
            v33 = ExpWaitForSpinLockExclusiveAndAcquire(v16);
          while ( 1 )
          {
            v34 = *v16;
            if ( (*v16 & 0xBFFFFFFF) == 0x80000000 )
              break;
            if ( (v34 & 0x40000000) == 0 )
              _InterlockedCompareExchange(v16, v34 | 0x40000000, v34);
            if ( (++v33 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v33);
          }
        }
        v32 = v47;
LABEL_130:
        *(_DWORD *)(v2 + 56) &= ~0x100u;
        v35 = *(_DWORD *)(v2 + 56);
        if ( (v35 & 1) != 0 )
          goto LABEL_131;
        v37 = 1;
        v38 = 0LL;
        v39 = 0LL;
        if ( v32 == 1
          || *(_QWORD *)(v3 + 96) != 1LL
          || (v40 = 0LL, *(_QWORD *)(v3 + 104))
          || (*(_BYTE *)(v3 + 32) & 1) != 0 )
        {
          v18 = -1073741823;
          v38 = MiDecrementSubsectionViewCount((unsigned int *)v3, 0);
          if ( !*(_QWORD *)(v3 + 96) )
            v38 += MiInsertUnusedSubsection(v41, 1);
          P = 0LL;
          v37 = 1;
        }
        else
        {
          if ( (v35 & 0x40000000) != 0 )
            v39 = (void *)MiMarkFileExtentsDeleted(v3);
          *(_QWORD *)(v3 + 8) = v40;
          *(_QWORD *)(v3 + 96) = v40;
        }
        v42 = (_QWORD *)MiDecrementModifiedWriteCount(v2, v37);
        if ( *(_QWORD *)(v2 + 24) | *(_QWORD *)(v2 + 40) )
        {
          v43 = (BYTE6(PerfGlobalGroupMask) & 1) == 0;
        }
        else
        {
          if ( !*(_QWORD *)(v2 + 32) )
          {
            MiDestroySection(v2, v28);
LABEL_156:
            if ( v42 )
              MiReleaseControlAreaWaiters(v42);
            if ( v39 )
              MiDeleteFileExtents(v39);
            if ( v38 )
              MiReturnSubsectionCharges(v38);
            if ( P )
              ExFreePoolWithTag(P, 0);
            return (unsigned int)v18;
          }
          v38 += MiInsertUnusedSegment(v2);
          v43 = (BYTE6(PerfGlobalGroupMask) & 1) == 0;
        }
        if ( v43 )
          *v16 = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v16, retaddr);
        __writecr8(v28);
        goto LABEL_156;
      }
      v18 = -1073741823;
    }
    v32 = 1;
    goto LABEL_130;
  }
  *(_DWORD *)(v2 + 56) = v29 & 0xFFFFFEFF;
LABEL_131:
  MiDecrementSubsectionViewCount((unsigned int *)v3, 0);
  v36 = (_QWORD *)MiDecrementModifiedWriteCount(v2, 1);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v16, retaddr);
  else
    *v16 = 0;
  __writecr8(v28);
  if ( v36 )
    MiReleaseControlAreaWaiters(v36);
  return 3221225473LL;
}
