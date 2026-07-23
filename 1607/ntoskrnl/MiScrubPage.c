/*
 * XREFs of MiScrubPage @ 0x1401FE690
 * Callers:
 *     MiScrubNodeLargePageList @ 0x1401FBAD4 (MiScrubNodeLargePageList.c)
 *     MiScrubAweMappedPage @ 0x1401FE050 (MiScrubAweMappedPage.c)
 *     MiScrubLargeMappedPage @ 0x1401FE160 (MiScrubLargeMappedPage.c)
 *     MiScrubNode @ 0x1401FE48C (MiScrubNode.c)
 *     MiScrubNonPagedPool @ 0x140659F44 (MiScrubNonPagedPool.c)
 *     MiScrubProcesses @ 0x140664F24 (MiScrubProcesses.c)
 * Callees:
 *     MiGetPteFromCopyList @ 0x140034700 (MiGetPteFromCopyList.c)
 *     KeCopyPage @ 0x140162490 (KeCopyPage.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     RtlScrubMemory @ 0x1402165A0 (RtlScrubMemory.c)
 */

__int64 __fastcall MiScrubPage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rbx
  unsigned __int64 PteFromCopyList; // rsi
  unsigned int v9; // r15d
  __int64 v10; // rcx

  if ( a4 )
  {
    v7 = a4;
    PteFromCopyList = 0LL;
  }
  else
  {
    PteFromCopyList = (unsigned __int64)MiGetPteFromCopyList((unsigned int *)a1, (a3 + 0x58000000000LL) / 48, -1LL);
    v7 = (__int64)(PteFromCopyList << 25) >> 16;
  }
  if ( a2 )
    KeCopyPage(a2, v7);
  v9 = RtlScrubMemory((PVOID)v7);
  if ( a2 )
    KeCopyPage(v7, a2);
  if ( !a4 )
  {
    *(_QWORD *)PteFromCopyList = 0LL;
    if ( MiPteInShadowRange(PteFromCopyList) )
      MiWritePteShadow(v10, 0LL);
  }
  ++*(_QWORD *)(a1 + 40);
  return v9;
}
