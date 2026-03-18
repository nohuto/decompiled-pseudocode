/*
 * XREFs of MiClearContainingMapping @ 0x1400EF404
 * Callers:
 *     MiDeleteFinalPageTables @ 0x1400EEEC4 (MiDeleteFinalPageTables.c)
 *     MiDeleteTopLevelPage @ 0x14020F0E8 (MiDeleteTopLevelPage.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14005A4E0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400E6520 (MiMapPageInHyperSpaceWorker.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

unsigned __int64 __fastcall MiClearContainingMapping(__int64 a1)
{
  __int64 v2; // rcx
  unsigned __int64 result; // rax
  unsigned int v4; // ebx
  unsigned __int64 v5; // rax
  __int64 v6; // r11
  unsigned __int64 v7; // r10
  __int64 v8; // rdi
  __int64 *v9; // r9
  __int64 PteShadow; // rax
  unsigned __int64 v11; // rax

  v2 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL;
  result = *(_QWORD *)(48 * v2 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL;
  if ( result == ((*(_QWORD *)(a1 + 8) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
  {
    v4 = (*(_DWORD *)(a1 + 8) >> 3) & 0x1FF;
    v5 = MiMapPageInHyperSpaceWorker(v2, 0LL);
    v6 = 0x12090482600LL;
    v7 = 2040LL;
    v8 = v5;
    v9 = (__int64 *)(v5 + 8LL * v4);
    PteShadow = *v9;
    if ( (unsigned __int64)(v9 + 0x12090482600LL) <= 0x7F8 )
      PteShadow = MiReadPteShadow(v9, *v9);
    if ( (PteShadow & 1) != 0 )
    {
      v11 = PteShadow & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
      *v9 = v11;
      if ( (unsigned __int64)&v9[v6] <= v7 )
        MiWritePteShadow(v9, v11);
    }
    return MiUnmapPageInHyperSpaceWorker(v8, 0x11u);
  }
  return result;
}
