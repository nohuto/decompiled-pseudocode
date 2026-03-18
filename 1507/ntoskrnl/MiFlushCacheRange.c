/*
 * XREFs of MiFlushCacheRange @ 0x14022D8D8
 * Callers:
 *     MiRemovePhysicalMemory @ 0x1406A1FE8 (MiRemovePhysicalMemory.c)
 * Callees:
 *     MI_FLUSH_CACHE_DUE_TO_ATTRIBUTE_CHANGE @ 0x1400E5B38 (MI_FLUSH_CACHE_DUE_TO_ATTRIBUTE_CHANGE.c)
 *     KeInvalidateAllCaches @ 0x140139E60 (KeInvalidateAllCaches.c)
 */

__int64 __fastcall MiFlushCacheRange(__int64 a1, unsigned __int64 a2)
{
  unsigned __int8 CurrentIrql; // bl

  if ( a2 < (unsigned int)dword_14034EBD4 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    MI_FLUSH_CACHE_DUE_TO_ATTRIBUTE_CHANGE(a1, a2, 3);
    __writecr8(CurrentIrql);
    return 0LL;
  }
  else
  {
    ++dword_14034EBCC;
    KeInvalidateAllCaches();
    return 1LL;
  }
}
