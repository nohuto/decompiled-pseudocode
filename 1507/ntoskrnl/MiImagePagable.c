/*
 * XREFs of MiImagePagable @ 0x1404F5C58
 * Callers:
 *     MmResetDriverPaging @ 0x1404F523C (MmResetDriverPaging.c)
 *     MiEnablePagingOfDriver @ 0x1405972D8 (MiEnablePagingOfDriver.c)
 *     MiLockPagableSections @ 0x1407C9688 (MiLockPagableSections.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x140010760 (MiLookupDataTableEntry.c)
 */

PVOID *__fastcall MiImagePagable(PVOID *a1, unsigned __int64 a2)
{
  if ( (dword_1403D00D8 & 1) != 0
    || (*(_BYTE *)(8 * ((a2 >> 39) & 0x1FF) - 0x90482413000LL) & 1) != 0
    && (*(_BYTE *)(((a2 >> 27) & 0x1FFFF8) - 0x90482600000LL) & 1) != 0
    && (*(_BYTE *)(((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) & 0x81) == 0x81 )
  {
    return 0LL;
  }
  if ( !a1 )
    a1 = MiLookupDataTableEntry(a2, 0);
  if ( a2 + 0x70000000000LL <= 0x7FFFFFFFFFLL )
    return 0LL;
  return a1;
}
