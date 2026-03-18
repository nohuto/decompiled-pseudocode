/*
 * XREFs of ?CleanupVadReference@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@@Z @ 0x1C0088564
 * Callers:
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C004CCB0 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000F8B0 (--3@YAXPEAX@Z.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C000FA58 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     CleanupVaRangeReference @ 0x1C00884D4 (CleanupVaRangeReference.c)
 */

void __fastcall VIDMM_GLOBAL::CleanupVadReference(VIDMM_GLOBAL *this, struct VIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE *a2)
{
  VIDMM_GLOBAL *v3; // rcx

  if ( *((_QWORD *)a2 + 3) )
  {
    CleanupVaRangeReference(*((VIDMM_MAPPED_VA_RANGE **)a2 + 1));
    VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v3, *((struct _LIST_ENTRY **)a2 + 3));
    operator delete(*((void **)a2 + 3));
    *((_QWORD *)a2 + 3) = 0LL;
    *(_QWORD *)a2 = 0LL;
    *((_QWORD *)a2 + 1) = 0LL;
  }
}
