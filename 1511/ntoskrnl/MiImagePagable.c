/*
 * XREFs of MiImagePagable @ 0x1403CF474
 * Callers:
 *     MmResetDriverPaging @ 0x1403CF258 (MmResetDriverPaging.c)
 *     MiEnablePagingOfDriver @ 0x140520BB0 (MiEnablePagingOfDriver.c)
 *     MiLockPagableSections @ 0x14074CDD0 (MiLockPagableSections.c)
 * Callees:
 *     MiGetPdeAddress @ 0x14001A3B4 (MiGetPdeAddress.c)
 *     MiLookupDataTableEntry @ 0x140035B30 (MiLookupDataTableEntry.c)
 */

PVOID *__fastcall MiImagePagable(PVOID *a1, unsigned __int64 a2)
{
  PVOID *v3; // rdx

  v3 = a1;
  if ( (dword_1403810E8 & 1) != 0
    || (*(_BYTE *)(8 * ((a2 >> 39) & 0x1FF) - 0x90482413000LL) & 1) != 0
    && (*(_BYTE *)(((a2 >> 27) & 0x1FFFF8) - 0x90482600000LL) & 1) != 0
    && (*(_BYTE *)MiGetPdeAddress(a2) & 0x81) == 0x81 )
  {
    return 0LL;
  }
  if ( !v3 )
    v3 = MiLookupDataTableEntry(a2, 0);
  if ( a2 + 0x70000000000LL <= 0x7FFFFFFFFFLL )
    return 0LL;
  return v3;
}
