/*
 * XREFs of MiTryDeleteTransitionPte @ 0x1400B8F70
 * Callers:
 *     MiSetProtectionOnSection @ 0x140043BF0 (MiSetProtectionOnSection.c)
 *     MiDeletePteRun @ 0x140065140 (MiDeletePteRun.c)
 *     MiDeleteMergedPte @ 0x1400B8E10 (MiDeleteMergedPte.c)
 *     MiRemoveMappedPtes @ 0x140100320 (MiRemoveMappedPtes.c)
 *     MiDeletePteRange @ 0x1401007D0 (MiDeletePteRange.c)
 *     MiDeleteSystemPte @ 0x140122F44 (MiDeleteSystemPte.c)
 * Callees:
 *     MiLockTransitionLeafPage @ 0x1400B8FB8 (MiLockTransitionLeafPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F25D0 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiTryDeleteTransitionPte(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v2; // rax

  if ( (MI_READ_PTE_LOCK_FREE(BugCheckParameter2) & 0x400) != 0 )
    return 1LL;
  v2 = MiLockTransitionLeafPage(BugCheckParameter2);
  if ( !v2 )
    return 1LL;
  else
    return MiDeleteTransitionPte(BugCheckParameter2, v2);
}
