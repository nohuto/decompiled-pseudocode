/*
 * XREFs of MiFlushCacheRange @ 0x1401F47C8
 * Callers:
 *     MiRemovePhysicalMemory @ 0x1406582A4 (MiRemovePhysicalMemory.c)
 * Callees:
 *     MiFlushCacheForAttributeChange @ 0x14001D474 (MiFlushCacheForAttributeChange.c)
 *     KeInvalidateAllCaches @ 0x1400B3758 (KeInvalidateAllCaches.c)
 */

__int64 __fastcall MiFlushCacheRange(__int64 a1, unsigned __int64 a2)
{
  unsigned __int8 CurrentIrql; // bl

  if ( a2 < (unsigned int)dword_140326A54 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    MiFlushCacheForAttributeChange(a1, a2, 3);
    __writecr8(CurrentIrql);
    return 0LL;
  }
  else
  {
    ++dword_140326A4C;
    KeInvalidateAllCaches();
    return 1LL;
  }
}
