/*
 * XREFs of MiDeleteTransitionPte @ 0x140010618
 * Callers:
 *     MiDeleteMergedPte @ 0x14000E9A8 (MiDeleteMergedPte.c)
 *     MiDeleteSystemPagableVm @ 0x14003C140 (MiDeleteSystemPagableVm.c)
 *     MiDeletePteRun @ 0x14004FE20 (MiDeletePteRun.c)
 *     MiSetProtectionOnSection @ 0x14005BC70 (MiSetProtectionOnSection.c)
 *     MiDeletePteRange @ 0x1400A1370 (MiDeletePteRange.c)
 *     MiRemoveMappedPtes @ 0x1400B6D00 (MiRemoveMappedPtes.c)
 *     MiDeleteSystemPte @ 0x1401141C8 (MiDeleteSystemPte.c)
 * Callees:
 *     MiLockTransitionLeafPage @ 0x14001068C (MiLockTransitionLeafPage.c)
 *     MiDeleteLockedTransitionPte @ 0x140010C30 (MiDeleteLockedTransitionPte.c)
 *     MI_IS_PFN_SYSTEM_CHARGED @ 0x1400EEC9C (MI_IS_PFN_SYSTEM_CHARGED.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDriverPageIsDangling @ 0x1401CEE4C (MiDriverPageIsDangling.c)
 */

__int64 __fastcall MiDeleteTransitionPte(ULONG_PTR BugCheckParameter2, char a2)
{
  __int64 v4; // rax
  __int64 v6; // r10

  if ( (MI_READ_PTE_LOCK_FREE(BugCheckParameter2) & 0x400) != 0 )
    return 1LL;
  v4 = MiLockTransitionLeafPage(BugCheckParameter2);
  if ( !v4 )
    return 1LL;
  if ( (a2 & 2) != 0 )
  {
    if ( (unsigned int)MI_IS_PFN_SYSTEM_CHARGED(v4) )
    {
      MiDriverPageIsDangling();
      *(_BYTE *)(v6 + 35) &= ~0x20u;
    }
  }
  return MiDeleteLockedTransitionPte(BugCheckParameter2);
}
