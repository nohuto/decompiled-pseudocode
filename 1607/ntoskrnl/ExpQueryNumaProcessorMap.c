/*
 * XREFs of ExpQueryNumaProcessorMap @ 0x1403E5F6C
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeQueryHighestNodeNumber @ 0x140005090 (KeQueryHighestNodeNumber.c)
 *     KeQueryNodeActiveAffinity @ 0x14000509C (KeQueryNodeActiveAffinity.c)
 */

__int64 __fastcall ExpQueryNumaProcessorMap(_DWORD *a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v6; // eax
  unsigned int v7; // esi
  unsigned int v8; // ebx

  if ( a2 < 4 )
  {
    if ( a3 )
      *a3 = 4;
    return 3221225476LL;
  }
  else
  {
    *a1 = KeQueryHighestNodeNumber();
    v6 = KeQueryHighestNodeNumber() + 1;
    v7 = (a2 - 8) >> 4;
    if ( v7 > v6 )
      v7 = v6;
    if ( a2 >= 8 && (v8 = 0, v7) )
    {
      *a3 = 16 * v7 + 8;
      while ( v8 < v7 )
      {
        KeQueryNodeActiveAffinity(v8, (PGROUP_AFFINITY)&a1[4 * v8 + 2], 0LL);
        ++v8;
      }
      return 0LL;
    }
    else
    {
      *a3 = 4;
      return 0LL;
    }
  }
}
