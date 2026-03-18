/*
 * XREFs of MiSetPageFileAllocationBits @ 0x140109328
 * Callers:
 *     MiFindFreePageFileSpace @ 0x1400F4EDC (MiFindFreePageFileSpace.c)
 *     MiFindPageFileWriteCluster @ 0x1401084F0 (MiFindPageFileWriteCluster.c)
 *     MiGatherPagefilePages @ 0x14010AF5C (MiGatherPagefilePages.c)
 * Callees:
 *     RtlSetBits @ 0x140061410 (RtlSetBits.c)
 */

void __fastcall MiSetPageFileAllocationBits(__int64 a1, ULONG a2, ULONG a3)
{
  __int64 v4; // rdi

  v4 = a3;
  RtlSetBits((PRTL_BITMAP)(*(_QWORD *)(a1 + 112) + 8LL), a2, a3);
  *(_QWORD *)(a1 + 24) -= v4;
}
