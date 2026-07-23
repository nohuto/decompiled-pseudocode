/*
 * XREFs of MiReleaseCommitForResetPageCallback @ 0x1401E068C
 * Callers:
 *     <none>
 * Callees:
 *     MiUnlinkPageFromList @ 0x1400655C0 (MiUnlinkPageFromList.c)
 *     KeShouldYieldProcessor @ 0x140094EC0 (KeShouldYieldProcessor.c)
 *     MiLockTransitionLeafPage @ 0x1400B6E48 (MiLockTransitionLeafPage.c)
 *     MiWorkingSetIsContended @ 0x1400B8870 (MiWorkingSetIsContended.c)
 *     MiDiscardTransitionPte @ 0x140123E30 (MiDiscardTransitionPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiRelockWorkingSetExclusive @ 0x1401F2918 (MiRelockWorkingSetExclusive.c)
 */

LOGICAL __fastcall MiReleaseCommitForResetPageCallback(__int64 *a1, ULONG_PTR a2, ULONG_PTR a3)
{
  ULONG_PTR i; // rdi
  __int16 v6; // ax
  ULONG_PTR v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  LOGICAL result; // eax

  for ( i = a2; i <= a3; i += 8LL )
  {
    v6 = MI_READ_PTE_LOCK_FREE(i);
    if ( (v6 & 0x401) == 0 && (v6 & 0x800) != 0 )
    {
      v7 = MiLockTransitionLeafPage(i, 0LL);
      v8 = v7;
      if ( v7 )
      {
        if ( (*(_BYTE *)(v7 + 34) & 0x10) == 0 && (*(_DWORD *)(v7 + 16) & 4) == 0 && !*(_WORD *)(v7 + 32) )
        {
          MiUnlinkPageFromList(v7, 0);
          MiDiscardTransitionPte(v8, v9, v10, v11);
          ++a1[2];
        }
        _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
  }
  if ( MiWorkingSetIsContended(*a1) || (result = KeShouldYieldProcessor()) != 0 )
  {
    LOBYTE(v12) = *((_BYTE *)a1 + 8);
    return MiRelockWorkingSetExclusive(*a1, v12);
  }
  return result;
}
