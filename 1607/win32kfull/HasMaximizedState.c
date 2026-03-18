/*
 * XREFs of HasMaximizedState @ 0x1C00712A4
 * Callers:
 *     GetNewMonitor @ 0x1C0070AA8 (GetNewMonitor.c)
 *     xxxInheritWindowMonitor @ 0x1C00712C4 (xxxInheritWindowMonitor.c)
 *     DetectNewMonitor @ 0x1C01DB9AC (DetectNewMonitor.c)
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
