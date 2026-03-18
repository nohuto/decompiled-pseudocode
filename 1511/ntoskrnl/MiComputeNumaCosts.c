/*
 * XREFs of MiComputeNumaCosts @ 0x140772310
 * Callers:
 *     MmInitSystem @ 0x14074C514 (MmInitSystem.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     KeQueryNumaGraph @ 0x140742E8C (KeQueryNumaGraph.c)
 */

void MiComputeNumaCosts()
{
  PVOID NumaGraph; // rax
  void *v1; // rbx

  if ( (unsigned __int16)KeNumberNodes > 1u )
  {
    NumaGraph = KeQueryNumaGraph();
    v1 = NumaGraph;
    if ( NumaGraph )
    {
      memmove(qword_1402FE6B8, NumaGraph, 2LL * (unsigned __int16)KeNumberNodes * (unsigned __int16)KeNumberNodes);
      ExFreePoolWithTag(v1, 0);
    }
  }
}
