/*
 * XREFs of MiFlushCacheRange @ 0x1401E1D4C
 * Callers:
 *     MiRemovePhysicalMemory @ 0x140622D58 (MiRemovePhysicalMemory.c)
 * Callees:
 *     MI_FLUSH_CACHE_DUE_TO_ATTRIBUTE_CHANGE @ 0x1400A9904 (MI_FLUSH_CACHE_DUE_TO_ATTRIBUTE_CHANGE.c)
 *     KeInvalidateAllCaches @ 0x1400F3D78 (KeInvalidateAllCaches.c)
 */

__int64 __fastcall MiFlushCacheRange(__int64 a1, unsigned __int64 a2)
{
  unsigned __int8 CurrentIrql; // bl

  if ( a2 < (unsigned int)dword_1402FE71C )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    MI_FLUSH_CACHE_DUE_TO_ATTRIBUTE_CHANGE(a1, a2, 3);
    __writecr8(CurrentIrql);
    return 0LL;
  }
  else
  {
    ++dword_1402FE714;
    KeInvalidateAllCaches();
    return 1LL;
  }
}
