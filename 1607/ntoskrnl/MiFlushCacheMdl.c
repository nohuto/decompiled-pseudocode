/*
 * XREFs of MiFlushCacheMdl @ 0x140126B9C
 * Callers:
 *     MiReferenceIoPages @ 0x14009C300 (MiReferenceIoPages.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x1400B5930 (KeInvalidateAllCaches.c)
 */

__int64 MiFlushCacheMdl()
{
  ++dword_140326A0C;
  KeInvalidateAllCaches();
  return 1LL;
}
