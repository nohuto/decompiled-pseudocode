/*
 * XREFs of MiUnmapLargeDriver @ 0x1406A1198
 * Callers:
 *     MiUnloadSystemImage @ 0x140452B74 (MiUnloadSystemImage.c)
 *     MiUseLargeDriverPage @ 0x140573B54 (MiUseLargeDriverPage.c)
 * Callees:
 *     MiUnmapLargePages @ 0x14015D84C (MiUnmapLargePages.c)
 *     MiPteInShadowRange @ 0x140225548 (MiPteInShadowRange.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 */

__int64 __fastcall MiUnmapLargeDriver(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 *v4; // rdi
  unsigned __int64 PteShadow; // rbx

  v4 = (unsigned __int64 *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  PteShadow = *v4;
  if ( MiPteInShadowRange((__int64)v4) )
    PteShadow = MiReadPteShadow((__int64)v4, PteShadow);
  MiUnmapLargePages(a1, ((a2 + 511) & 0xFFFFFFFFFFFFFE00uLL) << 12, 12);
  return MiFreeContiguousPages(
           (__int64)MiSystemPartition,
           (PteShadow >> 12) & 0xFFFFFFFFFLL,
           (a2 + 511) & 0xFFFFFFFFFFFFFE00uLL);
}
