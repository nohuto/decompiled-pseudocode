/*
 * XREFs of MiDeleteTransitionPte @ 0x140082E6C
 * Callers:
 *     MiDeleteMergedPte @ 0x140005510 (MiDeleteMergedPte.c)
 *     MiDeletePteRange @ 0x140038650 (MiDeletePteRange.c)
 *     MiRemoveMappedPtes @ 0x140039410 (MiRemoveMappedPtes.c)
 *     MiSetProtectionOnSection @ 0x14008FAB0 (MiSetProtectionOnSection.c)
 *     MiDeleteSystemPagableVm @ 0x1400AFDF0 (MiDeleteSystemPagableVm.c)
 *     MiDeletePteRun @ 0x1400C3A20 (MiDeletePteRun.c)
 *     MiDereferenceTebVad @ 0x1401273DC (MiDereferenceTebVad.c)
 *     MiDeleteSystemPte @ 0x1401498C4 (MiDeleteSystemPte.c)
 * Callees:
 *     MiLockTransitionLeafPage @ 0x140082F6C (MiLockTransitionLeafPage.c)
 *     MiDeleteLockedTransitionPte @ 0x140084B60 (MiDeleteLockedTransitionPte.c)
 *     MiDriverPageIsDangling @ 0x14020E314 (MiDriverPageIsDangling.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 */

__int64 __fastcall MiDeleteTransitionPte(_QWORD *BugCheckParameter2, char a2)
{
  __int64 v2; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // r10

  v2 = *BugCheckParameter2;
  if ( (unsigned __int64)(BugCheckParameter2 + 0x12090482600LL) <= 0x7F8 )
    LOWORD(v2) = MiReadPteShadow(BugCheckParameter2, *BugCheckParameter2);
  if ( (v2 & 0x400) != 0 )
    return 1LL;
  v6 = MiLockTransitionLeafPage((ULONG_PTR)BugCheckParameter2);
  if ( !v6 )
    return 1LL;
  if ( (a2 & 2) != 0 )
  {
    v7 = *(_QWORD *)(v6 + 8) | 0x8000000000000000uLL;
    if ( (v7 > (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
       || v7 < 0xFFFFF68000000000uLL)
      && ((*(unsigned __int8 *)(v6 + 35) >> 5) & 1) != 0 )
    {
      MiDriverPageIsDangling(v6);
      *(_BYTE *)(v8 + 35) &= ~0x20u;
    }
  }
  return MiDeleteLockedTransitionPte((ULONG_PTR)BugCheckParameter2);
}
