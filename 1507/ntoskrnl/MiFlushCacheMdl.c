/*
 * XREFs of MiFlushCacheMdl @ 0x14014C9D0
 * Callers:
 *     MiReferenceIoPages @ 0x140116704 (MiReferenceIoPages.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x140139E60 (KeInvalidateAllCaches.c)
 */

__int64 MiFlushCacheMdl()
{
  ++dword_14034EBCC;
  KeInvalidateAllCaches();
  return 1LL;
}
