/*
 * XREFs of MmReplaceImportEntry @ 0x1401E5DD4
 * Callers:
 *     KsepPatchImportTableEntry @ 0x1406534F8 (KsepPatchImportTableEntry.c)
 *     ViThunkReplaceAllThunkedImports @ 0x14070FB94 (ViThunkReplaceAllThunkedImports.c)
 *     ViThunkReplaceImportEntry @ 0x14070FCF0 (ViThunkReplaceImportEntry.c)
 *     ViThunkReplaceImportIfThunkedRegular @ 0x14070FD64 (ViThunkReplaceImportIfThunkedRegular.c)
 *     ViThunkReplaceSharedExports @ 0x14070FDC4 (ViThunkReplaceSharedExports.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x1400145B0 (MiLookupDataTableEntry.c)
 *     MiCaptureDirtyBitToPfn @ 0x1400158E0 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14001D720 (MiUnmapPageInHyperSpaceWorker.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140025B30 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140034510 (MiMapPageInHyperSpaceWorker.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     RtlImageDirectoryEntryToData @ 0x14007BB6C (RtlImageDirectoryEntryToData.c)
 *     MiCopyOnWriteEx @ 0x1400E05D0 (MiCopyOnWriteEx.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MmReplaceImportEntry(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter4)
{
  PVOID *v4; // rax
  ULONG_PTR v5; // rbx
  PVOID v6; // rax
  __int64 result; // rax
  char *AnyMultiplexedVm; // rbp
  LONG *SharedVm; // rbx
  KIRQL v10; // al
  char i; // r15
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  char v14; // r9
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  struct _KEVENT *v20; // rax
  unsigned __int64 v21; // r9
  ULONG Size; // [rsp+70h] [rbp+18h] BYREF
  __int64 v23; // [rsp+78h] [rbp+20h] BYREF

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
  result = MI_IS_PHYSICAL_ADDRESS(BugCheckParameter2);
  if ( (_DWORD)result )
  {
    *(_QWORD *)BugCheckParameter2 = BugCheckParameter4;
  }
  else
  {
    if ( BugCheckParameter2 < qword_140326950 || BugCheckParameter2 >= qword_140326950 + 0x8000000000LL )
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    else
      AnyMultiplexedVm = (char *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008);
LABEL_13:
    SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
    v10 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    for ( i = v10;
          ;
          MiCopyOnWriteEx(
            BugCheckParameter2,
            ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
            -1LL,
            i,
            0) )
    {
      v23 = MI_READ_PTE_LOCK_FREE(((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      if ( (v23 & 1) == 0 )
      {
        LOBYTE(v12) = i;
        MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v12);
        goto LABEL_13;
      }
      v13 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v23) >> 12) & 0xFFFFFFFFFLL;
      v15 = 48 * v13 - 0x58000000000LL;
      v16 = 0x200000000000000LL;
      if ( (*(_QWORD *)(v15 + 40) & 0x200000000000000LL) == 0 )
        break;
    }
    if ( (v14 & 0x42) != 0 )
    {
      *(_QWORD *)BugCheckParameter2 = BugCheckParameter4;
    }
    else
    {
      v17 = MiMapPageInHyperSpaceWorker(v13, 0LL, 0x80000000);
      LOBYTE(v18) = 17;
      v19 = (_QWORD *)((BugCheckParameter2 & 0xFFF) + v17);
      *v19 = BugCheckParameter4;
      MiUnmapPageInHyperSpaceWorker((__int64)v19, v18);
      MiLockPageAtDpcInline(v15);
      MiCaptureDirtyBitToPfn(v15);
      v20 = (struct _KEVENT *)MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v15 + 40)) >> 8) & 0x3FF);
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v21 )
        MiReleasePageFileInfo(v20, v21, 1);
    }
    LOBYTE(v16) = i;
    return MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v16);
  }
  return result;
}
