/*
 * XREFs of MiSetPageFileAllocationBits @ 0x1401118C8
 * Callers:
 *     MiFindFreePageFileSpace @ 0x1400B65FC (MiFindFreePageFileSpace.c)
 *     MiGatherPagefilePages @ 0x140119444 (MiGatherPagefilePages.c)
 *     MiFindPageFileWriteCluster @ 0x140125A40 (MiFindPageFileWriteCluster.c)
 * Callees:
 *     RtlSetBits @ 0x140028420 (RtlSetBits.c)
 */

void __fastcall MiSetPageFileAllocationBits(__int64 a1, ULONG a2, ULONG a3)
{
  __int64 v4; // rdi

  v4 = a3;
  RtlSetBits((PRTL_BITMAP)(*(_QWORD *)(a1 + 112) + 8LL), a2, a3);
  *(_QWORD *)(a1 + 24) -= v4;
}
