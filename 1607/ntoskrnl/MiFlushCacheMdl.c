/*
 * XREFs of MiFlushCacheMdl @ 0x14012710C
 * Callers:
 *     MiReferenceIoPages @ 0x14009BB00 (MiReferenceIoPages.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x1400B3758 (KeInvalidateAllCaches.c)
 */

__int64 MiFlushCacheMdl()
{
  ++dword_140326A4C;
  KeInvalidateAllCaches();
  return 1LL;
}
