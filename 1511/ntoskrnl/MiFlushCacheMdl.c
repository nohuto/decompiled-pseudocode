/*
 * XREFs of MiFlushCacheMdl @ 0x140117A20
 * Callers:
 *     MiReferenceIoPages @ 0x1400C16A0 (MiReferenceIoPages.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x1400F3D78 (KeInvalidateAllCaches.c)
 */

__int64 MiFlushCacheMdl()
{
  ++dword_1402FE714;
  KeInvalidateAllCaches();
  return 1LL;
}
