/*
 * XREFs of HasMaximizedState @ 0x1C005C9DC
 * Callers:
 *     ComputeProposedPerMonRect @ 0x1C0045040 (ComputeProposedPerMonRect.c)
 *     xxxInheritWindowMonitor @ 0x1C005BED4 (xxxInheritWindowMonitor.c)
 *     GetNewMonitor @ 0x1C005C238 (GetNewMonitor.c)
 *     DetectNewMonitor @ 0x1C01E4C88 (DetectNewMonitor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HasMaximizedState(_BYTE *a1)
{
  unsigned int v1; // edx

  v1 = 1;
  if ( (a1[289] & 3) == 0 && (a1[55] & 1) == 0 )
    return (a1[44] & 0x40) != 0;
  return v1;
}
