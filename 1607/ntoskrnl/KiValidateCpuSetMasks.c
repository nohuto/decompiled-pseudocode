/*
 * XREFs of KiValidateCpuSetMasks @ 0x140111198
 * Callers:
 *     KeSetSystemAllowedCpuSets @ 0x140110DB8 (KeSetSystemAllowedCpuSets.c)
 *     KeSetCpuSetsProcess @ 0x1401D7720 (KeSetCpuSetsProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x1401D7844 (KeSetSelectedCpuSetsThread.c)
 *     KeSetTagCpuSets @ 0x1401D7948 (KeSetTagCpuSets.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiValidateCpuSetMasks(char *a1, unsigned int a2)
{
  unsigned int v3; // ecx
  signed __int64 v5; // r9

  if ( a2 <= (unsigned __int16)KiMaximumGroups )
  {
    v3 = 0;
    if ( !a2 )
      return 0LL;
    v5 = (char *)qword_1403AA618 - a1;
    while ( (~*(_QWORD *)&a1[v5] & *(_QWORD *)a1) == 0LL )
    {
      ++v3;
      a1 += 8;
      if ( v3 >= a2 )
        return 0LL;
    }
  }
  return 3221225903LL;
}
