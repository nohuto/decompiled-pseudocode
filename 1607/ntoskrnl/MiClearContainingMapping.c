/*
 * XREFs of MiClearContainingMapping @ 0x140075DB4
 * Callers:
 *     MiDeleteFinalPageTables @ 0x140075B18 (MiDeleteFinalPageTables.c)
 *     MiDeleteTopLevelPage @ 0x1401DF7E0 (MiDeleteTopLevelPage.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14001D720 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140034510 (MiMapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiClearContainingMapping(__int64 a1)
{
  __int64 v2; // rcx
  unsigned __int64 result; // rax
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned __int64 *v7; // r9
  __int64 v8; // r10
  __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx

  v2 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL;
  result = *(_QWORD *)(48 * v2 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL;
  if ( result == ((*(_QWORD *)(a1 + 8) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
  {
    v4 = (*(_DWORD *)(a1 + 8) >> 3) & 0x1FF;
    v5 = MiMapPageInHyperSpaceWorker(v2, 0LL, 0x80000000);
    v6 = MI_READ_PTE_LOCK_FREE(v5 + 8LL * v4);
    v9 = v6;
    if ( (v6 & 1) != 0 )
    {
      v10 = v6 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
      *v7 = v10;
      if ( (unsigned int)MiPteInShadowRange(v7, v10) )
        MiWritePteShadow(v11, v9);
    }
    LOBYTE(v9) = 17;
    return MiUnmapPageInHyperSpaceWorker(v8, v9);
  }
  return result;
}
