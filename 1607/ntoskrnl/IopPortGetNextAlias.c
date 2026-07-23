/*
 * XREFs of IopPortGetNextAlias @ 0x1405587F8
 * Callers:
 *     IopPortAddAllocation @ 0x140558770 (IopPortAddAllocation.c)
 *     IopPortBacktrackAllocation @ 0x14062EA10 (IopPortBacktrackAllocation.c)
 * Callees:
 *     <none>
 */

char __fastcall IopPortGetNextAlias(char a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v4; // rax

  if ( (a1 & 4) != 0 )
  {
    v4 = a2 + 1024;
  }
  else
  {
    if ( (a1 & 8) == 0 )
      return 0;
    v4 = a2 + 4096;
  }
  if ( v4 > 0xFFFF )
    return 0;
  *a3 = v4;
  return 1;
}
