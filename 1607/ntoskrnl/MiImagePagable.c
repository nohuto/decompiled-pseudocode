/*
 * XREFs of MiImagePagable @ 0x14047DD7C
 * Callers:
 *     MmResetDriverPaging @ 0x14047DB58 (MmResetDriverPaging.c)
 *     MiEnablePagingOfDriver @ 0x140553BF4 (MiEnablePagingOfDriver.c)
 *     MiLockPagableSections @ 0x1407A41E0 (MiLockPagableSections.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x140014A30 (MiLookupDataTableEntry.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140025FB0 (MI_IS_PHYSICAL_ADDRESS.c)
 */

PVOID *__fastcall MiImagePagable(__int64 a1, unsigned __int64 a2)
{
  PVOID *v3; // r10

  if ( (dword_1403A9134 & 1) != 0 || (unsigned int)MI_IS_PHYSICAL_ADDRESS(a2) )
    return 0LL;
  if ( !v3 )
    v3 = MiLookupDataTableEntry(a2, 0);
  if ( a2 >= qword_140326910 && a2 < qword_140326910 + 0x8000000000LL )
    return 0LL;
  else
    return v3;
}
