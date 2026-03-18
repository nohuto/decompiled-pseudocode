/*
 * XREFs of HasMaximizedState @ 0x1C006E670
 * Callers:
 *     xxxInheritWindowMonitor @ 0x1C006CD18 (xxxInheritWindowMonitor.c)
 *     GetNewMonitor @ 0x1C006DEC0 (GetNewMonitor.c)
 *     ComputeProposedPerMonRect @ 0x1C0090C88 (ComputeProposedPerMonRect.c)
 *     DetectNewMonitor @ 0x1C01E5118 (DetectNewMonitor.c)
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
