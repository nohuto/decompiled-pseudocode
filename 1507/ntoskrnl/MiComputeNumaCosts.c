/*
 * XREFs of MiComputeNumaCosts @ 0x1407E8E94
 * Callers:
 *     MmInitSystem @ 0x1407C8B48 (MmInitSystem.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     KeQueryNumaGraph @ 0x1407B5CFC (KeQueryNumaGraph.c)
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
      memmove(qword_14034EB68, NumaGraph, 2LL * (unsigned __int16)KeNumberNodes * (unsigned __int16)KeNumberNodes);
      ExFreePoolWithTag(v1, 0);
    }
  }
}
