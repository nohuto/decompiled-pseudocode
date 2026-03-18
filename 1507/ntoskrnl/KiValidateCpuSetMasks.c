/*
 * XREFs of KiValidateCpuSetMasks @ 0x14013356C
 * Callers:
 *     KeSetSystemAllowedCpuSets @ 0x140132B54 (KeSetSystemAllowedCpuSets.c)
 *     KeSetCpuSetsProcess @ 0x140205964 (KeSetCpuSetsProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140205B1C (KeSetSelectedCpuSetsThread.c)
 *     KeSetTagCpuSets @ 0x140205CAC (KeSetTagCpuSets.c)
 * Callees:
 *     KeQueryMaximumGroupCount @ 0x140021220 (KeQueryMaximumGroupCount.c)
 */

__int64 __fastcall KiValidateCpuSetMasks(char *a1, unsigned int a2)
{
  unsigned int v4; // ecx
  signed __int64 v6; // rdx

  if ( a2 <= KeQueryMaximumGroupCount() )
  {
    v4 = 0;
    if ( !a2 )
      return 0LL;
    v6 = (char *)qword_1403D15E8 - a1;
    while ( (~*(_QWORD *)&a1[v6] & *(_QWORD *)a1) == 0LL )
    {
      ++v4;
      a1 += 8;
      if ( v4 >= a2 )
        return 0LL;
    }
  }
  return 3221225903LL;
}
