/*
 * XREFs of MiUnmapLargeDriver @ 0x140621B08
 * Callers:
 *     MiUseLargeDriverPage @ 0x1403CC26C (MiUseLargeDriverPage.c)
 *     MiUnloadSystemImage @ 0x1403CF92C (MiUnloadSystemImage.c)
 * Callees:
 *     MiGetPdeAddress @ 0x14001A3B4 (MiGetPdeAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnmapLargePages @ 0x1401E2648 (MiUnmapLargePages.c)
 */

unsigned __int64 __fastcall MiUnmapLargeDriver(unsigned __int64 a1, __int64 a2)
{
  __int64 *PdeAddress; // rax
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbx

  PdeAddress = (__int64 *)MiGetPdeAddress(a1);
  v5 = (a2 + 511) & 0xFFFFFFFFFFFFFE00uLL;
  v6 = MI_READ_PTE_LOCK_FREE(PdeAddress);
  MiUnmapLargePages(a1, v5 << 12, 12);
  return MiFreeContiguousPages((__int64)MiSystemPartition, (v6 >> 12) & 0xFFFFFFFFFLL, v5);
}
