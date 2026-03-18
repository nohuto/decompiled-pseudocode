/*
 * XREFs of ObpLookupDirectoryEntry @ 0x140525B20
 * Callers:
 *     ObInitSystem @ 0x140758E84 (ObInitSystem.c)
 * Callees:
 *     ObpLookupDirectoryEntryEx @ 0x14062DD54 (ObpLookupDirectoryEntryEx.c)
 */

__int64 __fastcall ObpLookupDirectoryEntry(void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  return ObpLookupDirectoryEntryEx(a1, 0, a4);
}
