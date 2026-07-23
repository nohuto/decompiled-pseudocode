/*
 * XREFs of MmMarkImageForHiberPhase @ 0x1403CB7C4
 * Callers:
 *     PoSetHiberRange @ 0x1401133D0 (PoSetHiberRange.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x1400145B0 (MiLookupDataTableEntry.c)
 *     MiEnumerateLeafPtes @ 0x1400B7AA0 (MiEnumerateLeafPtes.c)
 */

unsigned __int64 __fastcall MmMarkImageForHiberPhase(unsigned __int64 a1)
{
  PVOID *v1; // rax

  v1 = MiLookupDataTableEntry(a1, 1);
  return MiEnumerateLeafPtes(
           (unsigned __int64)v1[6],
           ((unsigned __int64)v1[6] + *((unsigned int *)v1 + 16)) & 0xFFFFFFFFFFFFF000uLL,
           (__int64 (__fastcall *)(__int64, unsigned __int64, unsigned __int64))MiMarkNonPagedHiberPhasePages,
           0LL,
           0);
}
