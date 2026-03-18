/*
 * XREFs of MiCacheImageSymbols @ 0x1404EF3AC
 * Callers:
 *     MiDriverLoadSucceeded @ 0x140484174 (MiDriverLoadSucceeded.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14007BAEC (RtlImageDirectoryEntryToData.c)
 */

PVOID __fastcall MiCacheImageSymbols(void *a1)
{
  ULONG Size; // [rsp+48h] [rbp+10h] BYREF

  return RtlImageDirectoryEntryToData(a1, 1u, 6u, &Size);
}
