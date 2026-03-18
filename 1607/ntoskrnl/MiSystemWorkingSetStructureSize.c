/*
 * XREFs of MiSystemWorkingSetStructureSize @ 0x1405547C0
 * Callers:
 *     MiAssignSharedUserRanges @ 0x14013D1A0 (MiAssignSharedUserRanges.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiSystemWorkingSetStructureSize(unsigned __int64 a1)
{
  if ( a1 > 0xFFFFFFFFFLL )
    a1 = 0xFFFFFFFFFLL;
  return ((16 * a1 + 1073742335) & 0xFFFFFFFFC0000000uLL) + 8 * a1;
}
