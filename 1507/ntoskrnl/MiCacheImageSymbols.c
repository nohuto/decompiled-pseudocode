/*
 * XREFs of MiCacheImageSymbols @ 0x140576D68
 * Callers:
 *     MiDriverLoadSucceeded @ 0x140574F44 (MiDriverLoadSucceeded.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14002B16C (RtlImageDirectoryEntryToData.c)
 */

PVOID __fastcall MiCacheImageSymbols(void *a1)
{
  ULONG Size; // [rsp+48h] [rbp+10h] BYREF

  return RtlImageDirectoryEntryToData(a1, 1u, 6u, &Size);
}
