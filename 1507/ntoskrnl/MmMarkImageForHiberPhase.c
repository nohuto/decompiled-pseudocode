/*
 * XREFs of MmMarkImageForHiberPhase @ 0x1403F2770
 * Callers:
 *     PoSetHiberRange @ 0x14014D3AC (PoSetHiberRange.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x140010760 (MiLookupDataTableEntry.c)
 */

unsigned __int64 __fastcall MmMarkImageForHiberPhase(unsigned __int64 a1)
{
  PVOID *v1; // rax

  v1 = MiLookupDataTableEntry(a1, 1);
  return MiEnumerateLeafPtes(
           (unsigned __int64)v1[6],
           ((unsigned __int64)v1[6] + *((unsigned int *)v1 + 16)) & 0xFFFFFFFFFFFFF000uLL,
           (__int64 (__fastcall *)(__int64, unsigned __int64, unsigned __int64))MiMarkNonPagedHiberPhasePages,
           0LL);
}
