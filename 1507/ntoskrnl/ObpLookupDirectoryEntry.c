/*
 * XREFs of ObpLookupDirectoryEntry @ 0x140595F30
 * Callers:
 *     ObInitSystem @ 0x1407C266C (ObInitSystem.c)
 * Callees:
 *     ObpLookupDirectoryEntryEx @ 0x1406AB994 (ObpLookupDirectoryEntryEx.c)
 */

__int64 __fastcall ObpLookupDirectoryEntry(void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  return ObpLookupDirectoryEntryEx(a1, 0, a4);
}
