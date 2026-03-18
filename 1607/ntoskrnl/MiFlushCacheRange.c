/*
 * XREFs of MiFlushCacheRange @ 0x1401F499C
 * Callers:
 *     MiRemovePhysicalMemory @ 0x1406581C0 (MiRemovePhysicalMemory.c)
 * Callees:
 *     MiFlushCacheForAttributeChange @ 0x14001D8F4 (MiFlushCacheForAttributeChange.c)
 *     KeInvalidateAllCaches @ 0x1400B5930 (KeInvalidateAllCaches.c)
 */

__int64 __fastcall MiFlushCacheRange(__int64 a1, unsigned __int64 a2)
{
  unsigned __int8 CurrentIrql; // bl

  if ( a2 < (unsigned int)dword_140326A14 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    MiFlushCacheForAttributeChange(a1, a2, 3);
    __writecr8(CurrentIrql);
    return 0LL;
  }
  else
  {
    ++dword_140326A0C;
    KeInvalidateAllCaches();
    return 1LL;
  }
}
