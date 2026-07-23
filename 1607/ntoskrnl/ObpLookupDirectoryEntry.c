/*
 * XREFs of ObpLookupDirectoryEntry @ 0x140552DA4
 * Callers:
 *     ObInitSystem @ 0x1407A0370 (ObInitSystem.c)
 * Callees:
 *     ObpLookupDirectoryEntryEx @ 0x14040BDB0 (ObpLookupDirectoryEntryEx.c)
 */

__int64 __fastcall ObpLookupDirectoryEntry(unsigned __int64 *a1, unsigned __int16 *a2, char a3, __int64 a4)
{
  return ObpLookupDirectoryEntryEx(a1, a2, a3, 0, 0, a4);
}
