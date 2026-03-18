/*
 * XREFs of MiClearContainingMapping @ 0x140005854
 * Callers:
 *     MiDeleteFinalPageTables @ 0x1400055B8 (MiDeleteFinalPageTables.c)
 *     MiDeleteTopLevelPage @ 0x1401CF84C (MiDeleteTopLevelPage.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400A99A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400A9AE0 (MiMapPageInHyperSpaceWorker.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

unsigned __int64 __fastcall MiClearContainingMapping(__int64 a1)
{
  __int64 v2; // rcx
  unsigned __int64 result; // rax
  unsigned int v4; // ebx
  __int64 v5; // rsi
  unsigned __int64 *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rbx

  v2 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL;
  result = *(_QWORD *)(48 * v2 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL;
  if ( result == ((*(_QWORD *)(a1 + 8) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
  {
    v4 = (*(_DWORD *)(a1 + 8) >> 3) & 0x1FF;
    v5 = MiMapPageInHyperSpaceWorker(v2, 0LL, 0x80000000LL);
    v6 = (unsigned __int64 *)(v5 + 8LL * v4);
    v7 = MI_READ_PTE_LOCK_FREE(v6);
    if ( (v7 & 1) != 0 )
    {
      v9 = v7 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
      *v6 = v9;
      if ( (unsigned int)MiPteInShadowRange(v6) )
        MiWritePteShadow(v6, v9);
    }
    LOBYTE(v8) = 17;
    return MiUnmapPageInHyperSpaceWorker(v5, v8, 0x80000000LL);
  }
  return result;
}
