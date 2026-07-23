/*
 * XREFs of MiMappingHasIoTracker @ 0x140025988
 * Callers:
 *     MmUnmapLockedPages @ 0x140025890 (MmUnmapLockedPages.c)
 *     MmUnmapIoSpace @ 0x14009ACB0 (MmUnmapIoSpace.c)
 *     MmProtectMdlSystemAddress @ 0x1401E4310 (MmProtectMdlSystemAddress.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140025B30 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiMappingHasIoTracker(__int64 a1)
{
  int i; // eax
  unsigned __int64 v2; // r10
  __int64 v3; // r11

  for ( i = MI_IS_PHYSICAL_ADDRESS(a1); i; --i )
    v2 = v3 + ((v2 >> 9) & 0x7FFFFFFFF8LL);
  return ((unsigned __int64)MI_READ_PTE_LOCK_FREE(v2) >> 9) & 1;
}
