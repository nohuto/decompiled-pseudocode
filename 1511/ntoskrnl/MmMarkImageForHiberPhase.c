/*
 * XREFs of MmMarkImageForHiberPhase @ 0x14039FC14
 * Callers:
 *     PoSetHiberRange @ 0x1401188B0 (PoSetHiberRange.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x140035B30 (MiLookupDataTableEntry.c)
 */

unsigned __int64 __fastcall MmMarkImageForHiberPhase(unsigned __int64 a1)
{
  PVOID *v1; // rax

  v1 = MiLookupDataTableEntry(a1, 1);
  return MiEnumerateLeafPtes(
           (unsigned __int64)v1[6],
           ((unsigned __int64)v1[6] + *((unsigned int *)v1 + 16)) & 0xFFFFFFFFFFFFF000uLL,
           (void (__fastcall *)(__int64, unsigned __int64, unsigned __int64))MiMarkNonPagedHiberPhasePages,
           0LL);
}
