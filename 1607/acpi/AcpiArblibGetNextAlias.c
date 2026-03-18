/*
 * XREFs of AcpiArblibGetNextAlias @ 0x1C009998C
 * Callers:
 *     AcpiArblibIsAliasedRangeAvailable @ 0x1C0099A58 (AcpiArblibIsAliasedRangeAvailable.c)
 *     AcpiPortarbAddAllocation @ 0x1C009DC20 (AcpiPortarbAddAllocation.c)
 *     AcpiPortarbBacktrackAllocation @ 0x1C009DD00 (AcpiPortarbBacktrackAllocation.c)
 * Callees:
 *     <none>
 */

char __fastcall AcpiArblibGetNextAlias(char a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // rax

  if ( (a1 & 4) != 0 )
  {
    v3 = a2 + 1024;
  }
  else
  {
    if ( (a1 & 8) == 0 )
      return 0;
    v3 = a2 + 4096;
  }
  if ( v3 <= 0xFFFF )
  {
    *a3 = v3;
    return 1;
  }
  return 0;
}
