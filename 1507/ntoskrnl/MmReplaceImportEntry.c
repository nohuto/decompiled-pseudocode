/*
 * XREFs of MmReplaceImportEntry @ 0x14020E664
 * Callers:
 *     KsepPatchImportTableEntry @ 0x14069CDAC (KsepPatchImportTableEntry.c)
 *     ViThunkReplaceAllThunkedImports @ 0x140745374 (ViThunkReplaceAllThunkedImports.c)
 *     ViThunkReplaceImportEntry @ 0x1407454CC (ViThunkReplaceImportEntry.c)
 *     ViThunkReplaceImportIfThunkedRegular @ 0x140745540 (ViThunkReplaceImportIfThunkedRegular.c)
 *     ViThunkReplaceSharedExports @ 0x14074559C (ViThunkReplaceSharedExports.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x140010760 (MiLookupDataTableEntry.c)
 *     RtlImageDirectoryEntryToData @ 0x14002B16C (RtlImageDirectoryEntryToData.c)
 *     MiCaptureDirtyBitToPfn @ 0x14003C844 (MiCaptureDirtyBitToPfn.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiCopyOnWriteEx @ 0x140058250 (MiCopyOnWriteEx.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14005A4E0 (MiUnmapPageInHyperSpaceWorker.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400E6520 (MiMapPageInHyperSpaceWorker.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

// local variable allocation has failed, the output may be wrong!
char __fastcall MmReplaceImportEntry(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter4)
{
  PVOID *v4; // rax
  ULONG_PTR v5; // rbx
  PVOID v6; // rax
  char result; // al
  ULONG_PTR v8; // r14
  volatile signed __int32 *v9; // rbx
  unsigned __int8 CurrentIrql; // r15
  unsigned int v11; // esi
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned int v17; // esi
  unsigned __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rsi
  _QWORD *v21; // rcx
  unsigned int v22; // edi
  __int16 *v23; // rax
  unsigned __int64 v24; // r9
  ULONG Size; // [rsp+80h] [rbp+18h] BYREF
  unsigned __int64 v27; // [rsp+88h] [rbp+20h] BYREF

  if ( PsLoadedModuleList )
  {
    v4 = MiLookupDataTableEntry(BugCheckParameter2, 0);
    v5 = (ULONG_PTR)v4;
    if ( !v4 )
      KeBugCheckEx(0x1Au, 0x1014uLL, 0LL, BugCheckParameter2, BugCheckParameter4);
    v6 = RtlImageDirectoryEntryToData(v4[6], 1u, 0xCu, &Size);
    if ( !v6 || !Size || BugCheckParameter2 < (unsigned __int64)v6 || BugCheckParameter2 >= (unsigned __int64)v6 + Size )
      KeBugCheckEx(0x1Au, 0x1014uLL, v5, BugCheckParameter2, BugCheckParameter4);
  }
  result = *(_BYTE *)(((BugCheckParameter2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  if ( result >= 0 )
  {
    v8 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( BugCheckParameter2 + 0x70000000000LL > 0x7FFFFFFFFFLL )
      v9 = dword_14034FF40;
    else
      v9 = (volatile signed __int32 *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 2968);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      goto LABEL_35;
    v11 = 0;
    if ( _interlockedbittestandset(v9, 0x1Fu) )
      v11 = ExpWaitForSpinLockExclusiveAndAcquire(v9);
    v12 = *(unsigned int *)v9;
    v13 = v12 & 0xFFFFFFFFBFFFFFFFuLL;
    if ( (v12 & 0xBFFFFFFF) != 0x80000000 )
    {
      do
      {
        if ( (v12 & 0x40000000) == 0 )
        {
          v13 = (unsigned int)v12;
          LODWORD(v13) = v12 | 0x40000000;
          _InterlockedCompareExchange(v9, v12 | 0x40000000, v12);
        }
        if ( (++v11 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v11);
        v12 = *(unsigned int *)v9;
      }
      while ( (*v9 & 0xBFFFFFFF) != 0x80000000 );
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v14 = *(_QWORD *)v8;
        if ( v8 + 0x90482413000LL <= 0x7F8
          && (unsigned int)MiPteHasShadow(v13, v12)
          && (v14 & 1) != 0
          && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
        {
          v15 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
          if ( v15 )
          {
            v16 = *(_QWORD *)(v15 + 8 * ((v8 >> 3) & 0x1FF));
            if ( (v16 & 0x20) != 0 )
              v14 |= 0x20uLL;
            if ( (v16 & 0x42) != 0 )
              v14 |= 0x42uLL;
          }
        }
        v27 = v14;
        if ( (v14 & 1) != 0 )
          break;
        MiUnlockWorkingSetExclusive((__int64)v9, CurrentIrql);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
LABEL_35:
          ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v9);
        }
        else
        {
          v17 = 0;
          if ( _interlockedbittestandset(v9, 0x1Fu) )
            v17 = ExpWaitForSpinLockExclusiveAndAcquire(v9);
          v12 = *(unsigned int *)v9;
          v13 = v12 & 0xFFFFFFFFBFFFFFFFuLL;
          if ( (v12 & 0xBFFFFFFF) != 0x80000000 )
          {
            do
            {
              if ( (v12 & 0x40000000) == 0 )
              {
                v13 = (unsigned int)v12 | 0x40000000;
                _InterlockedCompareExchange(v9, v13, v12);
              }
              if ( (++v17 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v17);
              v12 = *(unsigned int *)v9;
            }
            while ( (*v9 & 0xBFFFFFFF) != 0x80000000 );
          }
        }
      }
      v18 = v14;
      if ( (unsigned __int64)&STACK[0x90482413088] <= 0x7F8 )
        v18 = MiReadPteShadow(&v27, v14);
      v19 = (v18 >> 12) & 0xFFFFFFFFFLL;
      v20 = 48 * v19 - 0x58000000000LL;
      if ( (*(_QWORD *)(v20 + 40) & 0x200000000000000LL) == 0 )
        break;
      MiCopyOnWriteEx(
        BugCheckParameter2,
        (volatile __int64 *)(((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
        -1LL,
        CurrentIrql,
        0);
    }
    if ( (v14 & 0x42) != 0 )
    {
      *(_QWORD *)BugCheckParameter2 = BugCheckParameter4;
    }
    else
    {
      v21 = (_QWORD *)((BugCheckParameter2 & 0xFFF) + MiMapPageInHyperSpaceWorker(v19, 0LL));
      *v21 = BugCheckParameter4;
      MiUnmapPageInHyperSpaceWorker((__int64)v21, 0x11u);
      v22 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v22 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v22);
        }
        while ( *(__int64 *)(v20 + 24) < 0 );
      }
      MiCaptureDirtyBitToPfn(v20);
      v23 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v20 + 40)) >> 8) & 0x3FF);
      _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v24 )
        MiReleasePageFileInfo((struct _KEVENT *)v23, v24, 1);
    }
    return MiUnlockWorkingSetExclusive((__int64)v9, CurrentIrql);
  }
  else
  {
    *(_QWORD *)BugCheckParameter2 = BugCheckParameter4;
  }
  return result;
}
