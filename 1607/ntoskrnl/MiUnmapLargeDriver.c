/*
 * XREFs of MiUnmapLargeDriver @ 0x140662F2C
 * Callers:
 *     MiUnloadSystemImage @ 0x140483468 (MiUnloadSystemImage.c)
 *     MiUseLargeDriverPage @ 0x1404ED9A4 (MiUseLargeDriverPage.c)
 * Callees:
 *     MiGetPdeAddress @ 0x1400AB5EC (MiGetPdeAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F25D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnmapLargePages @ 0x1401F5944 (MiUnmapLargePages.c)
 */

unsigned __int64 __fastcall MiUnmapLargeDriver(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 PdeAddress; // rax
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r10

  PdeAddress = MiGetPdeAddress(a1);
  v4 = (a2 + 511) & 0xFFFFFFFFFFFFFE00uLL;
  v5 = MI_READ_PTE_LOCK_FREE(PdeAddress);
  MiUnmapLargePages(v6, v4 << 12, 12);
  return MiFreeContiguousPages((__int64)MiSystemPartition, (v5 >> 12) & 0xFFFFFFFFFLL, v4);
}
