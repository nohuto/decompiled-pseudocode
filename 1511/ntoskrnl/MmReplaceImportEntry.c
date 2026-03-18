/*
 * XREFs of MmReplaceImportEntry @ 0x1401CF09C
 * Callers:
 *     KsepPatchImportTableEntry @ 0x14061E19C (KsepPatchImportTableEntry.c)
 *     ViThunkReplaceAllThunkedImports @ 0x1406C3AD4 (ViThunkReplaceAllThunkedImports.c)
 *     ViThunkReplaceImportEntry @ 0x1406C3C2C (ViThunkReplaceImportEntry.c)
 *     ViThunkReplaceImportIfThunkedRegular @ 0x1406C3CA0 (ViThunkReplaceImportIfThunkedRegular.c)
 *     ViThunkReplaceSharedExports @ 0x1406C3CFC (ViThunkReplaceSharedExports.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiLookupDataTableEntry @ 0x140035B30 (MiLookupDataTableEntry.c)
 *     RtlImageDirectoryEntryToData @ 0x140035E48 (RtlImageDirectoryEntryToData.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiCopyOnWriteEx @ 0x14006EE60 (MiCopyOnWriteEx.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400A99A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400A9AE0 (MiMapPageInHyperSpaceWorker.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MiCaptureDirtyBitToPfn @ 0x1400B8278 (MiCaptureDirtyBitToPfn.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

char __fastcall MmReplaceImportEntry(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter4)
{
  PVOID *v4; // rax
  ULONG_PTR v5; // rbx
  PVOID v6; // rax
  char result; // al
  volatile LONG *v8; // rbp
  KIRQL i; // r15
  __int64 v10; // rdx
  __int64 v11; // r8
  char v12; // bl
  unsigned __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r13
  _QWORD *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  int *v21; // rax
  unsigned __int64 v22; // r9
  ULONG Size; // [rsp+70h] [rbp+18h] BYREF
  __int64 v24; // [rsp+78h] [rbp+20h] BYREF

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
    if ( BugCheckParameter2 + 0x70000000000LL > 0x7FFFFFFFFFLL )
      v8 = &dword_1402FFA80;
    else
      v8 = (volatile LONG *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 2968);
LABEL_12:
    for ( i = ExAcquireSpinLockExclusive(v8);
          ;
          MiCopyOnWriteEx(
            BugCheckParameter2,
            ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
            -1LL,
            i,
            0) )
    {
      v24 = MI_READ_PTE_LOCK_FREE((__int64 *)(((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL));
      v12 = v24;
      if ( (v24 & 1) == 0 )
      {
        LOBYTE(v10) = i;
        MiUnlockWorkingSetExclusive((__int64)v8, v10, v11);
        goto LABEL_12;
      }
      v13 = MI_READ_PTE_LOCK_FREE(&v24);
      v15 = 0x200000000000000LL;
      v16 = (v13 >> 12) & 0xFFFFFFFFFLL;
      v17 = 48 * v16 - 0x58000000000LL;
      if ( (*(_QWORD *)(v17 + 40) & 0x200000000000000LL) == 0 )
        break;
    }
    if ( (v12 & 0x42) != 0 )
    {
      *(_QWORD *)BugCheckParameter2 = BugCheckParameter4;
    }
    else
    {
      v18 = (_QWORD *)((BugCheckParameter2 & 0xFFF) + MiMapPageInHyperSpaceWorker(v16, 0LL, 0x80000000));
      *v18 = BugCheckParameter4;
      MiUnmapPageInHyperSpaceWorker((__int64)v18, 0x11u);
      MiLockPageAtDpcInline(v17, v19, v20);
      MiCaptureDirtyBitToPfn(v17);
      v21 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v17 + 40)) >> 8) & 0x3FF);
      _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v22 )
        MiReleasePageFileInfo((__int64)v21, v22, 1);
    }
    LOBYTE(v15) = i;
    return MiUnlockWorkingSetExclusive((__int64)v8, v15, v14);
  }
  else
  {
    *(_QWORD *)BugCheckParameter2 = BugCheckParameter4;
  }
  return result;
}
