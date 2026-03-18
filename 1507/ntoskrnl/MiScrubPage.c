/*
 * XREFs of MiScrubPage @ 0x140232D48
 * Callers:
 *     MiScrubNodeLargePageList @ 0x14022D300 (MiScrubNodeLargePageList.c)
 *     MiScrubAweMappedPage @ 0x1402324DC (MiScrubAweMappedPage.c)
 *     MiScrubLargeMappedPage @ 0x140232658 (MiScrubLargeMappedPage.c)
 *     MiScrubNode @ 0x140232B18 (MiScrubNode.c)
 *     MiScrubNonPagedPool @ 0x1406A49A4 (MiScrubNonPagedPool.c)
 *     MiScrubProcesses @ 0x1406AA9CC (MiScrubProcesses.c)
 * Callees:
 *     MiGetPteFromCopyList @ 0x140059330 (MiGetPteFromCopyList.c)
 *     KeCopyPage @ 0x140186CC0 (KeCopyPage.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     RtlScrubMemory @ 0x14024B380 (RtlScrubMemory.c)
 */

__int64 __fastcall MiScrubPage(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 *PteFromCopyList; // rax
  _QWORD *v6; // rdi
  __int64 v7; // rbx
  unsigned int v8; // r14d

  PteFromCopyList = MiGetPteFromCopyList((unsigned int *)a1, (a3 + 0x58000000000LL) / 48, -1LL);
  v6 = PteFromCopyList;
  v7 = (__int64)((_QWORD)PteFromCopyList << 25) >> 16;
  if ( a2 )
    KeCopyPage(a2, (__int64)((_QWORD)PteFromCopyList << 25) >> 16);
  v8 = RtlScrubMemory((PVOID)v7);
  if ( a2 )
    KeCopyPage(v7, a2);
  *v6 = 0LL;
  if ( (unsigned __int64)(v6 + 0x12090482600LL) <= 0x7F8 )
    MiWritePteShadow((__int64)v6, 0LL);
  ++*(_QWORD *)(a1 + 40);
  return v8;
}
