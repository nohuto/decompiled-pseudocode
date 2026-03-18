/*
 * XREFs of MiMappingHasIoTracker @ 0x1400C0920
 * Callers:
 *     MmUnmapIoSpace @ 0x1400C07D0 (MmUnmapIoSpace.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiMappingHasIoTracker(unsigned __int64 a1)
{
  unsigned __int64 v2; // rax

  v2 = MI_READ_PTE_LOCK_FREE(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  if ( (v2 & 0x80u) == 0LL )
    v2 = MI_READ_PTE_LOCK_FREE(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  return (v2 >> 9) & 1;
}
